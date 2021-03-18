#! /usr/bin/python3

import ret

def insertion( l ):
    for i in range( 1, len(l) ):
        currnum = l[i]
        j = i - 1;

        while j >= 0 and l[j] > currnum:
            l[ j + 1 ] = l[j];
            j -= 1;

        l[ j + 1 ] = currnum;

    return l;

print( insertion( ret.ret ) );
