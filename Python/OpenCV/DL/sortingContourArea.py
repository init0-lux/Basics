#! /usr/bin/python3

import cv2
import numpy as np
from sortingContours import contours

def get_area( contours ):
    # Returs area of all contours as list;
    all_areas = []

    for cnt in contours:
        area = cv2.contourArea( cnt );
        all_areas.append( area );
        return all_areas;

# Load Image;
image = cv2.imread( "Pics/BunchaShapes.jpeg" );
image = cv2.resize( image, ( 512, 512 ) );

original = image.copy();

# Print contours before sorting;
print( "Areas before sorting: ", get_area( contours ) );

# Sort Contours large to small;
sorted_contours = sorted( contours, key = cv2.contourArea, reverse = True );    # $reverse = False; means opposite;

print( "Areas after sorting: ", get_area( sorted_contours ) );

# Iterate over contours to draw one at a time;
for c in sorted_contours:
    cv2.drawContours( original, [ c ], -1, ( 255, 0, 0 ), 3 );

    cv2.waitKey( 0 );
    cv2.imshow( "Contours By Area", original );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
