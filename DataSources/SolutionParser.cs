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
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace CodeQL.DataSources
{
	/// <summary>
	/// Parse Visual Studio or Monodevelop solutions and project files
	/// and collect and parse binaries.
	/// Does not do anything with found information and
	/// delegates all logic to the caller through callbacks in Walk()
	/// method.
	/// </summary>
	public class SolutionParser
	{
		public List<string> Files = new List<string>();
		
		public SolutionParser AddFile(string fileName) {
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
		
		public SolutionParser AddFiles(IEnumerable<string> files) {
			this.Files.AddRange(files);
			return this;
		}
		
		
		public void Walk(Action<string,AssemblyDefinition> onAssembly,
		                 Action<TypeDefinition> onType,
		                 Action<CustomAttribute> onAttribute,
		                 Action<MethodDefinition> onConstructor,
		                 Action<EventDefinition> onEvent,
		                 Action<FieldDefinition> onField,
		                 Action<GenericParameter> onGenericParam,
		                 Action<TypeReference> onInterface,
		                 Action<MethodDefinition> onMethod,
		                 Action<TypeDefinition> onNestedType,
		                 Action<PropertyDefinition> onProperty) {
			foreach(string fileName in Files)	{
				// Assembly
				AssemblyDefinition asm = AssemblyFactory.GetAssembly(fileName);
				if(onAssembly != null)
					onAssembly(fileName, asm);
				// Type
				foreach(TypeDefinition type in asm.MainModule.Types) {
					if(type.Name[0] == '<') // skip <Module>
						continue;
					if(onType != null)
						onType(type);
					
					// Attribute
					foreach(CustomAttribute attribute in type.CustomAttributes) {
						if(onAttribute != null)
							onAttribute(attribute);
					}
					
					// ctor
					if(onConstructor != null)
						foreach(MethodDefinition ctor in type.Constructors)
							onConstructor(ctor);
					
					// event
					if(onEvent != null)
						foreach(EventDefinition evt in type.Events)
							onEvent(evt);
					
					
					// Field
					if(onField != null)
						foreach(FieldDefinition field in type.Fields)
							onField(field);
					
					
					// generic params
					if(onGenericParam != null)
						foreach(GenericParameter generic in type.GenericParameters)
							onGenericParam(generic);
					
					// Interfaces
					if(onInterface != null)
						foreach(TypeReference interfs in type.Interfaces)
							onInterface(interfs);
					
					// Methods
					if(onMethod != null)
						foreach(MethodDefinition method in type.Methods)
							onMethod(method);
					
					// nested type
					if(onNestedType != null)
						foreach(TypeDefinition t in type.NestedTypes)
							onNestedType(t);
					
					// property
					if(onProperty != null)
						foreach(PropertyDefinition prop in type.Properties)
							onProperty(prop);
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
		}
	}
}
