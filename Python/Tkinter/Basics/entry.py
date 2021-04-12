#! /usr/bin/python3

from tkinter import *

def showOnLabel():
    labelText.set( entry.get() );

def clearLabel():
    entry.delete( 0, END );

root = Tk();

entry = Entry( root, bg = "blue", fg = "red" );
entry.pack();

Button( root, text = "Print", command = showOnLabel ).pack();
Button( root, text = "Clear", command = clearLabel ).pack();

labelText = StringVar();
labelText.set('-------');

label = Label( root, textvariable = labelText );
label.pack()

root.mainloop();
