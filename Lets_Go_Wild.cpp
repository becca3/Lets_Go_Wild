// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"

#include <iostream>

int startGame();
Ecosystem createEco();

int main(int argc, char** argv)
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to Lets Go Wild!\nAre you ready to create your own rewilding project? \n(Y/n)";
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

	while (age < 60 && hp > 0) 	//Length of rewilding project in years. 
	{
		//randomEvent(protag, age, hp);
		Game_Core(protag, age, hp);
		age = +5;
		std::cout << "\nYour ecosystem is  " << age << " years old \n";
		std::cout << "Your ecosystem is " << hp << "% healthy. \n";
		std::cout << "Continue? Y/N \n";
		if (input == "n" || "N")
		{
			break;
		}
		else if (input == "Y" || "y")
		{
			T_2(protag, hp);
		}
	}
	return age;
	return hp;
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