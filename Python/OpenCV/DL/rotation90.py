#! /usr/bin/python3

import cv2

image = cv2.imread( "Pics/Java.resized.jpg" );
height, width = image.shape[ :2 ];

# Divide attributes of image by 2 to rotate around the center;
rotation_matrix = cv2.getRotationMatrix2D( ( width / 2, height / 2 ), 90, 0.5 );

# This code shows image with all the black space around it;
rotated_image = cv2.warpAffine( image, rotation_matrix, ( width, height )) ;

# This code crops and scales automatically;
# But only rotates at an angle of 90;
rotated_image_2 = cv2.transpose( image );

cv2.imshow( "Rotation 101", rotated_image );
cv2.imshow( "Transpose 101", rotated_image_2 )

cv2.waitKey( 0 );
cv2.destroyAllWindows();
