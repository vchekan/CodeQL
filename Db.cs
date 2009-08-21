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
		
		public void Create() {
				_conn.Open();
				var cmd = _conn.CreateCommand();
				#region sql
				cmd.CommandText = @"
create table if not exists project(id int, name text);
create table if not exists projectFiles(projectId int, versionId int, path text);
create table if not exists projectVersion(id int, name text);
create table if not exists xobject(id int primary key, type int, name text, parentId int);
create table if not exists assembly(id int, projectId int, fileName text);
create table if not exists type(id int, fullName text);";
				#endregion
				cmd.ExecuteNonQuery();
		}
		
		public long InsertType(string fullName) {
			var cmd = _conn.CreateCommand();
			// TODO: could some strange types like anonymous contain chars needed escaping?
			cmd.CommandText = "insert into type(fullName) values(@n); select last_insert_rowid()";
			cmd.Parameters.AddWithValue("@n", fullName);
			return (long)cmd.ExecuteScalar();
		}

		void IDisposable.Dispose() {
			Dispose(true);
		}
		
		~Db() {
			Dispose(false);
		}
		
		void Dispose(bool disposing) {
			if(disposing)
				if(_conn != null) {
					_conn.Dispose();
					_conn.Dispose();
				}
		}
		
		public static IDbConnection GetConnection() {
			return new SQLiteConnection(CONN_STRING);
		}
	}
}
