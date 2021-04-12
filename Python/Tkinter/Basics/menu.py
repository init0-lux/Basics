#! /usr/bin/python3

from tkinter import *
from tkinter import ttk

def openClicked():
    print("You clicked Open...")

def quitApplication():
    quit();

root = Tk();

menu1 = Menu( root );
root.config( menu = menu1 );

subMenu = Menu( menu1, tearoff = 0 );                                   # Add tearoff = 0; to remove beginning line;

menu1.add_cascade( label = 'File', menu = subMenu );

subMenu.add_command( label = 'Open', command = openClicked );
# subMenu.add_separator();                                              # Adds separator;
subMenu.add_command( label = 'Quit', command = quitApplication );

subMenu2 = Menu( menu1, tearoff = 0 );                                  # Add tearoff = 0; to remove beginning line;

menu1.add_cascade( label = 'Edit', menu = subMenu2 );

subMenu2.add_command( label = 'undo' );
subMenu2.add_command( label = 'redo' );

root.mainloop();
