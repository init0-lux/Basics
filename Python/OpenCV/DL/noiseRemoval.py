#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Face.jpg" );

# Basically Smoothens the image;
dst = cv2.fastNlMeansDenoisingColored( image, None, 6, 6, 7, 21 );

# There are many types of cv2.fast family;

# cv2.fastNlMeansDenoising();  - Works with a single grayscale image;
# cv2.fastNlMeansDenoisingColored() - Works with a color image;
# cv2.fastNlMeansDenoisingMulti() - Works with image sequence captued in a
#                                   short period of time( Grayscale Image );
# cv2.fastNlMeansDenoisingColoredMulti() - same as above, but for colored;

cv2.imshow( "Original", image );
cv2.imshow( "Fast Means Denoising", dst );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
