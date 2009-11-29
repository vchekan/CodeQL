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
using System.IO;
using Mono.Cecil;
using CodeQL;
using SysConsole=System.Console;

namespace CodeQL.Console
{
	class MainClass
	{
		static List<string> _files = new List<string>();
		static Action _action = null;
		static string _unparsed = null;

		public static int Main(string[] args)
		{
			log4net.Config.BasicConfigurator.Configure();
			log4net.LogManager.GetLogger(typeof(MainClass).FullName).Debug("Started");
			
			var remains = new NDesk.Options.OptionSet().
				//Add("help|h|?", o => {_action = WriteOptionDecription; }).
				Add("file=", o => _files.Add(o) ).
				Add("print", o => _action = Print ).
				Add("console", o => { _action = new CodeConsole().Run; }).
				Add("scan", o => { _action = 
						() => {new BinScanner().AddFiles(_files).Scan(); };
				}).
				Add("translate", o => {_action = () => new CodeQLQuery().Select(_unparsed);}).
				Parse(args);

			if(remains != null && remains.Count > 0)
				_unparsed = string.Join(" ", remains.ToArray());
			
			if(_action == null) {
				SysConsole.Error.WriteLine("No action defined");
				return 1;
			}
			
			_action();
			
			SysConsole.WriteLine("Done");
			return 0;
		}
		
		static void Print() {
			new CodeWalker().AddFiles(_files).Walk(
		        (file,asm) => SysConsole.WriteLine("{0}:{1}", file, asm.Name.Name),
			    type => SysConsole.WriteLine("  {0}",type.Name),
				att => SysConsole.WriteLine("	{0}", att),
				ctor => SysConsole.WriteLine("	.ctor:{0}", ctor),
				evt => SysConsole.WriteLine("	event:{0}",evt),
				field => SysConsole.WriteLine("	field:{0}", field),
				generic => SysConsole.WriteLine("	generic:{0}",generic),
				iface => SysConsole.WriteLine("	interface:{0}",iface),
				method => SysConsole.WriteLine("	method:{0}()", method),
				nestedType => SysConsole.WriteLine("	nested type:{0}", nestedType),
				prop => SysConsole.WriteLine("	prop:{0}",prop)
			);
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
	}
}