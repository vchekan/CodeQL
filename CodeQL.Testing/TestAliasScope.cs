// 
//  TestAliasScope.cs
//  
//  Author:
//       Vadim Chekan <kot.begemot@gmail.com>
// 
//  Copyright (c) 2010 Vadim Chekan
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
using NUnit.Framework;
using CodeQL.Queries;

namespace CodeQL.Testing {

	[TestFixture]
	[Ignore("Requires sub-select implementation to test")]
	public class TestAliasScope {
		[Test]
		public void AlisScopeLocal() {
		}
		
		[Test]
		public void AliasScopeParent() {
			string cql = @"select a.name, count(cl) cnt
from assembly a
natural join a.class cl";
			var tr = new SqlTranslator();
			tr.AfterTransformComplete += () => {
				//TranslationContext.Batch;
			};
			tr.Translate(cql);
			
		}
		
		[Test]
		public void AliasScopeLocalOverrideParent() {
			
		}
		
		[Test]
		public void AlisScopeCantSeeChild() {
			
		}
		
		[Test]
		public void AliasScopeCantSeeLeftSibling() {
			
		}

		[Test]
		public void AliasScopeCantSeeRightSibling() {
			
		}
	}
}

