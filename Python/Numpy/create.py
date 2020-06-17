#! /usr/bin/python3

import numpy as np
import cv2

img_ar = np.arange( 255 );

img_ar = img_ar.reshape( 5, 51 );

cv2.imwrite( "pixels.png", img_ar )
