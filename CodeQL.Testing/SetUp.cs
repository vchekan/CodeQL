// 
//  SetUp.cs
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
using System.Reflection;
using NUnit.Framework;
using CodeQL.DataSources;

namespace CodeQL.Testing
{
	[SetUpFixture]
	public class SetUp
	{
		[SetUp]
		public void InitDb() {
			log4net.Config.BasicConfigurator.Configure();
			Db.Delete();
			SelfScan();
		}
		
		//[Test]
		public void SelfScan() {
			// TODO: test double scan
			// TODO: test re-scan with and without assembly updates
			
			Console.WriteLine("Scanning: {0}", Assembly.GetExecutingAssembly().Location);
			new BinScanner().
				AddFile(Assembly.GetExecutingAssembly().Location).
				Scan();
		}
	}
}
