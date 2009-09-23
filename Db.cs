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
using Mono.Cecil;

namespace CodeQL
{
	public class Db : IDisposable
	{
		const string CONN_STRING = "Data Source=codeql.db3;FailIfMissing=false";
		SQLiteConnection _conn = new SQLiteConnection(CONN_STRING);
		
		static Db() {
			using(var conn = new SQLiteConnection(CONN_STRING)) {
				conn.Open();
				Create(conn);
			}
		}
		
		public Db() {
			_conn.Open();	
		}
		
		public void ExecuteReader(string sql, Action<IDataReader> beforeRead, Action<IDataReader> onRead) {
			#region contract
			if(onRead == null)
				throw new ArgumentNullException("onRead");
			#endregion
			var cmd = _conn.CreateCommand();
			cmd.CommandText = sql;
			using(var reader = cmd.ExecuteReader()) {
				if(beforeRead != null)
					beforeRead(reader);
				while(reader.Read())
					onRead(reader);
			}
		}
		
		private static void Create(SQLiteConnection conn) {
				var cmd = conn.CreateCommand();
				#region sql
				cmd.CommandText = @"
create table if not exists project(id integer primary key, name text);
create table if not exists projectFiles(projectId int, versionId int, path text);
create table if not exists projectVersion(id int, name text);
create table if not exists xobject(id integer primary key autoincrement, type int, name text, parentId int);
create table if not exists assembly(id integer primary key, fileName text);
create table if not exists type(id integer primary key, namespace text);
create table if not exists xtree(objectId integer, parentId integer, level int); 
	create index if not exists i_xtree1 on xtree(objectId, parentId);
	create index if not exists i_xtree2 on xtree(parentId);";
				#endregion
				cmd.ExecuteNonQuery();
		}
		
		public long InsertType(TypeDefinition type, long asmId) {
			var cmd = _conn.CreateCommand();
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
			using(var tx = _conn.BeginTransaction()) {
				var cmd = _conn.CreateCommand();
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
			using(var tx = _conn.BeginTransaction()) {
				var cmd = _conn.CreateCommand();
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

		void IDisposable.Dispose() {
			if(_conn != null) {
				_conn.Dispose();
				_conn = null;
			}
		}
	}
}
