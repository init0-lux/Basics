#! /usr/bin/python3

import cv2
import numpy as np

image  = cv2.imread( "Pics/nature.jpeg" );

cv2.imshow( "Original", image );
cv2.waitKey( 0 );

# Creating a 3 x 3 Kernel;
kernel_3 = np.ones( ( 3, 3 ), np.float32 ) / 9;

# Creating a 7 x 7 Kernel;
kernel_7 = np.ones( ( 7, 7 ), np.float32 ) / 49;

# Using cv2.filter2D to convolute image;
# Minimal Blurring;
blurred3 = cv2.filter2D( image, -1, kernel_3 );

# Greater Blur;
blurred7 = cv2.filter2D( image, -1, kernel_7 );

cv2.imshow( "3 x 3", blurred3 );
cv2.waitKey( 0 );

cv2.imshow( "7 x 7", blurred7 );
cv2.waitKey( 0 );

cv2.destroyAllWindows();
