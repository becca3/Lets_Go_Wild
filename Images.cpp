#include "Images.h"

using namespace cv;

void LogoImg()
{
    std::string image_path = samples::findFile("Logo.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Welcome to Let's Go Wild!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(10000);
    destroyWindow("Welcome to Let's Go Wild!");
}