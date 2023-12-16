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
//	string path = "resources/cards.jpg";
//	mat img = imread(path);
//	mat imggray, imgblur, imgcanny, imgdil, imgero;
//	imshow("cards", img);
//
//	float w = 250, h = 350;
//	mat imgwarp;
//
//	point2f src[4] = { {529,142}, {771,190}, {405,395}, {674,457} };
//	point2f dst[4] = { {0,10}, {w,0}, {0,h}, {w,h} };
//
//	mat matrix;
//	matrix = getperspectivetransform(src, dst);
//	warpperspective(img, imgwarp, matrix, point(w, h));
//	imshow("warp", imgwarp);
//
//	waitkey(0);
//}