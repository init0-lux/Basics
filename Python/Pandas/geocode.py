#! /usr/bin/python3

import pandas as pd
import geopy as gp
from geopy.geocoders import Nominatim

nom = Nominatim( user_agent = "geocoder-practice"  );

json = pd.read_json( "../JSON/supermarkets.json" );
print( json );

json = json.set_index( "ID" );
json["Address"] = json[ "Address" ] + ", " + json[ "City" ] + ", " + json[ "State" ] + ", " + json[ "Country" ];

print( "\n" );
print( json );
