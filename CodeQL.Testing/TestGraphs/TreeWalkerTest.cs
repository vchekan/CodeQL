// 
//  TreeWalkerTest.cs
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
using System.Collections.Generic;
using System.Linq;
using NUnit.Framework;

namespace CodeQL.Testing {
	[TestFixture]
	public class TreeWalkerTest {
			Node tree = 
			#region tree declaration
				new Node("1", new[] {
			        new Node("2", new[] {
						new Node("3", null),
						new Node("4", null)
					}),
					new Node("5", null),
					new Node("6", new[] {
						new Node("7", null)
					}),
				});
			#endregion

		[Test]
		public void DepthFirst() {
			
			string[] expect = {"1","2","5","6","3","4","7"};
			var result = new CodeQL.GraphIterator<Node>(tree, n => n.Children).
				BreadthFirst().
				Select(n => n.Label);
			Assert.IsTrue(Enumerable.SequenceEqual(expect, result));
		}
		
		[Test]
		public void Scope() {
			string[] expect = {
				"1 []",
				"6 [1]",
				"7 [6, 1]",
				"5 [1]",
				"2 [1]",
				"4 [2, 1]",
				"3 [2, 1]"
			};
			var result = new List<string>();
			new CodeQL.GraphIterator<Node>(tree, n => n.Children).
				DepthFirst((n,p) => {
						result.Add(string.Format("{0} [{1}]", 
					                  n.Label, 
					                  string.Join(", ",p.Select(x => x.Label).ToArray())
					           ));
					});
			Assert.IsTrue(Enumerable.SequenceEqual(result, expect));
		}
		
		class Node {
			public List<Node> Children = new List<Node>();
			public string Label;

			public Node(string label, Node[] children) {
				this.Label = label;
				if(children != null)
					this.Children.AddRange(children);
			}
		}
	}
}

