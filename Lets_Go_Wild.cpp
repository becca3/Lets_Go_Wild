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
	std::cout << "ADD DESCRIPTION OF GAME HERE \n";
	std::cout << "ADD SIZE OF AREA - 10000ha - DESCRIBE WHY RELEVANT \n";
	std::cout << "Are you ready to create your own rewilding project ? \n(Y / n)";
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

	Ecosystem protag = createEco();

	AnimalList();
	print();


	while (age < 60) 	//Length of rewilding project in years. Health of ecosystem in percentage
	{
		Game_Core(protag, age);

		if (age < 60)
		{
			T_2(protag, age);
			//randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_3(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_4(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			/*T_5(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_6(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_7(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_8(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_9(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_10(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_11(protag, age, hp);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_12(protag, age, hp);
			Aging(age);
			print();*/
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