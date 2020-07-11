#! /usr/bin/python3

import numpy as np
import cv2

# image = cv2.imread( "Pics/car.jpeg" );
# image = cv2.imread( "Pics/squares.jpeg" );
image = cv2.imread( "Pics/logo.jpeg" );

gray = cv2.cvtColor( image, cv2.COLOR_BGR2GRAY );

# Find $Canny edges;
edges = cv2.Canny( gray, 200, 255 );

# Finding Contours;
# Use $edges.copy(); to prevent over-writing of data;
# contours, heirarchy = cv2.findContours( edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE );
contours, heirarchy = cv2.findContours( edges, cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE );

print( "Number of contours found: " + str( len( contours ) ) );

image1 = image.copy();

# Draw Contours;
# Use '-1' as the third arg to draw all contours;
cv2.drawContours( image1, contours, -1, ( 0, 255, 0 ), 2 );

cv2.imshow( "Original", image );
cv2.imshow( "Canny edges", edges );
cv2.imshow( "Contours", image1 );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
