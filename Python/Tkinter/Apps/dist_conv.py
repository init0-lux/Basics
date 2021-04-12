#! /usr/bin/python3

from tkinter import *

root = Tk();

def distConv():
    miles = float( e1Val.get() ) * 1.609;
    t1.insert( END, miles );

b1 = Button( root, text = "Convert", command = distConv );
b1.grid( row = 0, column = 0 );

e1Val = StringVar();
e1 = Entry( root, textvariable = e1Val );
e1.grid( row = 0, column = 1 );

t1 = Text( root, height = 1, width = 20 );
t1.grid( row = 0, column = 2 );

root.mainloop();
