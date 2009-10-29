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
using System.Linq;
using System.Reflection;
using NUnit.Framework;
using CodeQL;

namespace CodeQL.Testing
{
	
	[TestFixture]
	public class TestClass
	{
		[SetUp]
		public void SetUp() {
			Db.Delete();
		}
		
		[Test]
		public void SelfScan() {
			new BinScanner().
				AddFile(Assembly.GetExecutingAssembly().Location).
				Scan();
		}
		
		[Test]
		public void CheckAssemblies() {
			var asm = new Query().Select("select * from assembly where name='CodeQL.Testing.dll'").
				First();
		}
		
		[Test]
		public void AssemblyAttributes() {
			throw new NotImplementedException();	
		}
		
		[Test]
		public void Class() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void ClassAttribute() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void Function() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void Params() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void Fields() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void ReadOnlyProperty() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void RWProperty() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void PublicRPrivateWProperty() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void Interface() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void NoUpdate() {
			throw new NotImplementedException();
		}
		
		[Test]
		public void Update() {
			throw new NotImplementedException();
		}
	}
}
