#! /usr/bin/python3

import pandas as pd

t1 = pd.DataFrame( [ [ 1, 2, 3, 4, 5 ], [ 6, 7, 8, 9, 10 ] ] );
t2 = pd.DataFrame( [ [ 10, 20, 30, 40, 50 ], [ 11, 12, 35, 434, 578 ] ] );

Mean = t1.mean();
Mean2 = t2.mean();

print( Mean );
print( Mean2 );
