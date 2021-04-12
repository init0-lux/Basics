#! /usr/bin/python3

from tkinter import *
from tkinter import messagebox

def buttonClicked():
    messagebox._show( "Message", "Button Clicked" );

root = Tk();

myButton = Button( root, text = "Click Me", command = buttonClicked );
myButton.pack();

root.mainloop();
