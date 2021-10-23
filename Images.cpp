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

void PeopleImg()
{
    std::string image_path = samples::findFile("people.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("People", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("People");
}

void ElkImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void FallowImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void RedSqImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void RoeImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void EUbiImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void ExPonImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void HorseImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void LHCatImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void WildBoarImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void StorkImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void WTEImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void PiMarImg()
{
    std::string image_path = samples::findFile("elk.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("elk", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("elk");
}

void TamPigImg()
{
    std::string image_path = samples::findFile("TamworthPig.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("TamworthPig", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("TamworthPig");
}

void HeckImg()
{
    std::string image_path = samples::findFile("HeckCattle.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("HeckCattle", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("HeckCattle");
}

void RedDeerImg()
{
    std::string image_path = samples::findFile("RedDeer.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("RedDeer", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("RedDeer");
}

void EUBevImg()
{
    std::string image_path = samples::findFile("Beaver.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Beaver", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Beaver");
}

void WolfImg()
{
    std::string image_path = samples::findFile("Wolf.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Wolf", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Wolf");
}

void BearImg()
{
    std::string image_path = samples::findFile("Bear.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Bear", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Bear");
}

void EULyImg()
{
    std::string image_path = samples::findFile("Lynx.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Lynx", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Lynx");
}

void WildcatImg()
{
    std::string image_path = samples::findFile("Wildcat.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Wildcat", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Wildcat");
}
