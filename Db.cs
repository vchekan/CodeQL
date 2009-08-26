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
		
		public void Create() {
				var cmd = _conn.CreateCommand();
				#region sql
				cmd.CommandText = @"
create table if not exists project(id int, name text);
create table if not exists projectFiles(projectId int, versionId int, path text);
create table if not exists projectVersion(id int, name text);
create table if not exists xobject(id integer primary key autoincrement, type int, name text, parentId int);
create table if not exists assembly(id int, fileName text);
create table if not exists type(id int, fullName text);";
				#endregion
				cmd.ExecuteNonQuery();
		}
		
		public long InsertType(string fullName) {
			var cmd = _conn.CreateCommand();
			cmd.CommandText = "insert into type(fullName) values(@n); select last_insert_rowid()";
			cmd.Parameters.AddWithValue("@n", fullName);
			return (long)cmd.ExecuteScalar();
		}

		public long InsertAssembly(AssemblyDefinition asm, string fileName, long parentId) {
			using(var tx = _conn.BeginTransaction()) {
				var cmd = _conn.CreateCommand();
				cmd.CommandText = @"insert into xobject(type,name,parentId) values('as',@name,@parentId); 
insert into assembly(id, fileName) values(last_insert_rowid(), @fileName);
select last_insert_rowid()";
				cmd.Parameters.AddWithValue("@name", asm.Name);
				cmd.Parameters.AddWithValue("@parentId", parentId);
				cmd.Parameters.AddWithValue("@fileName", fileName);
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
