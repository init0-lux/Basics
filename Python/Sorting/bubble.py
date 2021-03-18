#! /usr/bin/python3

import ret;
"""
def sort( num ):
    for i in range( (len(num)-1), 0, -1 ):
        for j in range(i):
            if num[j] > num[ j+1 ]:
                num[ j ], num[ j + 1 ] = num[ j + 1 ], num[j];

    return num;

print( sort( ret.ret ) );
"""

def bubble(l):
    n = len(l)

    for i in range(n):
        sorted = True
        for j in range(n-i-1):
            if l[j] > l[j+1]:
                l[j], l[j+1] = l[j+1], l[j]
                sorted = False

        if sorted:
            break
    return l

print( bubble( ret.ret ));
