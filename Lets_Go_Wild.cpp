// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


//Creates Ecosystem.
Ecosystem createEco()
{
	std::string name;
	std::cout << "\nWhat would you like to name your Ecosystem? ";
	std::cin >> name;
	Ecosystem protag(name);
	return protag;
}