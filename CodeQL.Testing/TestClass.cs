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
		[Test]
		public void CheckAssemblies() {
			var asm = new RawQuery().
				Select("select * from assembly where fileName='CodeQL.Testing.dll'").
				ToList();
			Assert.AreEqual(1, asm.Count, "Expect to find just one assembly");
		}
		
		//[Test]
		public void AssemblyAttributesShort() {
			// AssemblyTitle("CodeQL.Testing")]
			var attributes = new RawQuery().
				Select(@"select * from assembly asm
join attribute att on att belongs to asm and att.name='AssemblyTitle'
join property pr on pr belongs to att and property.name='Title'").ToList();
			Assert.AreEqual(1, attributes.Count, "Expect just one AssemblyTitle attribute");
		}
		
		[Test]
		public void AssemblyAttributesLong() {
			// attribute with "Attribute" suffix
		}
		
		[Test]
		public void ClassCount() {
			object result = new RawQuery().SelectScalar("select count(*) from type");
			Assert.IsAssignableFrom(typeof(long), result);
			Assert.AreEqual(5, (long)result);
		}

		[Test]
		public void ClassCountInternal() {
			// internal does not have a dedicated flag and any non-public is internal
			var result = new RawQuery().Select("select count(*) from type where typeAttributes & {0} = 0",
				(int)TypeAttributes.Public).ToList();
			Assert.AreEqual(1, result.Count);
		}
		
		[Test]
		public void MethodsInClass() {
			#region sql
			string sql = @"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
where o.type=4 and o.name='InternalClass'";
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
		



		
		/*[Test]
		public void ClassAttribute() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void Function() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void Params() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void Fields() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void ReadOnlyProperty() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void RWProperty() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void PublicRPrivateWProperty() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void Interface() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void NoUpdate() {
			//throw new NotImplementedException();
		}
		
		[Test]
		public void Update() {
			//throw new NotImplementedException();
		}
		*/
	}
}
