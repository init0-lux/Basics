#! /usr/bin/python3

from tkinter import *
from tkinter import ttk

root = Tk();

label1 = Label( root, text = "Label 1", bg = 'black', fg = 'white' );
label1.grid( row = 0, column = 0, ipadx = 20, ipady = 20 );

label2 = Label( root, text = "Label 2", bg = 'white', fg = 'black' );
label2.grid( row = 0, column = 1, ipadx = 20, ipady = 20 );

root.mainloop()
