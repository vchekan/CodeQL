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
using Mono.Cecil;

namespace CodeQL
{
	
	
	public class BinScanner
	{
		private CodeWalker _walker;
		
		public BinScanner(CodeWalker walker)
		{
			_walker = walker;
		}
		
		public void Scan() {
			using(var db = new Db()) {
				db.Create(); // TODO: how to re-create automatically?
				// TODO: get max object ID
				int asm = 0;
				int type = 0;
				_walker.Walk(
				    a => {db.InsertAssembly(a, "file.dll", 1);},
					t => {}
				);
			}
		}
	}
}
