#! /usr/bin/python3

with open( "file.name", 'a+' ) as file:
    file.seek( 0 );
    content = file.read();
    file.write( "\nLine 6" );
    # No need to use file.close() with the 'with' statement;
