#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

class ImageFilter{

private:
cv::Mat image;

public:
void Blurr();
void Mediann();
};

void ImageFilter::Blurr()
{
cv::Mat gaussian_blur;
cv::GaussianBlur(image, gaussian_blur, cv::Size(5,5), 7,7);
cv::imshow("gaussian blur", gaussian_blur);
}

void ImageFilter::Mediann()
{
cv::Mat median_blur;
cv::medianBlur(image, median_blur, 5);
cv::imshow("Median blur", median_blur);
}

int main(){
cv::Mat image = cv::imread("Birdy.jpg");
cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
cv::imshow("Display window", image);

cv::waitKey(0);

ImageFilter obj;

int choice = 2;
cout<<"Enter your choice"<<endl;
cin>>choice;

switch(choice)
{
case 1:
cout<<"choice 1";
obj.Blurr();
break;

case 2:
cout<<"choice 2";
obj.Mediann();
break;

default:
cout<<"invalid choice"<<endl;
break;
}
return 1;
}

