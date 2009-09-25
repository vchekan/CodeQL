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
using System.Data;

namespace CodeQL
{
	class MainClass
	{
		delegate void VoidDelegate();
		static CodeWalker _walker = new CodeWalker();
		static VoidDelegate _action = null;

		public static int Main(string[] args)
		{
			new NDesk.Options.OptionSet().
				//Add("help|h|?", o => {_action = WriteOptionDecription; }).
				Add("file=", o => { _walker.AddFile(o); }).
				Add("print", o => { _action = Print; }).
				Add("console", o => { _action = new CodeConsole().Run; }).
				Add("scan", o => { _action = new BinScanner(_walker).Scan; }).
				Parse(args);
			
			if(_action == null) {
				Console.Error.WriteLine("No action defined");
				return 1;
			}
			
			_action();
			
			Console.WriteLine("Done");
			return 0;
		}
		
		static void Print() {
			_walker.Walk((file,asm) => Console.WriteLine("{0}:{1}", file, asm.Name.Name),
			    type => Console.WriteLine("  {0}",type.Name),
				att => Console.WriteLine("	{0}", att),
				ctor => Console.WriteLine("	.ctor:{0}", ctor),
				evt => Console.WriteLine("	event:{0}",evt),
				field => Console.WriteLine("	field:{0}", field),
				generic => Console.WriteLine("	generic:{0}",generic),
				iface => Console.WriteLine("	interface:{0}",iface),
				method => Console.WriteLine("	method:{0}()", method),
				nestedType => Console.WriteLine("	nested type:{0}", nestedType),
				prop => Console.WriteLine("	prop:{0}",prop)
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