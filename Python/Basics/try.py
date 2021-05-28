#! /usr/bin/python3

def div( divby ):
    try:
        return 42 / divby;
    except ZeroDivisionError:
        print("Error, Cannot divide by zero...");

num = int( input( "Enter the Number: " ));

print( div( num ))
