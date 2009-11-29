// 
//  CodeQLQuery.cs
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
	public class CodeQLQuery
	{
		Db _db = new Db();
		
		public IEnumerable<object[]> Select(string sql, params object[] arguments) {
			string translatedSql = Translate(sql, arguments);
			
			_log.DebugFormat("CodeQL:\n{0}\nCompiled:\n{1}", sql, translatedSql);
			return new RawQuery().Select(translatedSql);
		}
		
		public string Translate(string cql, params object[] arguments) {
			if(arguments != null)
				cql = string.Format(cql, arguments);

			var parser =  new CodeQL.parsers.cql.Parser();
			if(!parser.Parse(cql))
				throw new ApplicationException("Parsing error");
			
			return new SqlWriter().Write(parser.Batch);
		}
		
		static readonly log4net.ILog _log = log4net.LogManager.GetLogger(typeof(CodeQLQuery).FullName);
	}
}
