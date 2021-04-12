#! /usr/bin/python3

from tkinter import *

def showTable():
    table = ( entry.get() );
    
    labelText  .set( table + " x 01 = " + str( ( int( table ) * 1 )) );
    labelText2 .set( table + " x 02 = " + str( ( int( table ) * 2 )) );
    labelText3 .set( table + " x 03 = " + str( ( int( table ) * 3 )) );
    labelText4 .set( table + " x 04 = " + str( ( int( table ) * 4 )) );
    labelText5 .set( table + " x 05 = " + str( ( int( table ) * 5 )) );
    labelText6 .set( table + " x 06 = " + str( ( int( table ) * 6 )) );
    labelText7 .set( table + " x 07 = " + str( ( int( table ) * 7 )) );
    labelText8 .set( table + " x 08 = " + str( ( int( table ) * 8 )) );
    labelText9 .set( table + " x 09 = " + str( ( int( table ) * 9 )) );
    labelText10.set( table + " x 10 = " + str( ( int( table ) * 10)) );

root = Tk();

entry = Entry( root );
entry.pack();

Button( root, text = "Calculate", command = showTable ).pack();

labelText = StringVar();
labelText.set( "------------" );
Label( root, textvariable = labelText).pack();

labelText2 = StringVar();
labelText2.set( "------------" );
Label( root, textvariable = labelText2).pack();

labelText3 = StringVar();
labelText3.set( "------------" );
Label( root, textvariable = labelText3).pack();

labelText4 = StringVar();
labelText4.set( "------------" );
Label( root, textvariable = labelText4).pack();

labelText5 = StringVar();
labelText5.set( "------------" );
Label( root, textvariable = labelText5).pack();

labelText6 = StringVar();
labelText6.set( "------------" );
Label( root, textvariable = labelText6).pack();

labelText7 = StringVar();
labelText7.set( "------------" );
Label( root, textvariable = labelText7).pack();

labelText8 = StringVar();
labelText8.set( "------------" );
Label( root, textvariable = labelText8).pack();

labelText9 = StringVar();
labelText9.set( "------------" );
Label( root, textvariable = labelText9).pack();

labelText10 = StringVar();
labelText10.set( "------------" );
Label( root, textvariable = labelText10).pack();

root.mainloop();
