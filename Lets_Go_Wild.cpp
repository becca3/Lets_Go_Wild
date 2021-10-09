// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"

#include <iostream>

int startGame();
Ecosystem createEco();

int main()
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to Lets Go Wild!\n Are you ready to create your own rewilding project? \n(Y/n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int distance = startGame();
		std::cout << "\nYour ecosystem is  " << distance << " years old\n";
		if (distance >= 60)
		{
			std::cout << "You have completed Lets Go Wild!\n";
		}
	}
	else return 0;
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