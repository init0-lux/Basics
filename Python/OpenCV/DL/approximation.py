#! /usr/bin/python3

import numpy as np
import cv2

# Load image and keep a copy;
image = cv2.imread( "Pics/house.png" );
image = cv2.resize( image, ( 512, 512 ) );

original = image.copy();
img = image.copy();

# GrayScale and Binarize;
gray = cv2.cvtColor( image, cv2.COLOR_BGR2GRAY );
ret, thresh = cv2.threshold( gray, 127, 255, cv2.THRESH_BINARY_INV );

# Find Contours;
contours, heirarchy = cv2.findContours( thresh.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE );

# Iterate through each contour and compute the bounding rectagle;
for c in contours:
    x, y, w, h = cv2.boundingRect( c );

    cv2.rectangle( original, ( x, y ), ( x + w, y + h ), ( 255, 0, 0 ), 2 );

# Iterate through each contour and compute the approx contour;
for c in contours:
    # Calculate accuracy as a percentage of the contour perimeter;
    accuracy = 0.03 * cv2.arcLength( c, True );
    approx = cv2.approxPolyDP( c, accuracy, True );

    cv2.drawContours( image, [ approx ], 0, ( 0, 255, 0 ), 2 );

cv2.imshow( "Original", img );
cv2.imshow( "Bounding Rectangle", original );
cv2.imshow( "Approx Poly DP", image );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
