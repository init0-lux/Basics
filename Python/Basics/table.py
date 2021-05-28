#! /usr/bin/python3

number = input("Enter the Number : ");

for i in range( 1, 11):
    print( str( number ) + " X " + str( i ) + " = " + str( ( int( number) * i )));
