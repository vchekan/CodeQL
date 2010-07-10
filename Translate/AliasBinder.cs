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
			 */
			var aliasTableMap = new GraphIterator<INode>(TranslationContext.Batch, node => node.Children).
				BreadthFirst().
				OfType<TableNode>().
				ToDictionary(t => t.Alias, StringComparer.OrdinalIgnoreCase);
		}
	}
}
