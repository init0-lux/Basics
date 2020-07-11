#! /usr/bin/python3

import cv2
import numpy as np

# Load the image as GrayScale;
image = cv2.imread( "Pics/gradient.jpeg", 0 );

# Values below 127 go to 0, above go to 255;
ret, thresh = cv2.threshold( image, 127, 255, cv2.THRESH_BINARY );

# Inverted of Previous Command;
ret, threshinv = cv2.threshold( image, 127, 255, cv2.THRESH_BINARY_INV );

# Values below 127 go to 0, above 127 are unchanged;
ret, tozero = cv2.threshold( image, 127, 255, cv2.THRESH_TOZERO );

# Inverted of Previous Command;
ret, tozeroinv = cv2.threshold( image, 127, 255, cv2.THRESH_TOZERO_INV );

# Values above 127 are truncated( cut-off / held ) at 127;
# The 255 argument is unused;
ret, trunc = cv2.threshold( image, 127, 255, cv2.THRESH_TRUNC );

cv2.imshow( "Original", image );
cv2.imshow( "Binary", thresh );
cv2.imshow( "Binary Inverted", threshinv );
cv2.imshow( "ToZero", tozero );
cv2.imshow( "ToZero Inverted", tozeroinv );
cv2.imshow( "Truncate", trunc );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
