#include <opencv2/highgui.hpp>
#include <opencv2//opencv.hpp>
#include <iostream>

using namespace std;

int main()
{
cv::Mat image = cv::imread("animal.jpeg");
cv::imshow("Original Image", image);

cv:: Mat gray_scale;
cvtColor(image, gray_scale, cv::COLOR_BGR2GRAY);
cv::imshow("Gray_Scale", gray_scale);

cv::Mat gaussian_blur;
cv::GaussianBlur(image, gaussian_blur, cv::Size(5,5), 50, 50);
cv::imshow("Gaussian blur", gaussian_blur);

cv::Mat median_blur;
cv::medianBlur(image, median_blur, 5);
cv::imshow("Median Blur", median_blur);

cv::waitKey(0);
}
