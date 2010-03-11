// 
//  SelectExpression.cs
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

namespace CodeQL
{

	public class SelectColumnNode : Node
	{
		public string ImplicitAlias;
		public ExpressionNode Expression;
		
		public string EffectiveAlias {
			get { 
				if(ImplicitAlias != null)
					return ImplicitAlias;
				if(this.Expression is ColumnExpressionNode)
					return (this.Expression as ColumnExpressionNode).Name;
				// TODO: make name unique
				return "UnnamedColumn";
			}
		}
		
		public override IEnumerable<INode> Children {
			get { yield return Expression; }
		}

	}
}
