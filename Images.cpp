//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University

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

void EcoWomanImg()
{
    std::string image_path = samples::findFile("ecowoman.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("ecowoman", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("ecowoman");
}

void EcomanImg()
{
    std::string image_path = samples::findFile("ecoman.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("ecoman", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("ecoman");
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
    std::string image_path = samples::findFile("FallowDeer.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("FallowDeer", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("FallowDeer");
}

void RedSqImg()
{
    std::string image_path = samples::findFile("RedSquirrel.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("RedSquirrel", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("RedSquirrel");
}

void RoeImg()
{
    std::string image_path = samples::findFile("RoeDeer.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("RoeDeer", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("RoeDeer");
}

void EUbiImg()
{
    std::string image_path = samples::findFile("Bison.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Bison", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Bison");
}

void ExPonImg()
{
    std::string image_path = samples::findFile("ExmoorPony.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("ExmoorPony", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("ExmoorPony");
}

void HorseImg()
{
    std::string image_path = samples::findFile("Horse.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Horse", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Horse");
}

void LHCatImg()
{
    std::string image_path = samples::findFile("LHCattle.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("LHCattle", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("LHCattle");
}

void WildBoarImg()
{
    std::string image_path = samples::findFile("WildBoar.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("WildBoar", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("WildBoar");
}

void StorkImg()
{
    std::string image_path = samples::findFile("Stork.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Stork", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("Stork");
}

void WTEImg()
{
    std::string image_path = samples::findFile("WTEagle.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("WTEagle", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("WTEagle");
}

void PiMarImg()
{
    std::string image_path = samples::findFile("PineMarten.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("PineMarten", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(50000);
    destroyWindow("PineMarten");
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
