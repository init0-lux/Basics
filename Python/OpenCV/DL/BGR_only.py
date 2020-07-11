#! /usr/bin/python3

import cv2
import numpy as np

img = cv2.imread( "Pics/Java.resized.jpg" );

B, G, R = cv2.split( img );

# Create a matrix of zeroes to fill up empty matrixes;
zeroes = np.zeros( img.shape[ :2 ], dtype = "uint8" );

# This code shows only R, G, B colors of the image;
cv2.imshow( "Red", cv2.merge( [ zeroes, zeroes, R ] ) );
cv2.imshow( "Green", cv2.merge( [ zeroes, G, zeroes ] ) );
cv2.imshow( "Blue", cv2.merge( [ B, zeroes, zeroes ] ) );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
