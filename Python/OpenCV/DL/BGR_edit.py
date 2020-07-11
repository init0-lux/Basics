#! /usr/bin/python3

import cv2

img = cv2.imread( "Pics/Java.resized.jpg" );

# OpenCV has a 'split' function which splits the image into each color index

B, G, R = cv2.split( img );

# OpenCV has a 'merged' function which merges three colors;
merged = cv2.merge( [ B, G, R ] );

# 'merged' function can be used to amplify a certain color;
amplified = cv2.merge( [ B, G, R + 100 ] );

# This code shows a grayscale image, with values of R, G, B as B&W;
cv2.imshow( "Red", R );
cv2.imshow( "Green", G );
cv2.imshow( "Blue", B );

cv2.waitKey( 0 );
cv2.destroyAllWindows();

cv2.imshow( "Merged Image", merged );
cv2.imshow( "Amplified Image", amplified );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
