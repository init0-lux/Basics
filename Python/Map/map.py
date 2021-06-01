#! /usr/bin/python3

import folium

map = folium.Map( location = [ 23, 84 ] )
map = folium.Map( location = [ 23, 84 ], zoom_start = 6 ); # For different map layout...

# map.add_child( folium.Marker( location = [ 23.34, 85.31 ], popup = "Hi, This Is Ranchi", icon = folium.Icon( color = 'black' ) ) )
# data = pandas.read_csv( "filename.csv" );
# lat = list( data( "LAT" ) ); 
# lon = list( data( "LON" ) );
# elev = list( data( "ELEV" ) );
# 
# def color_producer( el ):
#   if ( el >= 3000 ):
#       color = 'red';
#   elif ( el >= 1500 ):
#       color = 'green';
#   else:
#       color = 'black';
#    
#   return color;
#
# for lat, lon, el in zip( lat, lon, elev ):
#   fg.add_child( folium.Marker( location = [ lat, lon ], popup = str( el ) + " m", icon = folium.Icon( color = color_producer( el ) ) ) )
#

fg = folium.FeatureGroup( name = "Map" );

for coordinates in [ [ 23.2, 84.1 ], [ 23.97, 84.14 ]]:
      fg.add_child( folium.Marker( location = coordinates, popup = "Hi, This is a Marker", icon = folium.Icon( color = 'gray' ) ) )

map.add_child( fg );

# The list(s) given will iterate through all the given coordinates, creating all required markers;

map.save( "out.html" )
