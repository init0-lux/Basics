#! /usr/bin/python3

import time
import cv2

face_cascade = cv2.CascadeClassifier( "haarcascades/haarcascade_frontalface_default.xml" );             # Load  CascadeClassifier;
video = cv2.VideoCapture( 4 );                                                                          # Capture Video from Webcam;

while True:
    check, frame = video.read();

    gray = cv2.cvtColor( frame, cv2.COLOR_BGR2GRAY );

    faces = face_cascade.detectMultiScale( gray, scaleFactor = 1.05, minNeighbors = 5 );               # Detect for Faces;

    try:
        for x, y, w, h in faces:
             img = cv2.rectangle( frame, ( x, y ), ( x + w, y + h ), ( 255, 0, 0 ), 3 );               # Draw Rectangle on the outline of image;
             img = cv2.cvtColor( img, cv2.BGR2GRAY_COLOR );
    except:
        pass;

    try:
        cv2.imshow( "Face Detected", img );                                                             # Show face detected;
    except:
        pass;

    key = cv2.waitKey( 1 );

    if key == ord( 'q' ):
        break;

video.release();
cv2.destroyAllWindows();
