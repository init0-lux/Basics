#! /usr/bin/python3

import cv2
import numpy as np

zeros = np.zeros( ( 512, 512, 3 ), np.uint8 );

cv2.circle( zeros, ( 350, 350 ), 100, ( 255, 0, 0 ), -1 );

cv2.imshow( "Circle", zeros );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
