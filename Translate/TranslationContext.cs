// 
//  TranslationContext.cs
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

namespace CodeQL {


	public class TranslationContext : IDisposable {
		[ThreadStatic]
		static TranslationContext _instance;
		
		BatchNode _batch;

		public TranslationContext(BatchNode batch) {
			if(_instance != null)
				throw new ApplicationException("Context already initialized");
			_instance = this;
			_batch = batch;
		}
		
		private static TranslationContext Instance {
			get {
				if(_instance == null)
					throw new ApplicationException("Context not initilized");
				return _instance;
			}
		}
		
		public static BatchNode Batch {
			get { return Instance._batch; }
			internal set { Instance._batch = value; }
		}
		
		void IDisposable.Dispose() {
			if(_instance == null)
				throw new ApplicationException("Context not initilized");
			_instance = null;
		}
		
	}
}
