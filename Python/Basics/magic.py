#! /usr/bin/python3

import random

magic_num = random.randint( 0, 10 );

while True:
    try:
        user = int( input( "Enter Your Guess: " ));
    except ValueError:
        print("Enter value from 0 to 10");
        continue;

    if ( user == magic_num ):
        print("Lucky Guess...");
        quit();
    else:
        print("Try Again...");
