// 
//  AliasBinder.cs
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

namespace CodeQL {
	public class AliasBinder {
		public void Run() {
			/*
			 * Note: aliases have scope. Alias in subquery can override alias from the outer one.
			 * Also alias can not be visible from sibling subqueries.
			 * 
			 * Alias scope are easily followed if we walk graph in Breath First order.
			 * Each time we visit a Statement, we can collect JOIN and FROM declarations
			 * and their aliases. Thus "local" alias will override the higher order one
			 * while maintaning aliases declared in higher statements.
			 * 
			 * But "sibling" statements are a problem because we need to purge
			 * alias when leaving the current statement and switching to sibling statemen.
			 */
			
			var aliasTableMap = new GraphIterator<INode>(TranslationContext.Batch, node => node.Children).
				BreadthFirst().
				OfType<TableNode>().
				ToDictionary(t => t.Alias, StringComparer.OrdinalIgnoreCase);
		}
	}
}
