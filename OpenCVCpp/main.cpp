// openCV
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

// my functions
#include "colorPicker.h"
#include "findColor.h"


int main()
{
	VideoCapture webCam(0);
	
	// Color Calibrator
	//colorPicker(webCam);
	
	Mat img;
	while (true)
	{
		webCam.read(img);
		findColor(img);
		//imshow("Paint", img);
		waitKey(10);
	}

	
	
	return 0;
}