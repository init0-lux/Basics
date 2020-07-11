#! /usr/bin/python3

import natodictionary

data = [];
dictionary = natodictionary.nato;

def stdIN( text ):
    text = text.title();
    text = text.split();

    for i in text:
        i = i.replace( "." , " " );
        i = i.replace( "," , " " );
        i = i.replace( "\n", " " );
        i = i.replace( "!" , " " );
        i = i.replace( ";" , " " );

        nato = list( dictionary.keys() )[ list( dictionary.values()).index( i )];
        data.append( nato );

def File( filename ):
    try:
        with open( filename, 'r' ) as file:
            file.seek( 0 );

            filedata = file.read();
            filedata = filedata.split();

            for i in filedata:
                i = i.title();
                nato = list( dictionary.keys() )[ list( dictionary.values() ).index( i ) ];

                print( nato );

    except FileNotFoundError:
        print( "File Not Found!" );
        exit( 0 );

print( "What to encode:" );
print( "\n0. Standard input" );
print( "1. File input " );

stdfile = int( input( "\nChoice:" ) );

if stdfile == 0:
    text = str( input( "\nEnter text: " ) );

    stdIN( text );

elif stdfile == 1:
    filename = str( input( "\nEnter file name: " ) );

    File( filename );

else:
    print( "\nError; are you pure evil??!" );

fileout = str( input( "Enter name of output file [NIL for no file] : " ) );

with open( fileout, 'w' ) as filewrite:
    for i in data:
        filewrite.write( i + " " );

# print( list( mydict.keys() )[ list( mydict.values() ).index( 16 ) ] )
