#! /usr/bin/python3

import numpy as np
import cv2

# Load Image;
image = cv2.imread( "Pics/nature.jpeg", 0 );

height, width = image.shape;

# Extract Sobel Edges;
sobel_x = cv2.Sobel( image, cv2.CV_64F, 0, 1, ksize = 5 );                      # Horizontal;
sobel_y = cv2.Sobel( image, cv2.CV_64F, 1, 0, ksize = 5 );                      # Vertical;

sobel_OR = cv2.bitwise_or( sobel_x, sobel_y );                                  # Combined;

# Laplacian;
laplacian = cv2.Laplacian( image, cv2.CV_64F );

# Canny
canny = cv2.Canny( image, 20, 170 );

cv2.imshow( "Original", image );
cv2.imshow( "Sobel X", sobel_x );
cv2.imshow( "Sobel Y", sobel_y );
cv2.imshow( "Sobel Combined", sobel_OR );
cv2.imshow( "Laplacian", laplacian );
cv2.imshow( "Canny", canny );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
