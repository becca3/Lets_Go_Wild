//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University
// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"

#include <iostream>

int startGame();
Ecosystem createEco();
int age = 0;
int hp = 10;


int main(int argc, char** argv)
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to Lets Go Wild!\n"; 
	std::cout << "ADD DESCRIPTION OF GAME HERE \n";
	std::cout << "ADD SIZE OF AREA - 10000ha - DESCRIBE WHY RELEVANT \n";
	std::cout << "Are you ready to create your own rewilding project ? \n(Y / n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int age = startGame();

		if (age >= 60 && hp > 50)
		{
			std::cout << "You have completed Lets Go Wild!\n";
			std::cout << "Most rewilding projects are happy with 50% + health";
		}
	}
	else return 0;
}

//Begins game.
int startGame()
{
	std::string input;
	int age = 0;
	int hp = 10;
	Ecosystem protag = createEco();

	AnimalList();
	print();


	while (age < 60 && hp > 0) 	//Length of rewilding project in years. Health of ecosystem in percentage
	{
		//randomEvent(protag, age, hp);
		Game_Core(protag, age, hp);
		
		//Adds 5 years onto age each turn.
		//Aging(age);

		if (age < 60 && hp > 0)
		{
			T_2(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\n";
			std::cout << "\nYour ecosystem is " << age << " years old \n";
			std::cout << "Your ecosystem is at " << hp << "% health. \n";
			std::cout << "\n"; 

			T_3(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old \n";
			std::cout << "Your ecosystem is at " << hp << "% health. \n";

			T_4(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old \n";
			std::cout << "Your ecosystem is at " << hp << "% health. \n";
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