#! /usr/bin/python3

import cv2
import numpy as np

image = np.zeros( ( 512, 512, 3 ), np.uint8 );

image = cv2.putText( image, "Hello World!", ( 75, 290), cv2.FONT_HERSHEY_COMPLEX, 2, ( 100, 170, 0 ), 3 );
image = cv2.putText

cv2.imshow( "Hello, World", image );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
