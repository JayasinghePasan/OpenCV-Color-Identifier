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
//	Mat img(512, 512, CV_8UC3, Scalar(255,0,255));
//	circle(img, Point(256, 256), 150, Scalar(0,0,0), FILLED);
//	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
//	line(img, Point(130, 226), Point(382, 296), Scalar(0, 255, 255), 2);
//	putText(img, "Pasan Jayasinghe", Point(137, 226), FONT_HERSHEY_DUPLEX, 0.5, Scalar(0, 69, 255), 1);
//	imshow("new image", img);
//	waitKey(0);
//}