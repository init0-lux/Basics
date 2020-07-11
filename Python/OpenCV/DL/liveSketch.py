#! /usr/bin/python3

import numpy as np
import cv2

# Sketch Function;
def sketch( image ):
    # Convert image to GrayScale;
    image_gray = cv2.cvtColor( image, cv2.COLOR_BGR2GRAY );

    # Clean up the image;
    image_blur = cv2.GaussianBlur( image_gray, ( 5, 5 ), 0 );

    # Extract the edges;
    edges = cv2.Canny( image_blur, 10, 45 );

    # Don't BINARY_INV the image;
    ret, mask = cv2.threshold( edges, 45, 255, cv2.THRESH_BINARY_INV );
    return mask;

video = cv2.VideoCapture( 0 );

while True:
    ret, frame = video.read();

    cv2.imshow( "Live Sketcher", sketch( frame ) );

    key = cv2.waitKey( 1 );

    if ( key == ord( 'q' ) or key == 13 ):
        break;

video.release();
cv2.destroyAllWindows();
