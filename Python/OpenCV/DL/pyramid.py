#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Java.resized.jpg" );

smaller = cv2.pyrDown( image );
larger = cv2.pyrUp( smaller );

cv2.imshow( "Original", image );
cv2.imshow( "Reduced", smaller );
cv2.imshow( "Expanded", larger );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
