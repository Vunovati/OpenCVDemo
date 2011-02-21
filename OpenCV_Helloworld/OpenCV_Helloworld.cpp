// OpenCV_Helloworld.cpp : Defines the entry point for the console application.
// Created for build/install tutorial, Microsoft Visual C++ 2010 Express and OpenCV 2.1.0

#include "stdafx.h"

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

int _tmain(int argc, _TCHAR* argv[])
{
        IplImage *img = cvLoadImage("kakoobjasniti11at.jpg");
        cvNamedWindow("Image:",1);
        cvShowImage("Image:",img);

        cvWaitKey();
        cvDestroyWindow("Image:");
        cvReleaseImage(&img);

        return 0;
}