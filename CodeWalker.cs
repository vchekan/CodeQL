using System;
using System.Collections.Generic;
using Mono.Cecil;
using System.Linq;
using System.Xml.Linq;
using System.IO;

namespace CodeQL
{
	public class CodeWalker
	{
		public List<string> Files = new List<string>();
		
		public CodeWalker AddFile(string fileName) {
			if(fileName.EndsWith(".sln")) {
				throw new NotImplementedException();
			}
			else if(fileName.EndsWith(".mds")) {
				//Files.AddRange(
				//    GetProjectsFromMonoSolution(fileName).
				 //   SelectMany(s=>GetBinariesFromMonoProject(s))
				foreach(string s in GetProjectsFromMonoSolution(fileName))
					foreach(string s2 in GetBinariesFromMonoProject(s))
						Files.Add(s2);
				//);
			} 
			else if(fileName.EndsWith(".mdp"))
				Files.AddRange(GetBinariesFromMonoProject(fileName));
			else {
				Files.Add(fileName);
			}
			
			return this;
		}
		
		
		public void Walk(Action<AssemblyDefinition> onAssembly,
		                 Action<TypeDefinition> onType) {
			foreach(string fileName in Files)	{
				AssemblyDefinition asm = AssemblyFactory.GetAssembly(fileName);
				if(onAssembly != null)
					onAssembly(asm);
				foreach(TypeDefinition type in asm.MainModule.Types) {
					if(type.Name[0] == '<') // skip <Module>
						continue;
					if(onType != null)
						onType(type);
					//type.
				}
			}
		}
		
		private static IEnumerable<string> GetProjectsFromMonoSolution(string fileName) {
			var project = XDocument.Load(fileName);
			
			return (from e in project.Descendants("Entries").Descendants("Entry")
				select (string)e.Attribute("filename")).
					Select(f=>{
						if(Path.IsPathRooted(f))
							return f;
						else
							return Path.GetFullPath(Path.Combine(Path.GetDirectoryName(fileName), f));
					});
		}
		
		private static IEnumerable<string> GetBinariesFromMonoProject(string fileName) {
			var configurations = XDocument.Load(fileName).
				Element("Project").
				Element("Configurations");
			string active = configurations.Attribute("active").Value;
			
			// active configuration node
			var configuration = (from c in configurations.Elements("Configuration")
				where c.Attribute("name").Value == active
			    select c).First();
			
			var output = configuration.Element("Output");
			var build = configuration.Element("Build");
			
			// main binary path
			string mainBinary = output.Attribute("directory").Value;
			mainBinary = Path.Combine( Path.GetDirectoryName(fileName), mainBinary);
			mainBinary = Path.GetFullPath(mainBinary);
			mainBinary = Path.Combine(mainBinary, output.Attribute("assembly").Value);
			switch(build.Attribute("target").Value) {
				case "Exe":
				case "WinExe":
					mainBinary += ".exe";
					break;
				case "Library":
				case "Module":
					mainBinary += ".dll";
					break;
				default:
					throw new ApplicationException("Unknown project output type: "+build.Attribute("target").Value);
					
			}
			yield return mainBinary;
				
			// return all referenced binaries
		}
	}
}
