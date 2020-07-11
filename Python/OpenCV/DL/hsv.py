#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Java.resized.jpg" );

hsv = cv2.cvtColor( image, cv2.COLOR_BGR2HSV  );

cv2.imshow( "HSV Image", hsv );
cv2.imshow( "Hue Channel", hsv[ :, :, 0 ] );
cv2.imshow( "Saturation Channel", hsv[ :, :, 1 ] );
cv2.imshow( "Intensity Channel", hsv[ :, :, 2 ] );

cv2.waitKey();
cv2.destroyAllWindows();
