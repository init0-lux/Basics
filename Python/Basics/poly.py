#! /usr/bin/python3

class Shape:
    width = 0;
    height = 0;

    def area( self ):
        print("Parent Class Area");

class Rectangle( Shape ):

    def __init__( self, w, h ):
        self.width = w;
        self.height = h;

    def area( self ):
        print( "Area of Rectangle is: ", self.width * self.height );

class Triangle( Shape ):
    def __init__( self, w, h ):
        self.width = w;
        self.height = h;

    def area( self ):
        print( "Area of Triangle is: ", self.width * self.height / 2 );

rec = Rectangle( 5, 20 );
tri = Triangle( 3, 9 );

rec.area();
tri.area();
