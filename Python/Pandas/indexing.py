#! /usr/bin/python3

import pandas

df = pandas.read_json( "../JSON/supermarkets.json" );
print( df );

print( df.loc[ "332 Hill St" : "Country", "ID" ] );
