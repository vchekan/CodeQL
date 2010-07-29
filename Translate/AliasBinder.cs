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
	public class AliasBinder : ITranslationPlugin {
		
		public void Init() {/*empty*/}
		
		public void Run() {
			/*
			 * TODO: account for scope when subquery is implemented
			 * Note: aliases have scope. Alias in subquery can override alias from the outer one.
			 * Also alias can not be visible from sibling subqueries.
			 */
			
			//
			// Build alias map
			//
			var dataSources  = new GraphIterator<INode>(TranslationContext.Instance.Batch, node => node.Children).
				DepthFirst().
				OfType<DataSourceNode>();
			
			var aliasMap = new Dictionary<string,DataSourceNode>(StringComparer.OrdinalIgnoreCase);
			foreach(var ds in dataSources)
				if(aliasMap.ContainsKey(ds.Alias))
					throw new ApplicationException("Alias '"+ds.Alias+"' is declared twice");
				else
					aliasMap.Add(ds.Alias, ds);
			
			// 
			new GraphIterator<INode>(TranslationContext.Instance.Batch, n => n.Children).
				DepthFirst().
				OfType<ColumnExpressionNode>().
				ForEach(c => {
						DataSourceNode dataSource;
						if(!aliasMap.TryGetValue(c.TableAlias, out dataSource))
							throw new UnresolvedAliasException(c);
						c.AliasReference = dataSource;
				});

			// fire binding events
			foreach(var p in aliasMap)
				if(TranslationContext.Instance.OnTableAliasBound != null)
					TranslationContext.Instance.OnTableAliasBound(p.Key, p.Value);
			
		}
	}
}
