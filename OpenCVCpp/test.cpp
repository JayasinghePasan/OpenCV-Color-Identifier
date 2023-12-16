//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//void main()
//{
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//	Mat imgGray, imgBlur, imgCanny, imgDil, imgEro;
//
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);
//	GaussianBlur(img, imgBlur, Size(3, 3), 5, 5);
//	Canny(imgBlur, imgCanny, 50, 150);
//
//	Mat kernal = getStructuringElement(MORPH_RECT, Size(3,3));
//	dilate(imgCanny, imgDil, kernal);
//	erode(imgDil, imgEro, kernal);
//
//	imshow("Image", img);
//	imshow("ImageGray", imgGray);
//	imshow("ImageBlur", imgBlur);
//	imshow("ImageCanny", imgCanny);
//	imshow("ImageDil", imgDil);
//	imshow("ImageEro", imgEro);
//
//	waitKey(0);
//}