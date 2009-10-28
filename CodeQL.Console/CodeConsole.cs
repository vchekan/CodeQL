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
using System.Data;
using _Console = System.Console;

namespace CodeQL.Console
{
	
	
	public class CodeConsole
	{
		
		public void Run()
		{
			_Console.WriteLine("End statement with ';'");
			_Console.WriteLine("Enter 'quit' when done");
			_Console.WriteLine();

			string line;
			string statement = "";
			_Console.Write(">");
			while((line = _Console.ReadLine()) != "quit") {
				statement += line + '\n';
				if(!line.Trim().EndsWith(";"))
					continue;
					
				using(var db = new Db()) {
					try {
						db.ExecuteReader(statement, PrintHeader,PrintGrid);
					} catch(Exception e) {
						_Console.WriteLine(e.Message);
					}
				}
				statement = "";
				_Console.Write(">");
			}
		}
		
		static void PrintHeader(IDataReader r) {
			for(int i=0; i<r.FieldCount; i++) {
				_Console.Write(r.GetName(i));
				if(i != r.FieldCount - 1)
					_Console.Write('|');
			}
			_Console.WriteLine();
		}
		
		static void PrintGrid(IDataReader r) {
			for(int i=0; i<r.FieldCount; i++) {
				_Console.Write(r.IsDBNull(i) ? "NULL" : r[i]);
				if(i!=r.FieldCount-1)
					_Console.Write('|');
			}
			_Console.WriteLine();
		}
	}
}
