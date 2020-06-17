#! /usr/bin/python3

import numpy as np

n = np.arange( 6 );
print( n );
print( "\n" );

# n.reshape( 2, 3 );
print( n.reshape( 2, 3 ) );
print( "\n" );

# n2.reshape( 2, 2, 2 );

n2 = np.arange( 8 );
print( n2 );
print( "\n" );

print( n2.reshape( 2, 2, 2 ) );
