#! /usr/bin/python3

import cv2
import numpy as np

# Draw a Diagonal line of thickness of 5 pixels;
image = np.zeros( ( 512, 512, 3 ), np.uint8 );

cv2.line( image, ( 0, 0 ), ( 511, 511 ), ( 255, 127, 0 ), 5 );
cv2.line( image, ( 511, 0 ), ( 0, 511 ), ( 255, 127, 0 ), 5 );
cv2.line( image, ( 0, 255 ), ( 511, 256 ), ( 255, 127, 0 ), 5 );
cv2.line( image, ( 255, 0 ), ( 256, 511 ), ( 255, 127, 0 ), 5 );

cv2.line( image, ( 511, 511 ), ( 255, 256 ), ( 255, 127, 0 ), 5 );
cv2.line( image, ( 0, 511 ), ( 255, 256 ), ( 255, 127, 0 ), 5 );

cv2.line( image, ( 255, 256 ), ( 511, 0 ), ( 0, 0, 255 ), 5 );
cv2.line( image, ( 255, 256 ), ( 511, 511 ), ( 0, 0, 256 ), 5 );
cv2.line( image, ( 255, 256 ), ( 0, 511 ), ( 0, 0, 255 ), 5 );
cv2.line( image, ( 255, 256 ), ( 0, 0 ), ( 0, 0, 256 ), 5 );

cv2.line( image, ( 0, 0 ), ( 511, 0 ), ( 0, 255, 0 ), 10 );
cv2.line( image, ( 0, 0 ), ( 0, 511 ), ( 0, 255, 0 ), 10 );
cv2.line( image, ( 511, 511 ), (0, 511 ), ( 0, 255, 0 ), 10 );
cv2.line( image, ( 511, 511 ), ( 511, 0 ), ( 0, 255, 0 ), 10 );

cv2.line( image, ( 255, 0 ), ( 511, 256 ), ( 0, 127, 255 ), 5 );
cv2.line( image, ( 255, 0 ), ( 0, 256 ), ( 0, 127, 255 ), 5 );
cv2.line( image, ( 255, 511 ), ( 0, 256 ), ( 0, 127, 255 ), 5 );
cv2.line( image, ( 255, 511 ), ( 511, 256 ), ( 0, 127, 255 ), 5 );

cv2.rectangle( image, ( 127, 127 ), ( 382, 382 ), ( 255, 255, 255 ), 5 );

cv2.imshow( "Blue Line", image );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
