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
		//static readonly TableInfo[] _physicalTableInfo;
		static readonly RelationInfo[] _relation;
		/// <summary>
		/// Physical table name -> [logical column, physical column]
		/// </summary>
		static readonly List<TableRecord> _namesInfo;
		// Reverse map: LName to a table
		static Dictionary<string,TableRecord> _lNameToTableMap;

		static ClassHandler() {
			_namesInfo = new List<TableRecord> {
				new TableRecord {
					PTableName = "xobject", 
					Names = new [] {
						new NamesRecord {LogicalName = "name", PhysicalName = "name"}
					}
				},
				new TableRecord {
					PTableName = "type",
					Names = new [] {
						new NamesRecord {LogicalName = "fullName", PhysicalName = "fullName"}
					}
				}
			};
			
			_lNameToTableMap = new Dictionary<string, TableRecord>(StringComparer.OrdinalIgnoreCase);
			foreach(var rec in _namesInfo)
				foreach(var name in rec.Names)
					_lNameToTableMap.Add(name.LogicalName, rec);
			
			_relation = new [] {
				new RelationInfo {
					LeftTable = "xobject",
					RightTable = "type",
					JoinType = JoinType.Inner,
					LeftConditionColumn = "id",
					RightConditionColumn = "id"
				}
			};
		}
		
		public void Run() {
			var classTables = new GraphIterator<INode>(TranslationContext.Batch, n => n.Children).
				BreadthFirst().
				OfType<TableNode>().
				Where(t => t.Name.Equals("class", StringComparison.InvariantCultureIgnoreCase));

			foreach(var table in classTables)
				HandleClass(table);
		}
		
		void HandleClass(TableNode classTable) {
			// Find all involved physical tables
			//_lNameToTableMap.TryGetValue(classTable.
			
			/*TableInfo tableInfo = _tables.FirstOrDefault(info => info.LogicalName == classTable.Name);
			if(tableInfo == null)
				throw new TranslatorException("Unknown table: '"+classTable.Name+"'");*/
			
			//TableNode physicalTable = new TableNode {Name = tableInfo. };
			
			/*using(AstManager ast = new AstManager()) {
				ast.OnTableRemove = pos => {
					var physicalTables = GetPhysicalTables(classTable.ReferedColumns);
					ast.InsertTables(physicalTables);
				};
				ast.
				ast.ReplaceTable(classTable);
			}*/
			
		}
		
	}
	
	
	
	/*class MappingInfo
	{
		public string Name;
		public string[] ColumnNames;
	}*/
	
	class TableRecord {
		public string PTableName;
		public NamesRecord[] Names;
	}
	
	class NamesRecord {
		public string LogicalName;
		public string PhysicalName;
	}
	
	class RelationInfo {
		public string LeftTable;
		public string RightTable;
		public JoinType JoinType;
		public string LeftConditionColumn;
		public string RightConditionColumn;
	}
}
