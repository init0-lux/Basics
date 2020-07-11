#! /usr/bin/python3

import cv2
import numpy as np

# Create a Black Image
image = np.zeros( ( 512, 512, 3 ), np.uint8);

cv2.imshow( "Black Rectangle", image );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
