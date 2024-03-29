#! /usr/bin/python3

import ret

def strand_sort( l ):
    out = strand( l );

    while len(l):
        out = merge_list( out, strand(l) );
    return out;

def strand( l ):
    i, s = 0, [ l.pop(0) ];
    while i < len(l):
        if l[i] > s[-1]:
            s.append( l.pop(i) );
        else:
            i += 1;

        return s;

def merge_list( a, b ):
    out = [];

    while len(a) and len(b):
        if a[0] < b[0]:
            out.append( a.pop(0) );

        else:
            out.append( b.pop(0) );

        out += a;
        out += b;
        return out;

print( strand_sort( ret.ret ) );
