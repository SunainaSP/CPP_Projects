#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include <iostream>

using namespace  std;

int main()
{
cv::Mat image = cv::imread("animal.jpeg");
cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
cv::imshow("image", image);
cout<<image.size();
cv::waitKey(0);

cv::Rect croppedRectangle = cv::Rect(70,10,100,100);
cv::Mat croppedImage = image(croppedRectangle);

cv::namedWindow("cropped", cv::WINDOW_AUTOSIZE);
cv::imshow("cropped", croppedImage);
cv::waitKey(0);
}
