#! /usr/bin/python3

from tkinter import *

def showValue():
    print( buttonValue.get() );

root = Tk();

buttonValue = IntVar();

Label( root, text = "What is your Fav Weather :" ).pack();

Radiobutton( root, text = "Sunny", value = 1, variable = buttonValue ).pack();
Radiobutton( root, text = "Rainy", value = 2, variable = buttonValue ).pack();
Radiobutton( root, text = "Snowy", value = 3, variable = buttonValue ).pack();

Button( root, text = "Show Button Value", command = showValue ).pack();

root.mainloop();
