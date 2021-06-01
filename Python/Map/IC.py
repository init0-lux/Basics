#! /usr/bin/python3

import pandas
import folium
import geopy
from geopy.geocoders import Nominatim

def retcol( city ):
    city = str( city );

    if ( city.startswith( "A" ) or city.startswith( "E" ) or city.startswith( "I" ) or city.startswith( "O" ) or city.startswith( "U" ) ):
        color = 'red';
        return color;
    else:
        color = 'green';
        return color;

nom = Nominatim( user_agent = "Indian-Cities" );

ic = pandas.read_json( "../JSON/IndianCities.json" );
ic = ic.T;

map = folium.Map( location = [ 25.66, 75.66 ], zoom_start = 6 );
fg = folium.FeatureGroup( name  = "Indian Cities" );

try:
    for states in ic[0]:
        for city in states:
            coordinates = nom.geocode( city );
            lat = coordinates.latitude;
            lon = coordinates.longitude;
            fg.add_child( folium.Marker( location = [ lat, lon ], popup = str( city ), icon = folium.Icon( color = retcol( city ) ) ) );

    # print( cities );
    # print( states );

except:
    pass;

map.add_child( fg );

# print( ic[0]['AP'] );
map.save( "IndianCities.html" );
