// 
//  TestTranslator.cs
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
using System.Linq;
using NUnit.Framework;
using CodeQL.Queries;

namespace CodeQL.Testing
{
	[TestFixture]
	public class TestTranslator
	{
		[Test]
		public void PublicClasses ()
		{
			#region sql
			string sql = @"select c.name as public_classes
from class c
where c is public";
			#endregion
			
			var res = new SqlTranslator().Select(sql).ToList();
			Assert.AreEqual(6, res.Count);
		}
		

	}
}
