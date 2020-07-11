#! /usr/bin/python3

import cv2
import numpy as np

# Making a Black Square;
square = np.zeros( ( 300, 300 ), np.uint8 );

# Making a Rectangle( Square );
cv2.rectangle( square, ( 50, 50), ( 250, 250 ), 255, -2 );

# Making an Ellipse;
ellipse = np.zeros( ( 300, 300 ), np.uint8 );
cv2.ellipse( ellipse, ( 150, 150 ), ( 150, 150 ), 30, 0, 180, 255, -1 );

cv2.imshow( "Square", square );
cv2.imshow( "Ellipse", ellipse );
cv2.waitKey( 0 );
cv2.destroyAllWindows();

# Shows parts of intersection;
And = cv2.bitwise_and( square, ellipse );

# Shows overlay;
Or = cv2.bitwise_or( square, ellipse );

# Does not show intersection;
Xor = cv2.bitwise_xor( square, ellipse );

# Show inverse of one image;
Not = cv2.bitwise_not( square );

cv2.imshow( "And", And );
cv2.imshow( "Or", Or );
cv2.imshow( "Xor", Xor );
cv2.imshow( "Not", Not);

cv2.waitKey( 0 );
cv2.destroyAllWindows();
