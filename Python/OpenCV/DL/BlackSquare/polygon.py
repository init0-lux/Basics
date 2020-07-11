#! /usr/bin/python3

import cv2
import numpy as np

image = np.zeros( ( 512, 512, 3 ), np.uint8 );

# Define Points here;
pts = np.array( [ [ 10, 50 ], [ 450, 500 ], [ 90, 200 ], [ 50, 500 ] ], np.int32 );

# You have to reshape;
pts = pts.reshape( ( -1, 1, 2 ) );

cv2.polylines( image, [pts], True, ( 0, 255, 255 ), 3 );

cv2.imshow( "Polygons", image );
cv2.waitKey( 0 );
cv2.destroyAllWindows();
