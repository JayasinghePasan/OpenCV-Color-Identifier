#include "findColor.h"
void findColor(Mat img)
{
	//colo palatte                 // RED                  // GREEN
	vector<vector<int>> colors = { {0,129,106,24,255,255}, {63,69,45,92,255,255} };

	Mat imgHSV, msk;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	for (int i = 0; i < colors.size(); i++)
	{
		Scalar lower(colors[i][0], colors[i][1], colors[i][2]);
		Scalar upper(colors[i][3], colors[i][4], colors[i][5]);

		inRange(imgHSV, lower, upper, msk);
		imshow(to_string(i), msk);

	}
	
}