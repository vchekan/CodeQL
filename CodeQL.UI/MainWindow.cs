// 
//  Copyright (C) 2009 Vadim Chekan
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
using Gtk;

public partial class MainWindow: Gtk.Window
{	
	const string STATUS_BAR_CTS = "StatusBarContext";
	
	public MainWindow (): base (Gtk.WindowType.Toplevel)
	{
		Build ();

		uint ctx = statusbar1.GetContextId(STATUS_BAR_CTS);
		statusbar1.Push(ctx, "Ready");
	}
	
	protected void OnDeleteEvent (object sender, DeleteEventArgs a)
	{
		Application.Quit ();
		a.RetVal = true;
	}

	protected virtual void OnExitActionActivated (object sender, System.EventArgs e)
	{
		Application.Quit();
	}

	protected virtual void OnLoadActionActivated (object sender, System.EventArgs e)
	{
		uint loadingCtx = statusbar1.GetContextId(STATUS_BAR_CTS);
		statusbar1.Push(loadingCtx, "Loading...");
		System.Threading.ThreadPool.QueueUserWorkItem((o) => {
			System.Threading.Thread.Sleep(5000);
			Application.Invoke((obj,ars) => {
				statusbar1.Pop(loadingCtx);
			});			
		});
	}
}