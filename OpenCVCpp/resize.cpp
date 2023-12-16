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
//	Mat imgResize, imgCrop;
//
//	//cout << img.size() << endl;
//	resize(img, imgResize, Size(), 0.5, 1.5);
//	Rect roi(200, 100, 300, 300);
//	imgCrop = img(roi);
//
//	imshow("Image", img);
//	imshow("Image Resized", imgResize);
//	imshow("Image Crop", imgCrop);
//
//
//	waitKey(0);
//}