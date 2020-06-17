#include <opencv2/highgui/highgui.hpp>

int main(int argc, const char *argv[])
{
    cv::Mat img=cv::imread(argv[1],-1);
    if(img.empty()) return -1;
    cv::namedWindow("dispimg",cv::WINDOW_AUTOSIZE);
    cv::imshow("dispimg",img);
    cv::waitKey(0);
    cv::destroyWindow("dispimg");
    return 0;
}
