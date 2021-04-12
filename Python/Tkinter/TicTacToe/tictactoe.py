#! /usr/bin/python3

from tkinter import *
from tkinter import ttk
from tkinter import messagebox
import time

player = 1;

def Determine():
    if ( button1['text'] == "O" and button2['text'] == "O" and button3['text'] == "O" or
         button4['text'] == "O" and button5['text'] == "O" and button6['text'] == "O" or
         button7['text'] == "O" and button8['text'] == "O" and button9['text'] == "O" or
         button1['text'] == "O" and button4['text'] == "O" and button7['text'] == "O" or
         button2['text'] == "O" and button5['text'] == "O" and button8['text'] == "O" or
         button3['text'] == "O" and button6['text'] == "O" and button9['text'] == "O" or
         button1['text'] == "O" and button5['text'] == "O" and button9['text'] == "O" or
         button3['text'] == "O" and button5['text'] == "O" and button7['text'] == "O" ):
        messagebox._show( "Victory!!!","O Won..." );
        time.sleep( 5 )
        quit();

    elif ( button1['text'] == "X" and button2['text'] == "X" and button3['text'] == "X" or
           button4['text'] == "X" and button5['text'] == "X" and button6['text'] == "X" or
           button7['text'] == "X" and button8['text'] == "X" and button9['text'] == "X" or
           button1['text'] == "X" and button4['text'] == "X" and button7['text'] == "X" or
           button2['text'] == "X" and button5['text'] == "X" and button8['text'] == "X" or
           button3['text'] == "X" and button6['text'] == "X" and button9['text'] == "X" or
           button1['text'] == "X" and button5['text'] == "X" and button9['text'] == "X" or
           button3['text'] == "X" and button5['text'] == "X" and button7['text'] == "X" ):
        messagebox._show( "Victory!!!", "X Won..." );
        time.sleep( 5 );
        quit();


def Move( button ):

    global player;

    if ( button == 1 and player == 1 ):
        if ( button1['text'] == ' ' ):
            button1.config( text = 'X' );
            player = 2;

    elif ( button == 1 and player == 2 ):
        if ( button1['text'] == ' ' ):
            button1.config( text = 'O' );
            player = 1;

    elif ( button == 2 and player == 1 ):
        if ( button2['text'] == ' ' ):
            button2.config( text = 'X' );
            player = 2;

    elif ( button == 2 and player == 2 ):
        if ( button2['text'] == ' ' ):
            button2.config( text = 'O' );
            player = 1;

    elif ( button == 3 and player == 1 ):
        if ( button3['text'] == ' ' ):
            button3.config( text = 'X' );
            player = 2;

    elif ( button == 3 and player == 2 ):
        if ( button3['text'] == ' ' ):
            button3.config( text = 'O' );
            player = 1;

    elif ( button == 4 and player == 1 ):
        if ( button4['text'] == ' ' ):
            button4.config( text = 'X' );
            player = 2;

    elif ( button == 4 and player == 2 ):
        if ( button4['text'] == ' ' ):
            button4.config( text = 'O' );
            player = 1;

    elif ( button == 5 and player == 1 ):
        if ( button5['text'] == ' ' ):
            button5.config( text = 'X' );
            player = 2;

    elif ( button == 5 and player == 2 ):
        if ( button5['text'] == ' ' ):
            button5.config( text = 'O' );
            player = 1;

    elif ( button == 6 and player == 1 ):
        if ( button6['text'] == ' ' ):
            button6.config( text = 'X' );
            player = 2;

    elif ( button == 6 and player == 2 ):
        if ( button6['text'] == ' ' ):
            button6.config( text = 'O' );
            player = 1;

    elif ( button == 7 and player == 1 ):
        if ( button7['text'] == ' ' ):
            button7.config( text = 'X' );
            player = 2;

    elif ( button == 7 and player == 2 ):
        if ( button7['text'] == ' ' ):
            button7.config( text = 'O' );
            player = 1;

    elif ( button == 8 and player == 1 ):
        if ( button8['text'] == ' ' ):
            button8.config( text = 'X' );
            player = 2;

    elif ( button == 8 and player == 2 ):
        if ( button8['text'] == ' ' ):
            button8.config( text = 'O' );
            player = 1;

    elif ( button == 9 and player == 1 ):
        if ( button9['text'] == ' ' ):
            button9.config( text = 'X' );
            player = 2;

    elif ( button == 9 and player == 2 ):
        if ( button9['text'] == ' ' ):
            button9.config( text = 'O' );
            player = 1;

    else:
        messfrsiv_25075995_portalagebox._show( "Error", "Error Occurred... \nPlease Restart The Game..." );
        quit();

    Determine();

root = Tk();
root.geometry('560x375');

button1 = ttk.Button( root, text = " ", command = lambda:Move(1) );
button1.grid( row = 0, column = 0, ipadx = 50, ipady = 50 );

button2 = ttk.Button( root, text = " ", command = lambda:Move(2) );
button2.grid( row = 0, column = 1, ipadx = 50, ipady = 50 );

button3 = ttk.Button( root, text = " ", command = lambda:Move(3) );
button3.grid( row = 0, column = 2, ipadx = 50, ipady = 50 );

button4 = ttk.Button( root, text = " ", command = lambda:Move(4) );
button4.grid( row = 1, column = 0, ipadx = 50, ipady = 50 );

button5 = ttk.Button( root, text = " ", command = lambda:Move(5) );
button5.grid( row = 1, column = 1, ipadx = 50, ipady = 50 );

button6 = ttk.Button( root, text = " ", command = lambda:Move(6) );
button6.grid( row = 1, column = 2, ipadx = 50, ipady = 50 );

button7 = ttk.Button( root, text = " ", command = lambda:Move(7) );
button7.grid( row = 2, column = 0, ipadx = 50, ipady = 50 );

button8 = ttk.Button( root, text = " ", command = lambda:Move(8) );
button8.grid( row = 2, column = 1, ipadx = 50, ipady = 50 );

button9 = ttk.Button( root, text = " ", command = lambda:Move(9) );
button9.grid( row = 2, column = 2, ipadx = 50, ipady = 50 );

root.mainloop();
