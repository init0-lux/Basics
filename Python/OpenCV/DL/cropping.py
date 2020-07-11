#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Face.jpg" );

height, width = image.shape[ :2 ];

# Get pixel coordinates; top left of cropping rectangle;
start_row, start_col = int( height * 0.25 ), int( width * 0.25 );

# Get pixel coordinates end; bottom right of cropping rectangle;
end_row, end_col = int( height * 0.75 ), int( width * 0.75 );

# Use indexing to crop out the rectangle;
cropped = image[ start_row : end_row, start_col : end_col ];

cv2.imwrite( "Pics/Face.cropped.jpg", image );

cv2.imshow( "Original", image );
cv2.imshow( "Cropped", cropped );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
