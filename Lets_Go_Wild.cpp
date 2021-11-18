//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University
// Lets_Go_Wild.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Design.h"
#include "Images.h"

#include <iostream>

int startGame();
Ecosystem createEco();


int main(int argc, char** argv)
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to Lets Go Wild!\n";
	//Displays logo.
	LogoImg();
	PeopleImg();
	EcoWomanImg();
	EcomanImg();
	std::cout << "So, are you ready to create your own rewilding project ? \n(Y / n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int age = startGame();

		if (age >= 60) //Need to add health to this.
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
	std::string input1;

	Ecosystem protag = createEco();

	std::cout << "Would you like to do Trophic (1) or Pleistocene (2) rewilding? \n";
	std::cin >> input1;

	if (input1 == "1")
	{

		AnimalList();
		print();

		while (age < 60) 	//Length of rewilding project in years. Health of rewilding project in percentage
		{
			Game_Core(protag, age);
			std::string input3;

			if (age < 60)
			{
				T_2(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_3(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_4(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_5(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_6(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_7(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_8(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				//Introduce predators here.
				T_9(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_10(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_11(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				T_12(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";
				EndGame();
			}
			if (input == "n" || "N")
			{
				break;
			}
		}
		return 0;
	}

	else if (input1 == "2")
	{
		AnimalListPleio();
		print();

		while (age < 60) 	//Length of rewilding project in years. Health of rewilding project in percentage
		{
			Game_Core(protag, age);
			std::string input3;

			if (age < 60)
			{
				PT_2(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				PT_3(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

				PT_4(protag, age);
				Aging(age);
				randomEvent(protag, age);
				print();

				std::cout << "\nYour rewilding project is " << age << " years old\n";

			}
			if (input == "n" || "N")
			{
				break;
			}
		}
		return 0;
	}
}

//Creates rewilding project.
Ecosystem createEco()
{
	std::string name;
	std::cout << "\nWhat would you like to name your rewilding project? \n";
	std::cin >> name;
	std::cout << "\n";
	Ecosystem protag(name); 
	return protag;
}