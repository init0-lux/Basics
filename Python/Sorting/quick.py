#! /usr/bin/python3

import ret
import random

def quick( l ):
    if len( l ) < 2:
        return l

    low, same, high = [], [], [];
    pivot = l[ random.randint( 0, len(l)-1 ) ];

    for i in l:
        if i < pivot:
            low.append( i );
        elif i == pivot:
            same.append( i );
        elif i > pivot:
            high.append( i );

    return quick( low ) + same + quick( high );

print( quick(ret.ret) );
