#! /usr/bin/python3
n=int(input("Enter number of cases: "))

for i in range(1):
    P = float( input( "Enter the Principal: " ) );
    R = float( input( "Enter Rate Percent: " ) );
    T = float( input( "Enter Time Period: " ) );

    A = P * R * T /100;

    print( "Amount = " + str( A ) );
