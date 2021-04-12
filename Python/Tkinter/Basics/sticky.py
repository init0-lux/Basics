#! /usr/bin/python3

from tkinter import *
from tkinter import ttk

root = Tk();

l1 = Label( root, text = "Label 1", bg = 'red', fg = 'white' );
l1.grid( row = 0, column = 0, padx = 50, pady = 50 );
l1.grid( sticky = N );

l2 = Label( root, text = "Label 2", bg = 'black', fg = 'white' );
l2.grid( row = 0, column = 0 );
l2.grid( sticky = S );

l3 = Label( root, text = "Label 3", bg = 'white', fg = 'blue' );
l3.grid( row = 0, column = 0 );
l3.grid( sticky = E );

l4 = Label( root, text = "Label 4", bg = 'yellow', fg = 'red' );
l4.grid( row = 0, column = 0 );
l4.grid( sticky = W );

l5 = Label( root, text = "Label 5", bg = 'pink', fg = 'black' );
l5.grid( row = 0, column = 0 );
l5.grid( sticky = NW );

l6 = Label( root, text = "Label 6", bg = 'green', fg = 'yellow' );
l6.grid( row = 0, column = 0 );
l6.grid( sticky = NE );

l7 = Label( root, text = "Label 7", bg = 'white', fg = 'black' );
l7.grid( row = 0, column = 0 );
l7.grid( sticky = SW );

l8 = Label( root, text = "Label 8", bg = 'blue', fg = 'white');
l8.grid( row = 0, column = 0 );
l8.grid( sticky = SE );

l9 = Label( root, text = "Label 9", bg = 'red', fg = 'green' );
l9.grid( row = 0, column = 0 );
l9.grid( sticky = N );

root.mainloop();
