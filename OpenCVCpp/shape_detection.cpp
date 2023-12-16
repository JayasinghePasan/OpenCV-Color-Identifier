//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat imgGray, imgBlur, imgCanny, imgDil, imgEro;
//
//
//vector<vector<Point>> contours;
//vector<Vec4i> hierarchy;
//void getContours(Mat, Mat);
//
//void main()
//{
//	string path = "Resources/shapes.png";
//	Mat img = imread(path);
//	
//	// pre-processing
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);
//	GaussianBlur(img, imgBlur, Size(3, 3), 5, 5);
//	Canny(imgBlur, imgCanny, 50, 150);
//
//	Mat kernal = getStructuringElement(MORPH_RECT, Size(3,3));
//	dilate(imgCanny, imgDil, kernal);
//
//	getContours(imgDil, img);
//
//	imshow("Image", img);
//
//	waitKey(0);
//}
//
//void getContours(Mat imgDil, Mat img)
//{
//	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//
//	for (int i = 0 ; i < contours.size(); i++)
//	{
//		int area = contourArea(contours[i]);
//		cout << area;
//		if (area > 1000)
//		{
//			float peri = arcLength(contours[i], true);
//			cout << "Draw" << endl;
//			drawContours(img, contours, i, Scalar(255, 0, 255), 5);
//		}
//	}
//}