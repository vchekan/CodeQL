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
				foreach(string sln in GetProjectsFromMonoSolution(fileName))
					foreach(string prj in GetBinariesFromMonoProject(sln))
						Files.Add(prj);
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
			var project = XDocument.Load(fileName).
				Element("Project");
			var configurations = project.Element("Configurations");
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
			// do not include GAC
			var refs =
				(from rf in project.Element("References").Elements("ProjectReference")
					where rf.Attribute("type").Value == "Assembly"
					select rf.Attribute("refto").Value
				 );
				
			string baseDir = Path.GetDirectoryName(fileName);
			foreach(string rf in refs) {
				yield return Path.GetFullPath(Path.Combine(baseDir, rf));
			}
			//}
		}
	}
}
