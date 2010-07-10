// 
//  GraphIterator.cs
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

namespace CodeQL {


	public class GraphIterator<T> {
		T _start;
		Func<T,IEnumerable<T>> _children;
		
		public GraphIterator(T start, Func<T,IEnumerable<T>> children) {
			#region contract
			if(start == null)
				throw new ArgumentNullException("start");
			if(children == null)
				throw new ArgumentNullException("children");
			#endregion
			_start = start;
			_children = children;
		}
		
		public IEnumerable<T> BreadthFirst() {
			var queue = new Queue<T>();
			queue.Enqueue(_start);
			do {
				var node = queue.Dequeue();
				yield return node;
				foreach( var child in _children(node))
					queue.Enqueue(child);
			} while(queue.Count > 0);
		}

		/*public IEnumerable<Tuple<T,StepType>> BreadthFirstEx() {
			var queue = new Queue<Tuple<T,StepType>>();
			queue.Enqueue(_start);
			do {
				var node = queue.Dequeue();
				yield return node;
				foreach( var child in _children(node))
					queue.Enqueue( new Tuple<T,StepType>(child, StepType.Deep) );
			} while(queue.Count > 0);
		}*/
		
		public IEnumerable<T> DepthFirst() {
			Stack<T> stack = new Stack<T>();
			stack.Push(_start);
			while(stack.Count>0) {
				T node = stack.Pop();
				yield return node;
				foreach(var child in _children(node))
					stack.Push(child);
			}
		}
		
		/// <summary>
		/// Breadth First with path tracking
		/// </summary>
		public void DepthFirst(Action<T,IEnumerable<T>> callback) {
			var nodes = new Stack<T>();
			var parents = new Stack<T>();
			var levels = new Stack<int>();
			
			nodes.Push(_start);
			
			do {
				var node = nodes.Pop();
				
				callback(node, parents);
				
				int count = 0;
				foreach(var child in _children(node)) {
					nodes.Push(child);
					if(count++ == 0)
						parents.Push(node);
				}
				
				if(count > 0) {
					levels.Push(count);
				} else {
					int level;
					do {
						levels.Push(level = levels.Pop()-1);
						if(level == 0) {
							levels.Pop();
							parents.Pop();
						}
					} while(level == 0 && levels.Count > 0);
				}
			} while(nodes.Count > 0);
		}
	}
}
