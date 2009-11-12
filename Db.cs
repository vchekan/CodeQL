// 
//  Copyright (C) 2009 Vadim Chekan
// 
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
// 
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
// 

using System;
using System.Data.SQLite;
using System.Data;
using System.Collections.Generic;
using System.IO;
using Mono.Cecil;

namespace CodeQL
{
	public class Db : IDisposable
	{
		const string DB_FILE_NAME = "codeql.db3";
		const string CONN_STRING = "Data Source="+DB_FILE_NAME+";FailIfMissing=false";
		SQLiteConnection _conn;
		public Action OnStart;
		public Action OnStop;
		static readonly log4net.ILog _log = log4net.LogManager.GetLogger(typeof(Db).FullName);
		
		/*static Db() {
			using(var conn = new SQLiteConnection(CONN_STRING)) {
				conn.Open();
				Create(conn);
				_log.Debug("Db initialized");
			}
		}*/
		
		public Db() {
			Conn.Open();	
			Create(Conn);
			_log.Debug("Db initialized");
		}
		
		SQLiteConnection Conn {
			get { return _conn ?? (_conn = new SQLiteConnection(CONN_STRING)); }
		}
		
		public static void Delete() {
			if(File.Exists(DB_FILE_NAME)) {
				File.Delete(DB_FILE_NAME);
				_log.Debug("Db file deleted");
			}
		}
		
		public void ExecuteReader(string sql, Action<IDataReader> beforeRead, Action<IDataReader> onRead) {
			#region contract
			if(onRead == null)
				throw new ArgumentNullException("onRead");
			#endregion
			var cmd = Conn.CreateCommand();
			cmd.CommandText = sql;
			if(OnStart != null)
				OnStart();
			try {
				using(var reader = cmd.ExecuteReader()) {
					if(beforeRead != null)
						beforeRead(reader);
					while(reader.Read())
						onRead(reader);
				}
			} finally {
				if(OnStop != null)
					OnStop();
			}
		}

		public IEnumerable<T> ExecuteReader<T>(string sql, Action<IDataReader> beforeRead, Func<IDataReader,T> materializer) {
			#region contract
			if(materializer == null)
				throw new ArgumentNullException("onRead");
			#endregion
			var cmd = Conn.CreateCommand();
			cmd.CommandText = sql;
			if(OnStart != null)
				OnStart();
			try {
				using(var reader = cmd.ExecuteReader()) {
					if(beforeRead != null)
						beforeRead(reader);
					while(reader.Read())
						yield return materializer(reader);
				}
			} finally {
				if(OnStop != null)
					OnStop();
			}
		}

		
		private static void Create(SQLiteConnection conn) {
			var cmd = conn.CreateCommand();
			#region sql
			cmd.CommandText = @"
create table if not exists project(id integer primary key, filename text, title text, autoscan int, created int);
create table if not exists projectFiles(projectId int, versionId int, path text);
create table if not exists projectVersion(id int, name text);
create table if not exists xobject(id integer primary key autoincrement, type int, name text, parentId int);
create table if not exists assembly(id integer primary key, fileName text);
create table if not exists type(id integer primary key, namespace text);
create table if not exists xtree(objectId integer, parentId integer, level int); 
	create index if not exists i_xtree1 on xtree(objectId, parentId);
	create index if not exists i_xtree2 on xtree(parentId);
select count(*) from project;";
			#endregion
			long count = (long)cmd.ExecuteScalar();
			if(count == 0) {
				cmd.CommandText = @"insert into project(filename, title, autoscan, created) values('', 'Workbench', 1, "+DateTime.UtcNow.Ticks+")";
				cmd.ExecuteNonQuery();
				_log.Debug("Inserted default project");
			}
		}
		
		public long InsertType(TypeDefinition type, long asmId) {
			var cmd = Conn.CreateCommand();
			cmd.CommandText = @"insert into xobject(type,name,parentId) values(4,@name,@parentId);
insert into type(namespace) values(@namespace); select last_insert_rowid();
insert into xtree(objectId, parentId, level) select last_insert_rowid(), parentId, level+1 from xtree where objectId=@parentId;
insert into xtree(objectId, parentId, level) values(last_insert_rowid(), last_insert_rowid(), 0);
select last_insert_rowid();";
			cmd.Parameters.AddWithValue("@name", type.Name);
			cmd.Parameters.AddWithValue("@namespace", type.Namespace);
			cmd.Parameters.AddWithValue("@parentId", asmId);
			return (long)cmd.ExecuteScalar();
		}

		public long InsertAssembly(AssemblyDefinition asm, string fileName, long parentId) {
			using(var tx = Conn.BeginTransaction()) {
				var cmd = Conn.CreateCommand();
				cmd.CommandText = @"insert into xobject(type,name,parentId) values(3,@name,@parentId);
insert into assembly(id, fileName) values(last_insert_rowid(), @fileName);
insert into xtree(objectId, parentId, level) select last_insert_rowid(), parentId, level+1 from xtree where objectId=@parentId;
insert into xtree(objectId, parentId, level) values(last_insert_rowid(), last_insert_rowid(), 0);
select last_insert_rowid();";
				cmd.Parameters.AddWithValue("@name", asm.Name.Name);
				cmd.Parameters.AddWithValue("@parentId", parentId);
				cmd.Parameters.AddWithValue("@fileName", fileName);
				long id = (long)cmd.ExecuteScalar();
				tx.Commit();
				return id;
			}
		}
		
		public long InsertAttribute(CustomAttribute att, long typeId) {
			using(var tx = Conn.BeginTransaction()) {
				var cmd = Conn.CreateCommand();
				cmd.CommandText = @"insert into xobject(type,name,parentId) values(8,@name,@parentId);
insert into xtree(objectId, parentId, level) select last_insert_rowid(), parentId, level+1 from xtree where objectId=@parentId;
insert into xtree(objectId, parentId, level) values(last_insert_rowid(), last_insert_rowid(), 0);
select last_insert_rowid();";
				cmd.Parameters.AddWithValue("@name", att.Constructor.DeclaringType.Name);
				cmd.Parameters.AddWithValue("@parentId", typeId);
				long id = (long)cmd.ExecuteScalar();
				tx.Commit();
				return id;
			}
		}
		
		public long InsertConstructor(MethodDefinition ctor, long typeId) {
			return InsertInternal(ctor.DeclaringType.Name, typeId, 9);
		}
		
		public long InsertEvent(EventDefinition evt, long typeId) {
			return InsertInternal(evt.Name, typeId, 10);
		}

		public long InsertField(FieldDefinition field, long typeId) {
			return InsertInternal(field.Name, typeId, 11);
		}

		public long InsertGenericParam(GenericParameter generic, long typeId) {
			return InsertInternal(generic.Name, typeId, 12);
		}

		public long InsertProperty(PropertyDefinition prop, long typeId) {
			return InsertInternal(prop.Name, typeId, 13);
		}

		public long InsertInterface(TypeReference iface, long typeId) {
			return InsertInternal(iface.Name, typeId, 14);
		}

		public long InsertMethod(MethodDefinition method, long typeId) {
			return InsertInternal(method.Name, typeId, 6);
		}
		
		public long InsertInternal(string name, long parentId, int type) {
			using(var tx = Conn.BeginTransaction()) {
				var cmd = Conn.CreateCommand();
				cmd.CommandText = @"insert into xobject(type,name,parentId) values(@type,@name,@parentId);
insert into xtree(objectId, parentId, level) select last_insert_rowid(), parentId, level+1 from xtree where objectId=@parentId;
insert into xtree(objectId, parentId, level) values(last_insert_rowid(), last_insert_rowid(), 0);
select last_insert_rowid();";
				cmd.Parameters.AddWithValue("@name", name);
				cmd.Parameters.AddWithValue("@parentId", parentId);
				cmd.Parameters.AddWithValue("@type", type);
				long id = (long)cmd.ExecuteScalar();
				tx.Commit();
				return id;
			}
		}

		public List<Project> ProjectsLoad() {
			List<Project> res = new List<Project>();
			ExecuteReader("select * from Project order by Created", null, reader => {
				res.Add(new Project(){
					FileName = (string)reader["filename"],
					Title = (string)reader["title"],
					Autoscan = ((int)reader["autoscan"]) != 0
				});
			});
			return res;
		}
		
		void IDisposable.Dispose() {
			if(_conn != null) {
				_conn.Dispose();
				_conn = null;
			}
		}
	}
}
