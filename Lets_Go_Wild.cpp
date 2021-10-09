// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

//Begins game.
int startGame()
{
	std::string input;
	int distance = 0;
	Ecosystem protag = createEco();

	while (distance < 60)	//Length of rewilding project
	{
		randomEvent(protag, distance);
		std::cout << "\nYour ecosystem is  " << distance << " years old \nContinue?\n(Y/n)";
		std::cin >> input;
		if (input == "n" || input == "N") break;
	}
	return distance;
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