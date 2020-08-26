#! /usr/bin/python3

factorial = 1;
Sum = 0;
Range = [ i for i in range( 1, 101 ) ];

# print( range );

for i in Range:
    factorial *= i;

    Sum += factorial;

answer = Sum / factorial;

print( Sum );
print( answer );
