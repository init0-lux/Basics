#! /usr/bin/python3

import pandas as pd

df1 = pd.DataFrame( [ [ 2, 4, 6 ], [ 10, 20, 30 ] ] );
df2 = pd.DataFrame( [ [ 1, 2, 3 ], [ 4, 5, 6 ] ], columns = [ "1st", "2nd", "3rd" ] );
df3 = pd.DataFrame( [ [ 9, 8, 7 ], [ 4, 7, 9 ] ], index = [ "1st", "2nd" ] )
df4 = pd.DataFrame( [ { "Name" : "Ojaswi" }, { "Name" : "Elliot" } ] );

# print( df1 + "\n" + df2 + "\n" + df3 + "\n" + df4 );

print( df1 );
print( "\n" );

print( df2 );
print( "\n" );

print( df3 );
print( "\n" );

print( df4 );
