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
using System.Collections.Generic;
using System.Linq;
using Gtk;

using CodeQL;

public partial class MainWindow: Gtk.Window
{	
	const string STATUS_BAR_CTS = "StatusBarContext";
	uint _statusCtx;
	static Db _db = new Db();
	Notebook _tabs;
	
	public MainWindow (): base (Gtk.WindowType.Toplevel)
	{
		Build ();

		_statusCtx = this.statusbar.GetContextId(STATUS_BAR_CTS);
		this.statusbar.Push(_statusCtx, "Ready");
		
		GLib.ExceptionManager.UnhandledException += delegate(GLib.UnhandledExceptionArgs args) {
			statusbar.Push(_statusCtx, "Error: "+((Exception)args.ExceptionObject).Message);
		};

		this.busyIcon.Hide();
		_db.OnStart += () => {Application.Invoke((a,b) => {this.busyIcon.Show();});};
		_db.OnStop += () => {Application.Invoke((a,b) => {this.busyIcon.Hide();});};
		
		LoadProjectsMenu();
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

	//
	//
	//
	private void LoadProjectsMenu() {
		statusbar.Push(_statusCtx, "Loading...");

		var menu = (Menu)((ImageMenuItem)this.UIManager.GetWidget("/menubar2/FileAction/LastProjectsAction")).Submenu;

		foreach(var widget in menu.Children)
			menu.Remove(widget);

		var prjs = new List<Project>();
		System.Threading.ThreadPool.QueueUserWorkItem(res=>{
			prjs = _db.ProjectsLoad();
		});
		
		foreach(var proj in prjs) {
			var item = new MenuItem(proj.Title);
			item.Activated += (sender, e) => {
				statusbar.Push(_statusCtx, proj.Title);
			};
			menu.Append(item);
		}
		menu.ShowAll();
		statusbar.Pop(_statusCtx);
	}
}