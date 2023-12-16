//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat imgHSV, mask;
//int hmin = 0, smin = 110, vmin = 153;
//int hmax = 19, smax = 240, vmax = 255;
//
//void main()
//{
//	string path = "Resources/shapes.png";
//	Mat img = imread(path);
//	cvtColor(img, imgHSV, COLOR_BGR2HSV);
//
//	namedWindow("TrackBars", (640, 200));
//	createTrackbar("Hue Min", "TrackBars", &hmin, 179);
//	createTrackbar("Sat Min", "TrackBars", &smin, 179);
//	createTrackbar("Val Min", "TrackBars", &vmin, 255);
//
//	createTrackbar("Hue Max", "TrackBars", &hmax, 255);
//	createTrackbar("Sat Max", "TrackBars", &smax, 255);
//	createTrackbar("Val Max", "TrackBars", &vmax, 255);
//
//	while (true)
//	{
//
//		Scalar lower(hmin, smin, vmin);
//		Scalar upper(hmax, smax, vmax);
//
//		inRange(imgHSV, lower, upper, mask);
//
//		//imshow("img", img);
//		//imshow("imgHSV", imgHSV);
//		imshow("msk", mask);
//
//		waitKey(1);
//	}
//}