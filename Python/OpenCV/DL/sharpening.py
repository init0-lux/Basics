#! /usr/bin/python3

import cv2
import numpy as np

image = cv2.imread( "Pics/nature.jpeg" );

# Create the sharpening kernel;
# We don't want to normalize, since the sum of values = 1;
sharp = np.array([[ -1, -1, -1 ],
                  [ -1, 9, -1  ],
                  [ -1, -1, -1 ]]);

# Applying sharpening kernel;
sharpened = cv2.filter2D( image, -1, sharp );

cv2.imshow( "Original", image );
cv2.imshow( "Sharpened", sharpened );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
