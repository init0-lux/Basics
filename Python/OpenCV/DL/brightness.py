#! /usr/bin/python3

import cv2
import numpy as np

image = cv2.imread( "Pics/Java.resized.jpg" );

# Create a matrix of ones, then multiply by a scalar value of 100;
# This gives the matrix with same dimensions of our image with all values being
# 100;
M = np.ones( image.shape, np.uint8 ) * 75;

# We use this to add this matrix M to our image;
# Notice the increase in Brightness;
added = cv2.add( image, M );

# Likewise, we can also subtract this from matrix M;
subtracted = cv2.subtract( image, M );

cv2.imshow( "Original", image )
cv2.imshow( "Bright", added );
cv2.imshow( "Dim", subtracted );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
