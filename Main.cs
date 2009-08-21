// Main.cs created with MonoDevelop
// Author: Vadim Chekan at 10:31 PM 11/30/2008
//
using System;
using System.Collections.Generic;
using System.IO;
using Mono.Cecil;
using System.Data;

namespace CodeQL
{
	class MainClass
	{
		delegate void VoidFunction();
		static CodeWalker _walker = new CodeWalker();
		static VoidFunction _action = null;

		public static void Main(string[] args)
		{
			new NDesk.Options.OptionSet().
				Add("file=", o => { _walker.AddFile(o); }).
				Add("dump:", o => { _action = Dump; }).
				Add("print:", o => { _action = Print; }).
				Parse(args);
			
			if(_action == null)
				throw new ApplicationException("No action defined");
			
			_action();
			
			Console.WriteLine("Done");
		}
		
		static void Print() {
			_walker.Walk(asm => { Console.WriteLine(asm.Name.Name);},
			             type => {Console.WriteLine("  {0}",type.Name);});
		}

		/*
		 * Use cases:
		 * 		How many public classes is there in solution?
		 * 		How many total classes is there is solution?
		 * 		The same as 2 above, but grouped by assembly
		 * 		All above but exclude System.*, Windows.*
		 * 		Include MyCompany.* only
		 * 		How many public methods
		 * 			Total
		 * 			Per assembly
		 * 		Draw class hierarchy (text, png) (optional with a root)
		 * 		Select classes with attribute X
		 * 		Select methods/properties which are called just once.
		 * 		Select empty catches
		 * 		Select count/(grouped by) of compiler generated classes/members/functions, etc.
		 */
		
			
/*
			Console.WriteLine("Starting");
			Scanner scanner = new Scanner(File.Open("/home/vadim/Projects/CodeQL/tools/parser.cs", FileMode.Open));
			//Scanner scanner = new Scanner(File.Open("/home/vadim/Projects/CodeQL/src/CodeQL/test1.cs", FileMode.Open));
			Parser parser = new Parser(scanner);
			//parser.Trace=true;
			//parser.scanner.Trace=true;
			parser.Parse();
			Console.WriteLine("Parsed");
*/			
			
		static void Dump() {
			if(_walker.Files.Count != 1)
				throw new ApplicationException("Dump expects one assembly but got "+_walker.Files.Count);
			string fileName = _walker.Files[0];
			
			TextWriter dumpStream = fileName != null ? File.CreateText(fileName) : Console.Out;
			using(var conn = Db.GetConnection()) {
				conn.Open();
				IDbCommand cmd = conn.CreateCommand();
				cmd.CommandText = "select fullName from type";
				using(IDataReader reader = cmd.ExecuteReader()) {
					while(reader.Read()) {
						dumpStream.WriteLine(reader[0]);
					}
				}
			}
		}
		
		static void Scan() {
			using(var db = new Db()) {
				db.Create();
				
				string fileName = "CodeQL.exe";
				AssemblyDefinition asm = AssemblyFactory.GetAssembly(fileName);
				foreach(TypeDefinition type in asm.MainModule.Types) {
					db.InsertType(type.FullName);
				}
			}
		}
	}
}