#! /usr/bin/python3

from tkinter import *
from tkinter import ttk

root = Tk();

label1 = Label( root, text = "Label 1", bg = 'red' );
label1.grid( row = 0, column = 0 );

label2 = Label( root, text = "Label 2", bg = 'green' );
label2.grid( row = 0, column = 1 );

label3 = Label( root, text = "Label 3", bg = 'blue' );
label3.grid( row = 1, column = 0 );

label4 = Label( root, text = "Label 4", bg = 'black', fg = 'white' );
label4.grid( row = 1, column = 1 );

root.mainloop()
