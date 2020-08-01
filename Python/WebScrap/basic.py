#! /usr/bin/python3

import requests
from bs4 import BeautifulSoup

source = requests.get( "http://192.168.0.17/example.html" );                                                # http(s) is required!

code = source.content;

soup = BeautifulSoup( code, "html.parser" );                                                                # Can also use soup.prettify();

divList = soup.find_all( "div", { "class" : "cities" } );
divFirst = soup.find( "div", { "class" : "cities" } );

# For getting first element, you can also divList = soup.find_all( "div", { "class" : "cities" } )[ 0 ];

# print( soup );
# print( divList );
# print( "\n" );
# print( divFirst );

# print( divList[0].find("p").text );                                                                      # Prints out data from given element;

for element in divList:
    print( element.find("p").text );
