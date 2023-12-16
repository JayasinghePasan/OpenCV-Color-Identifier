#include "colorPicker.h"

void colorPicker(VideoCapture webCam)
{
	Mat img;
	Mat imgHSV, mask, imgColor;
	int hmin = 0, smin = 0, vmin = 0;
	int hmax = 179, smax = 255, vmax = 255;

	namedWindow("TrackBars", (640, 200));
	createTrackbar("Hue Min", "TrackBars", &hmin, 179);
	createTrackbar("Sat Min", "TrackBars", &smin, 179);
	createTrackbar("Val Min", "TrackBars", &vmin, 255);

	createTrackbar("Hue Max", "TrackBars", &hmax, 255);
	createTrackbar("Sat Max", "TrackBars", &smax, 255);
	createTrackbar("Val Max", "TrackBars", &vmax, 255);

	while (true)
	{
		webCam.read(img);
		cvtColor(img, imgHSV, COLOR_BGR2HSV);

		Scalar lower(hmin, smin, vmin);
		Scalar upper(hmax, smax, vmax);

		inRange(imgHSV, lower, upper, mask);
		// hmin, smin, vmin, hmax, smax, vmax;
		imshow("Image", img);
		imshow("Mask", mask);
		waitKey(1);
	}
}