#! /usr/bin/python3

import cv2
import numpy as np

image = cv2.imread( "Pics/nature.jpeg" );

# Averaging done by convoluting the image with a normalized box filter;
# This takes the pixels under the box and replaces the central element;
# The Box size needs to be Odd and Positive;
blur = cv2.blur( image, ( 3, 3 ) );

# Takes median of all the pixels under kernel area and the central element is
# replaced with this median value;
median = cv2.medianBlur( image, 5 );

# Instead of box filter, uses a Gaussian Kernel;
Gaussian = cv2.GaussianBlur( image, ( 7, 7 ), 0 );

# Bilateral is very effective in noise removal while keeping the edges sharp;
# Also gives the image a painted-like appearance;
# Also smoothens the image;
bilateral = cv2.bilateralFilter( image, 9, 75, 75 );

cv2.imshow( "Original", image );
cv2.imshow( "cv2.Blur", blur );
cv2.imshow( "Median Blur", median );
cv2.imshow( "Gaussian Blur", Gaussian );
cv2.imshow( "Bilateral Filter", bilateral );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
