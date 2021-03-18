#! /usr/bin/python3

import ret;

def tim( l ):
    min_run = 32;
    n = len( l );

    for i in range( 0, n, min_run ):
        insertion( l, i, min( ( i + min_run - 1 ), ( n - 1 ) ) );

        size = min_run;
        
        while size < n:
            for s in range( 0, n, size * 2 ):
                mid = s + size - 1;
                end = min( ( s + size * 2 - 1 ), ( n - 1 ) );

                merged = merge( left = l[ s : mid + 1 ], right = l[ mid + 1 : end + 1 ] );

                l[ s : s + len(merged) ] = merged

    size *= 2;
    return l;

def insertion( l, left = 0, right = None ):
    if right == None:
        right = len( l ) - 1;

    for i in range( left + 1, right + 1 ):
        key = l[i];
        j = i - 1;
        while j >= left & l[j] > key:
            l[ j + 1 ] = l[j];
            j -= 1;

        l[ j + 1 ] = key;
    
    return l;

def merge( left, right ):
    if len( left ) == 0:
        return right;
    if len( right ) == 0:
        return left;
    
    result = [];
    l_ind = r_ind = 0;

    while len( result ) < ( len( left ) + len( right ) ):
        if left[l_ind] <= right[r_ind]:
            result.append(left[l_ind]);
            l_ind += 1;
        else:
            result.append( right[r_ind] );
            r_ind += 1;
           
        if r_ind == len(right):
            result += left[ l_ind: ];
            break;

        if l_ind == len(left):
            result += right[ r_ind: ];
            break;

    return result;

def merge_sort( l ):
    if len( l ) < 2:
        return l;
    mp = len( l ) // 2;
    return merge( left = merge_sort( l[:mp] ), right = merge_sort( l[mp:] ) );

content = ret.ret;

print( tim(content) );
