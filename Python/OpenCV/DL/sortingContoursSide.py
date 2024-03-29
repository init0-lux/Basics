#! /usr/bin/python3

import numpy as np
import cv2
import sortingContours
import sortingContourArea
from sortingContours import *

def x_cord_contour( contours ):
    # Returns the X Coordinate for the contour centroid;
    if cv2.contourArea( contours ) > 10:
        M = cv2.moments( contours );

        return ( int( M[ 'm10' ] / M[ 'm00' ] ) )

def label_contour_center( image, c ):
    # Places a red circle on the centers of contours;
    M = cv2.moments( c );

    cx = int( M['m10'] / M['m00'] );
    cy = int( M['m01'] / M['m00'] );

    # Draw the contour number on the image;
    cv2.circle( image, ( cx, cy ), 10, ( 0, 0, 255 ), -1 );
    return image;

# Compute Center of Mass or centroids and draw them on our image;
for ( i, c ) in enumerate( contours ):
    orig = label_contour_center( image, c );

cv2.imshow( "4 - Contour Centers", image );

contours_left_to_right = sorted( contours, key = x_cord_contour, reverse = False );

# Labeling Contours Left to Right;
for ( i, c ) in enumerate( contours_left_to_right ):
    cv2.drawContours( original, [c], -1, ( 0, 0, 255 ), 3 );

    M = cv2.moments( c );

    cx = int( M['m10'] / M['m00'] );
    cy = int( M['m01'] / M['m00'] );

    cv2.putText( original, str( i + 1 ), ( cx, cy ), cv2.FONT_HERSHEY_SIMPLEX, 1, ( 0, 255, 0 ), 2 );

    cv2.imshow( "6 - Left to Right Contour", original );
    cv2.waitKey( 0 );

    ( x, y, w, h ) = cv2.boundingRect( c );

    # Crop each contour and save the image;
    cropped_contour = original[ y : y + h, x : x + w ];

    image_name = "Pics/output_shape_number_" + str( i + 1 ) + ".jpg";
    print( image_name );

    cv2.imwrite( image_name, cropped_contour );

cv2.destroyAllWindows();
