#! /usr/bin/python3

import cv2

face_cascade = cv2.CascadeClassifier( "haarcascades/haarcascade_frontalface_default.xml" );  # Load CascadeClassifier from file;

img = cv2.imread( "Pics/Face.jpg" );                                                        # Read Image;
gray_img = cv2.cvtColor( img, cv2.COLOR_BGR2GRAY );                                         # Change Colour Scheme of image;

faces = face_cascade.detectMultiScale( gray_img, scaleFactor = 1.05, minNeighbors = 5 );    # Detect for faces in image using cascade classifiers;
# faces returns 4 int values, Starting of face of X - Axis. Ending of faces on Y - Axis, Width of Image area, Height of Image Area;

for x, y, w, h in faces:
    img = cv2.rectangle( img, ( x, y ), ( x + w, y + h ), ( 127, 127, 0 ), 3 );

print( faces );

cv2.imshow( "Faces", img );
cv2.waitKey( 0 );
cv2.destroyAllWindows();
