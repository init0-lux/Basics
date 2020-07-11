#! /usr/bin/python3

import cv2
import numpy as np

# Load new image
# image = cv2.imread( "Pics/origincover.jpeg", 0 );
image = cv2.imread( "Pics/origin.png", 0 );

# Values below 127 go to 0, above goes to 255;
ret, thresh = cv2.threshold( image, 127, 255, cv2.THRESH_BINARY );

# It's a good practice to blur images as it removes noise;
image = cv2.GaussianBlur( image, ( 3, 3 ), 0 );

# Using $adaptiveThreshold;
adaptive = cv2.adaptiveThreshold( image, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 3, 5 );

# Otsu Thresholding;
_, otsu = cv2.threshold( image, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU );

# Otsu after GaussianFiltering;
blur = cv2.GaussianBlur( image, ( 5, 5 ), 0 );
_, ostu2 = cv2.threshold( blur, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU );

cv2.imshow( "Original", image );
cv2.imshow( "Thresh", thresh );
cv2.imshow( "Adaptive Threshold", adaptive );
# cv2.imshow( "Ostu Thresh", ostu );
cv2.imshow( "Ostu Thresh after GaussianBlur", ostu2 );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
