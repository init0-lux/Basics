#! /usr/bin/python3

import time
import os
import cv2
import pandas
from datetime import datetime

first_frame = None;
status_list = [ None, None ];
times = [];

df = pandas.DataFrame( columns = [ "Start", "End" ] );

video = cv2.VideoCapture( 4 );

while True:
    check, frame = video.read();

    status = False;

    gray = cv2.cvtColor( frame, cv2.COLOR_BGR2GRAY );
    gray = cv2.GaussianBlur( gray, ( 21, 21 ), 0 );                                 # First arg is data, Second arg is Threshold, Third arg is Color to change to;

    if first_frame is None:
        first_frame = gray;
        continue;

    delta_frame = cv2.absdiff( first_frame, gray );                                 # absdiff = absolute difference between arguments;
    thresh_frame = cv2.threshold( delta_frame, 50, 255, cv2.THRESH_BINARY )[ 1 ];   # Threshold data;
    thresh_frame = cv2.dilate( thresh_frame, None, iterations = 2 );                # Does something;

    (cnts,_) = cv2.findContours( thresh_frame.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE );

    for contour in cnts:
        if ( cv2.contourArea( contour ) > 10000 ):                                 # 1000 or 10000 is the estimated size of objects in pixels;
            os.system( "pkill vlc" );
            continue;

        status = True;

        ( x, y, w, h ) = cv2.boundingRect( contour );                              # Read dimensions of contour rectangle;
        cv2.rectangle( frame, ( x, y ), ( x + w, y + h ), ( 255, 0, 0 ), 3 );      # Draw Rectangle;

    status_list.append( status );

    status_list = status_list[ -2 : ];

    if ( status_list[ -1 ] == True and status_list[ -2 ] == False ):
        times.append( datetime.now() );
    if ( status_list[ -1 ] == False and status_list[ -2 ] == True ):
        times.append( datetime.now() );

    # cv2.imshow( "Gray Frame", gray );
    # cv2.imshow( "Delta Frame", delta_frame );
    # cv2.imshow( "Threshold Difference", thresh_frame );
    cv2.imshow( "Color Frame", frame );

    key = cv2.waitKey( 1 );

    if key == ord( 'q' ):
        
        if ( status == True ):
            times.append( datetime.now() );

        break;

# print ( times );

for i in range( 0, len( times ), 2 ):
    df = df.append( { "Start" : times[ i ], "End" : times[ i + 1 ] }, ignore_index = True );

df.to_csv( "Times.csv" );

video.release();
cv2.destroyAllWindows();
