#! /usr/bin/python3

import geopy
from geopy.geocoders import Nominatim

nom = Nominatim( scheme = "http", user_agent = "" );

loc = nom.geocode( "3995 23rd St, San Francisco, CA 94114" );
lat = loc.latitude;
lon = loc.longitude;

print( loc );
print( lat );
print( lon);
