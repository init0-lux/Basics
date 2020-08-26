#! /usr/bin/python3

P = float( input( "Enter the Principal: " ) );
R = float( input( "Enter Rate Percent: " ) );
T = float( input( "Enter Time Period: " ) );

for i in range( 1, int( T ) + 1 ):
    CI = ( P * R * 1 ) / 100;

    P = P + CI;

print( "Amount = " + str( P ) );
