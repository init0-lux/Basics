#! /usr/bin/python3

import cv2
import numpy as np

image = cv2.imread( "Pics/Java.resized.jpg" );

# Store Height and Width of the Image;
height, width = image.shape[ :2 ];

# Create cut-off values;
quarter_height, quarter_width = height / 4, width / 4;

# Create Translation Matrix
T = np.float32( [ [ 1, 0, quarter_width ], [ 0, 1, quarter_height ] ] );

# warpAffine for image transformation;
translation = cv2.warpAffine( image, T, ( width, height ) );

cv2.imshow( "Original", image );
cv2.imshow( "Translation", translation );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
