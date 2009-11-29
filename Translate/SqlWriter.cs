// 
//  SqlWriter.cs
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
using System.IO;

namespace CodeQL
{

	/// <summary>
	/// Write Ast to string in SQL format
	/// </summary>
	public class SqlWriter
	{
		// TODO: create a better text formatter
		int _indent = 0;
		StringWriter _sql = new StringWriter();
		
		public string Write(BatchNode batch) {
			batch.Statements.ForEach((s) => { this.Write(s); _sql.WriteLine(";"); });
			return _sql.ToString();
		}
		
		void Write(StatementNode stmt) {
			#region contract
			if(stmt == null)
				throw new ArgumentNullException("stmt");
			#endregion
			
			_sql.Write(new[] {'\t'}, 0, _indent);
			if(stmt is SelectNode)
				Write(stmt as SelectNode);
			else
				throw new ApplicationException("Can handle only 'select' statements but got: "+stmt.GetType().Name);
		}
		
		void Write(SelectNode select) {
			_sql.Write(new[] {'\t'}, 0, _indent);
			_sql.Write("select ");
			//select.SelectExpressions.ForEach((e) => { this.Write(e); _sql.Write(", "); });
			foreach(SelectExpressionNode expr in select.SelectExpressions) { 
				this.Write(expr); 
				_sql.Write(", "); 
			}
			_sql.GetStringBuilder().Length -= 2;
		}
		
		void Write(SelectExpressionNode selectExpression) {
			#region contract
			if(selectExpression == null)
				throw new ArgumentNullException("selectExpression");
			#endregion
			if(selectExpression.Expression is ColumnExpressionNode )
			Write(selectExpression.Expression as ColumnExpressionNode);
			_sql.Write(" as {0}", selectExpression.EffectiveAlias);
		}
		
		void Write(ColumnExpressionNode column) {
			_sql.Write("{0}.{1}", column.TableAlias, column.Name);
		}
	}
}
