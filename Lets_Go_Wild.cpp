// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"

#include <iostream>

int startGame();
Ecosystem createEco();

int main(int argc, char** argv)
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to Lets Go Wild!\n"; 
	std::cout << "ADD DESCRIPTION OF GAME HERE \n";
	std::cout << "ADD SIZE OF AREA - DESCRIBE WHY RELEVANT \n";
	std::cout << "Are you ready to create your own rewilding project ? \n(Y / n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int age = startGame();
		std::cout << "\nYour ecosystem is  " << age << " years old\n";

		if (age >= 60)
		{
			std::cout << "You have completed Lets Go Wild!\n";
			//if health => 70 ...
			//if health => 50 but < 70 ...
			//if health =< 49 ...
			//if health =< 20... 
		}
	}
	else return 0;
}

//Begins game.
int startGame()
{
	std::string input;
	int age = 0;
	int hp = 100;
	Ecosystem protag = createEco();

	AnimalList();
	std::cout << "This is your selection: \n";
	print_vec();

	while (age < 60 && hp > 0) 	//Length of rewilding project in years. Health of ecosystem in percentage
	{
		//randomEvent(protag, age, hp);
		Game_Core(protag, age, hp);
		
		//Adds 5 years onto age each turn.
		Aging(age);


		std::cout << "\nYour ecosystem is " << age << " years old \n";
		std::cout << "Your ecosystem is at " << hp << "% health. \n";
		if (age < 60 && hp > 0)
		{
			T_2(protag, age, hp);
			Aging(age);
			health_10(hp);
		}
		if (input == "n" || "N")
		{
			break;
		}
	}
	return age;
}

//Creates Ecosystem.
Ecosystem createEco()
{
	std::string name;
	std::cout << "\nWhat would you like to name your Ecosystem? \n";
	std::cin >> name;
	Ecosystem protag(name); 
	return protag;
}