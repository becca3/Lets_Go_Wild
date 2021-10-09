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
		int age = startGame();
		std::cout << "\nYour ecosystem is  " << age << " years old\n";
		if (age >= 60)
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
	int age = 0;
	Ecosystem protag = createEco();
	AnimalList(protag, age);

	while (age < 60)	//Length of rewilding project
	{
		randomEvent(protag, age);
		std::cout << "\n Your ecosystem is  " << age << " years old \n Continue?\n (Y/n)";
		std::cin >> input;
		if (input == "n" || input == "N") break;
	}
	return age;
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