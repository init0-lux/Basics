#! /usr/bin/python3

import numpy as np
import cv2

image = cv2.imread( "Pics/Java.resized.jpg" );

# Cooridinates of 4 corners of Original Image;
points_A = np.float32( [ [ 320, 15 ], [ 700, 215 ], [ 85, 10 ], [ 530, 150 ] ] );

# Coordinates of 4 corners of Desired Output;
# Ratio used is of an A4 Paper; 1 : 1.41;
points_B = np.float32( [ [ 0, 0 ], [ 420, 0 ], [ 0, 594 ], [ 420, 594 ] ] );


# Use the two sets of four points to compute the Perspective Tranformation
# Matix, M;
M = cv2.getPerspectiveTransform( points_A, points_B );

warped = cv2.warpPerspective( image, M, ( 420, 594) );

cv2.imshow( "Original", image );
cv2.imshow( "Warped", warped );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
