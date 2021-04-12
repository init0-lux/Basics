#! /usr/bin/python3

from tkinter import *

def ButtonClickedRed():
    labelText.set("Red");
    label.config( bg = 'red' );

def ButtonClickedBlue():
    labelText.set("Blue");
    label.config( bg = 'blue' );

def ButtonClickedGreen():
    labelText.set("Green");
    label.config( bg = 'green' );

root = Tk()

labelText = StringVar();
labelText.set( 'Label' );

label = Label( root, textvar = labelText );
label.pack();

Button( root, text = "Red", command = ButtonClickedRed ).pack();
Button( root, text = "Blue", command = ButtonClickedBlue ).pack();
Button( root, text = "Green", command = ButtonClickedGreen ).pack();

root.mainloop();
