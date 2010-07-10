// 
//  TestProperties.cs
//  
//  Author:
//       Vadim Chekan <kot.begemot@gmail.com>
// 
//  Copyright (c) 2009 Vadim Chekan
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
using System.Linq;
using NUnit.Framework;
using CodeQL.Queries;

namespace CodeQL.Testing
{

	[TestFixture]
	public class TestProperties
	{
		[Test]
		public void PublicMethodsInClass() {
			#region sql
			string sql = string.Format(@"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
join property pr on pr.id=p.id
	and pr.visibility={0}
where o.type=4 and o.name='InternalClass'", (int)Visibility.Public);
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
		
		[Test]
		public void InternalMethodsInClass() {
			#region sql
			string sql = string.Format(@"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
join property pr on pr.id=p.id
	and pr.visibility
where o.type=4 and o.name='InternalClass'", (int)Visibility.Internal);
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
		
		[Test]
		public void ProtectedMethodsInClass() {
			#region sql
			string sql = string.Format(@"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
join property pr on pr.id=p.id
	and pr.visibility
where o.type=4 and o.name='InternalClass'", (int)Visibility.Protected);
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
		
		[Test]
		public void PrivateMethodsInClass() {
			#region sql
			string sql = string.Format(@"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
join property pr on pr.id=p.id
	and pr.visibility
where o.type=4 and o.name='InternalClass'", (int)Visibility.Private);
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
		
		[Test]
		public void SemipublicMethodsInClass() {
			#region sql
			string sql = string.Format(@"select count(*) 
from xobject o
join type t on t.id=o.id and t.namespace='CodeQL.Testing'
join xobject p on p.type=13 and p.parentId=o.id
join property pr on pr.id=p.id
	and pr.getVisibility={0} and pr.setVisibility={1}
where o.type=4 and o.name='InternalClass'", (int)Visibility.Public, (int)Visibility.Private);
			#endregion
			var res = new RawQuery().Select(sql).ToList();
			Assert.AreEqual(1, res.Count);
		}
	}
}
