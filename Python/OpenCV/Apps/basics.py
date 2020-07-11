#! /usr/bin/python3

import cv2

img = cv2.imread( "Pics/java.jpeg", 1 ); # cv2.imread( "img.path", x ); x = int( -1, 0, 1 ); -1 for Transparency, 0 for Grayscale, 1 for Color;

print( type( img ) );               # Output: numpy.ndimensional.array;
print( img );                       # Output: < Numpy Array >;
print( img.shape );                 # Output: Image Resolution;
print( img.ndim );                  # Output: Number of N-Dimensional Arrays;

resized = cv2.resize( img,( int( img.shape[1] / 2 ), int( img.shape[0] / 2 ))); # This resizes the image and saves it in 'resized' variable;

cv2.imwrite( "Pics/Java.resized.jpg", resized ); # Saves resized image with given name;

cv2.imshow( "Java", img );               # This creates a window and shows the image, with window name passed;
cv2.waitKey( 0 );                        # Destroyes window after time passes;
cv2.destroyAllWindows();                 # Destroyes Window Process;
