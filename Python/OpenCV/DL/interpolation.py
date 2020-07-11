#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Java.resized.jpg" );

# Image will become 3/4th of Original Size;
image_scaled = cv2.resize( image, None, fx = 0.75, fy = 0.75 );

# Image will be doubled;
image_doubled = cv2.resize( image, None, fx = 2, fy = 2 );

# Skew image resizing by specifying exact dimensions;
image_exact = cv2.resize( image, ( 500, 300 ), interpolation = cv2.INTER_AREA );

cv2.imshow( "Image Reduced", image_scaled );
cv2.imshow( "Image Doubled", image_doubled );
cv2.imshow( "Exact Scaling", image_exact );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
