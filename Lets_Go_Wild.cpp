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
	/*std::cout << "Let's Go Wild is a text-based adventure game where you, the ecologist, decides how to manage an area of land! \n"
		"What is rewilding you ask? Well, currelty there is no real agreed upon definition. However, most agree that rewilding is the\n"
		"restoration of ecosystems through the introductions of keystone species. \n"
		"It's a low management conservation strategy. \n"
		"The term rewilding originated from the term 'Pleistocene Rewilding' which is similar to rewilding but introducing species that were\n"
		"present during the Pleistocene, the period of time before the last ice age.\n"
		"Britain has lost lots of its megafauna (BIG animals) since then.\n";*/
	std::cout << "You will play as manager of a 10000ha arable farmland in Southern Britain. It will be up to you to choose what species\n"
		"to reintroduce based off a list that will be printed each turn.\n"
		"10000ha is a size of land large enough to house predators such as wolves or bears! However, these should only be introduced\n"
		"when you have an established herbivore population, otherwise the predators won't survive.\n"
		"\n"
		"Aim - keep ecosystem health above 0%.\n"
		"There will be random chance events that can affect your ecosystem too such as fires or floods. These will affect ecosystem health.\n";
	
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
	int age = 5;

	Ecosystem protag = createEco();

	AnimalList();
	print();


	while (age < 60) 	//Length of rewilding project in years. Health of ecosystem in percentage
	{
		Game_Core(protag, age);

		if (age < 60)
		{
			T_2(protag, age);
			randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_3(protag, age);
			randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_4(protag, age);
			randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			/*T_5(protag, age);
			randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";

			T_6(protag, age);
			randomEvent(protag, age);
			Aging(age);
			print();

			std::cout << "\nYour ecosystem is " << age << " years old\n";*/

			/*T_7(protag, age, hp);
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
	std::cout << "\n";
	Ecosystem protag(name); 
	return protag;
}