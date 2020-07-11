#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/java.jpeg" );

B, G, R = image[ 0, 0 ];

print( B, G, R );
