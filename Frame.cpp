#include "Frame.h"

 MyFrame::MyFrame():wxFrame(NULL, 1, "hello wrold") 
{
              wxMenu* menuFile = new wxMenu;
             menuFile->Append(1, "&Hello...\tCtrl-H",
                 "Help string shown in status bar for this menu item");
             menuFile->AppendSeparator();
             menuFile->Append(wxID_EXIT);

             wxMenu* menuHelp = new wxMenu;
             menuHelp->Append(wxID_ABOUT);
             auto* mymenu = new wxMenu();
             mymenu->Append(2, "my");

             wxMenuBar* menuBar = new wxMenuBar;
             menuBar->Append(menuFile, "&File");
             menuBar->Append(menuHelp, "&Help");
             menuBar->Append(mymenu, "&my");

             SetMenuBar(menuBar);
             SetBackgroundColour(wxColor(100, 123, 123));

              
         

}