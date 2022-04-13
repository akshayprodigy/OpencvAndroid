//
// Created by Akshay Ghosh on 4/12/2022.
//

#include "opencv-utils.h"
#include <opencv2/imgproc.hpp>
void myflip(Mat src){
flip(src,src,0);
}

void myBlur(Mat src, float sigma){
    GaussianBlur(src, src, Size(), sigma);
}