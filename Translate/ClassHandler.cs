// 
//  ClassHandler.cs
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

namespace CodeQL
{
	public class ClassHandler
	{
		static ClassHandler() {
			_tables = new List<TableInfo>() {
			new TableInfo() {LogicalName = "type", LogicalColumnNames = new [] {
					"name",
					"fullName"
				}}
			};
		}
		
		public void Run() {
			new GraphIterator<INode>(TranslationContext.Batch, n => n.Children).
				BreadthFirst(node=>{
					if(node is TableNode && (node as TableNode).Name.ToLower() == "class")
						HandleClass(node as TableNode);
				});
		}
		
		void HandleClass(TableNode classTable) {
			TableInfo tableInfo = _tables.First(info => info.LogicalName == "class");
			
			/*using(AstManager ast = new AstManager()) {
				ast.OnTableRemove = pos => {
					var physicalTables = GetPhysicalTables(classTable.ReferedColumns);
					ast.InsertTables(physicalTables);
				};
				ast.
				ast.ReplaceTable(classTable);
			}*/
			
		}
		
		static List<TableInfo> _tables;
	}
	
	
	
	class TableInfo 
	{
		public string LogicalName;
		public string[] LogicalColumnNames;
	}
}
