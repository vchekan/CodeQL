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

namespace CodeQL
{
	public class BinScanner
	{
		private CodeWalker _walker = new CodeWalker();
		
		public BinScanner AddFile(string fileName) {
			_walker.AddFile(fileName);
			return this;
		}
		
		public BinScanner AddFiles(IEnumerable<string> files) {
			_walker.Files.AddRange(files);
			return this;
		}
		
		public void Scan() {
			using(var db = new Db()) {
				
				long asmId=0, typeId=0, attId=0, ctorId=0, evtId=0, fieldId=0,
					genericId=0, ifaceId=0, methodId=0, propId=0;
				
				_walker.Walk(
				    (file, asm) => asmId=db.InsertAssembly(asm, file, 1),
					type => typeId=db.InsertType(type, asmId),
					att => attId = db.InsertAttribute(att, typeId),
				    ctor => ctorId = db.InsertConstructor(ctor, typeId),
				    evt => evtId = db.InsertEvent(evt, typeId),
				    field => fieldId = db.InsertField(field, typeId),
				    generic => genericId = db.InsertGenericParam(generic, typeId),
				    iface => ifaceId = db.InsertInterface(iface, typeId),
				    method => methodId = db.InsertMethod(method, typeId),
				    null,//nested type
				    prop => propId = db.InsertProperty(prop, typeId)
				);
			}
		}
	}
}
