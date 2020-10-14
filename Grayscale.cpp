#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main(){
const std::string img_file("Birdy.jpg");

cv::Mat input = cv::imread(img_file, 1);
if(!input.data){
std::cout << "cant find the requested file" << img_file << std::endl;
exit(1);
}

cv::Mat gray;
cvtColor(input, gray, cv::COLOR_BGR2GRAY);

cv::namedWindow("Birdy", cv::WINDOW_AUTOSIZE);
cv::imshow("Birdy", input);

cv::namedWindow("Birdy-gray", cv::WINDOW_AUTOSIZE);
cv::imshow("Birdy-gray", gray);

cv::waitKey(0);
}

