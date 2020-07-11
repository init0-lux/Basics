#! /usr/bin/python3

import time
import cv2

video = cv2.VideoCapture( 2 );                                          # 0 for Default Webcam( color ); 2 for Default Webcam( IR ); 4 for External Webcam ( Volatile!!! );

a = 0;                                                                  # Additive Identity for Frame count;

while True:
    a += 1;
    check, frame = video.read();                                        # check is a bool value, frame is numpy.ndarray;

    gray = cv2.cvtColor( frame, cv2.COLOR_BGR2GRAY );                   # Convert frame into grayscale image;
    cv2.imshow( "Capturing", frame );                                   # Replace gray with frame for coloured output;

    key = cv2.waitKey( 1 );                                             # Wait for a milli-second before next iteration; Int value only;

    if key == ord( 'q' ):                                               # Enter q to quit;
        break;

print( a );                                                             # Show Frame Count;

video.release();
cv2.destroyAllWindows();
