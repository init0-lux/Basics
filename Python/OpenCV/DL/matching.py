#! /usr/bin/python3

import numpy as np
import cv2

# Load the shape template or reference image;
template = cv2.imread( "Pics/square.png", 0 );
template = cv2.resize( template, ( 512, 512 ) );

# Load the target image;
target = cv2.imread( "Pics/BunchaShapes.jpeg" );
target = cv2.resize( target, ( 512, 512 ) );

target_gray = cv2.cvtColor( target, cv2.COLOR_BGR2GRAY );

# Threshold both images using $cv2.findContours;
ret, threshTemp = cv2.threshold( template, 127, 255, 0 );
ret, threshTarg = cv2.threshold( target_gray, 127, 255, 0 );

# Find contours in template;
contours, heirarchy = cv2.findContours( threshTemp, cv2.RETR_CCOMP, cv2.CHAIN_APPROX_SIMPLE );

# We need to sort the contours by area so that we can remove the largest
# contour which is the image outline;
sorted_contours = sorted( contours, key = cv2.contourArea, reverse = True );

# We extract the second largest contour which will be our template contour;
template_contour = contours[1];

# Extract contours from target image;
contours, heirarchy = cv2.findContours( threshTarg, cv2.RETR_CCOMP, cv2.CHAIN_APPROX_SIMPLE );

# Iterate through each contour in the target image and use $cv2.matchShapes to
# compare contour shapes
for c in contours:
    match = cv2.matchShapes( template_contour, c, 1, 0.0 );
    print( match );

    # If the match value is less than 0.15, we
    if match < 0.15:
        closest_contour = c;
    else:
        closest_contour = [];

cv2.drawContours( target, [ closest_contour ], -1, ( 0, 255, 0 ), 3 );

cv2.imshow( "Original", template );
cv2.imshow( "Target", target );
# cv2.imshow( "",  );

cv2.waitKey( 0 );
cv2.destroyAllWindows();
