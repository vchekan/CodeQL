// Main.cs created with MonoDevelop
// Author: Vadim Chekan at 10:31 PM 11/30/2008
//
using System;
using System.IO;

namespace CodeQL
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			Console.WriteLine("Starting");
			Scanner scanner = new Scanner(File.Open("/home/vadim/Projects/CodeQL/tools/parser.cs", FileMode.Open));
			//Scanner scanner = new Scanner(File.Open("/home/vadim/Projects/CodeQL/src/CodeQL/test1.cs", FileMode.Open));
			Parser parser = new Parser(scanner);
			//parser.Trace=true;
			//parser.scanner.Trace=true;
			parser.Parse();
			Console.WriteLine("Parsed");
		}
	}
}