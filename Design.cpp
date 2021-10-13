#include "Design.h"
//#include "Images.h"

#include <vector>
#include <iostream>
#include <ctime>
#include <iostream>
#include <fstream>
#include <algorithm>

//Not best practice.
using namespace std;

using Random = effolkronium::random_static;

//Vector to hold list of playable animals.
std::vector<std::string> AniList;

//Small fire. 
void fire(Ecosystem& protag, int& age)
{
	std::cout << "Unfortunately, there was a small fire on a portion of land.\n";
	std::cout << "It's destroyed some vegetation. \n";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

//Drought.
void drought(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a drought. \n";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

//Flood. 
void flood(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a flood. \n";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

void nothing(Ecosystem& protag, int& age)
{
	std::cout << "Nothing major happened \n";
	protag.setHealth(protag.health() - 0);
	age += 0;
}

void nothing2(Ecosystem& protag, int& age)
{
	std::cout << "Nothing major happened \n";
	protag.setHealth(protag.health() - 0);
	age += 0;
}

//Adds 5 years
void Aging(int& age)
{
	age += 5;
}

//Add 5 health
void health_5(int& hp)
{
	hp += 5;
}

//Adds 10 health
void health_10(int& hp)
{
	hp += 10;
}

//Removes 5 health
void health_n5(int& hp)
{
	hp -= 5;
}

//Removes 10 health
void health_n10(int& hp)
{
	hp -= 10;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Ecosystem& protag, int& age, int hp)
{
	std::vector<std::string> events;
	events.push_back("fire");
	events.push_back("drought");
	events.push_back("flood");
	//multiply the number of "nothing" events to reduce chances of other events occurring 
	events.push_back("nothing");
	events.push_back("nothing2");

	//Shuffles events and chooses one at random.
	Random::shuffle(events);
	if (events[0] == "fire")
	{
		//FireImg();
		fire(protag, age);
	}
	else if (events[0] == "drought")
	{
		//DroughtImg();
		drought(protag, age);
	}
	else if (events[0] == "flood")
	{
		//FloodImg();
		flood(protag, age);
	}

	//These are to reduce probability of an actual event.
	else if (events[0] == "nothing")
	{
		nothing(protag, age);
	}
	else if (events[0] == "nothing2")
	{
		nothing2(protag, age);
	}
}


//Function to read in file from folder and print list of available animals to display to user. 
void AnimalList()
{
	std::string input;

	/*User needs to be precise in this section
	can modify once we have a base game to make it easier for user */
	/* Also need to create a stop after 3 inputs have been taken */

	std::cout << "Below is a list of animals that you can choose to reintroduce. \n";
	std::cout << "Please select 3 to begin with and type names e.g., 'Long Horn Cattle' as 'LongHornCattle' followed by a comma. \n";
	std::cout << "Once you have made you choice of 3, please type 'x and the game will continue. \n";
	std::cout << "Type 'Y' then make your selection.";
	std::cout << "\n";

	fstream newfile;

	newfile.open("GameAnimals.txt", ios::in); //Open a file to perform read operation using file object

	if (newfile.is_open()) //Checks whether file is open
	{ 
		string tp;
		while (getline(newfile, tp)) //Read data from file object and put it into string
		{  
			cout << tp << "\n";   //Print the data of the string
			cout << "\n";
		}
		newfile.close();   //Close the file object
	}

	std::cin >> input;
	while ((cin >> input) && input != "x")
	{
		AniList.push_back(input);
	}
}

void print_vec()
{
	for (int i = 0; i < AniList.size(); i++)
	{
		std::cout << AniList[i] << std::endl;
	}
}

void Game_Core(Ecosystem& protag, int age, int hp)
{
	std::cout << "You have chosen Red Deer, Beaver, and Heck Cattle as your starter species for your ecosystem. \n";
	std::cout << "These spp all have certain ecological roles: describle roles \n";
	std::cout << "These three species will determine how your ecosystem is going to look in the next 5 years \n";
	std::cout << "\n";
}

void T_2(Ecosystem& protag, int age, int hp)
{
	std::string input;

	std::cout << "5 years on, your ecosystem has thrived. not too much but enough to notice some changes. \n";
	std::cout << "You now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	std::cout << "Fallow Deer \n";
	std::cout << "Tamworth Pigs \n";
	std::cout << "Roe Deer \n";
	std::cout << "\n";
	std::cout << "Select 1 or 2: \n";
	std::cin >> input;

	if (input == "1")
	{
		protag.setHealth(protag.health() + 5);
		age += 5;
	}
	else if (input == "2")
	{
		std::string input2;

		std::cout << "Please type the name of the species you'd like to add: \n";
		std::cin >> input2;

		if (input2 == "Fallow Deer")
		{
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
		}
		else if (input2 == "Tamworth Pigs")
		{
			std::cout << "You chose to add Tamworth Pigs to your ecosystem. \n";
		}
		else if (input2 == "Roe Deer")
		{
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
		}
	}

}