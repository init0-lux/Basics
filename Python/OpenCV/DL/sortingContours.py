#! /usr/bin/python3

import numpy as np
import cv2

image = cv2.imread( "Pics/BunchaShapes.jpeg" );

image = cv2.resize( image, ( 512, 512 ) );

# Create a Black image with same dimensions as loaded image;
black = np.zeros( ( image.shape[ 0 ], image.shape[ 1 ], 3 ) );

# Create a copy of $image;
original = image.copy();

gray = cv2.cvtColor( image, cv2.COLOR_BGR2GRAY );

# Find Canny Edges;
edges = cv2.Canny( gray, 50, 200 );

# Find contours and print out the number;
contours, heirarchy = cv2.findContours( edges.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE );
# print( "Number of Contours found: " + str( len( contours ) ));

# Draw All Contours;
# cv2.drawContours( black, contours, -1, ( 0, 255, 0 ), 3 );

# Draw All Contours over black image;
# cv2.drawContours( black, contours, -1, ( 0, 255, 0 ), 3 );

# cv2.imshow( "Original", original );
# cv2.imshow( "Canny Edges", edges  );
# cv2.imshow( "Contours", image  );
# cv2.imshow( "Contours over black", black );

# cv2.waitKey( 0 );
# cv2.destroyAllWindows();
