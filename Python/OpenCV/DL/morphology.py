#! /usr/bin/python3

import numpy as np
import cv2

# Load Image;
image = cv2.imread( "Pics/numbers.jpeg" );

# Define Kernel Size;
kernel = np.ones( ( 5, 5 ), np.uint8 );

# Erosion;
erosion = cv2.erode( image, kernel, iterations = 1 );

# Dilation;
dilation = cv2.dilate( image, kernel, iterations = 1 );

# Opening - Good for removing Noise;
opening = cv2.morphologyEx( image, cv2.MORPH_OPEN, kernel );

# Closing - Good for removing Noise;
closing = cv2.morphologyEx( image, cv2.MORPH_CLOSE, kernel );

cv2.imshow( "Original", image );
cv2.imshow( "Erosion", erosion );
cv2.imshow( "Dilation", dilation );
cv2.imshow( "Opening", opening );
cv2.imshow( "Closing", closing );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
