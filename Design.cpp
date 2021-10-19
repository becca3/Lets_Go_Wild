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

//Vector to hold animals already in game.
std::vector<std::string> AniUsed;

//Small fire. 
void fire(Ecosystem& protag, int& age)
{
	std::cout << "There was a small fire on a portion of land.\n";
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
void fallow(Ecosystem& protag, int& hp)
{
	protag.setHealth(protag.health() + 5);
}

//Adds 10 health
void health_10(int& hp)
{
	hp += 10;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Ecosystem& protag, int& age, int hp)
{
	std::vector<std::string> events;
	events.push_back("fire");
	events.push_back("drought");
	events.push_back("flood");
	//Multiply the number of "nothing" events to reduce chances of other events occurring 
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
	std::cout << "Below is a list of animals that you could choose to reintroduce. \n";
	std::cout << "\n";

	fstream newfile;

	newfile.open("GameAnimals.txt", ios::in); //Open a file to perform read operation using file object

	if (newfile.is_open()) //Checks whether file is open
	{ 
		string tp;
		while (getline(newfile, tp)) //Read data from file object and put it into string
		{  
			cout << tp << "\n";   //Print the data of the string
			//cout << "\n";
		}
		newfile.close();   //Close the file object
	}

	std::cout << "\nSome of these species, such as the predators, can only be introduced once your herbivore population is established.";
	std::cout << "Bit about establishment \n";
	std::cout << "On this occassion, we'll give you the starting 3 species. \n";
	std::cout << "These species will be Red Deer, Tamworth Pigs, and Heck Cattle \n";

	std::cout << "Each turn, a list of animals already inhabiting the land will be printed.\n";
	std::cout << "Read the list carefully and choose a species that is not already on the list to reintroduce.\n";

	AniUsed.push_back("Red Deer");
	AniUsed.push_back("Tamworth Pigs");
	AniUsed.push_back("Heck Cattle");
}

void print() 
{
	std::cout << "These are the species on your land: \n";

	for (int i = 0; i < AniUsed.size(); i++)
		std::cout << AniUsed.at(i) << '\n';
}


void Game_Core(Ecosystem& protag, int age, int hp)
{
	std::cout << "\nThese species all have certain ecological roles: describle roles \n";
	std::cout << "These three species will determine how your ecosystem is going to look in the next 5 years \n";
	std::cout << "\n";
}

void T_2(Ecosystem& protag, int age, int hp)
{
	std::string input;
	std::string input2;

	std::cout << "5 years on, your ecosystem has thrived. Not too much, but enough to notice some changes. \n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	std::cout << "Fallow Deer \n";
	std::cout << "Red Squirrel \n";
	std::cout << "Roe Deer \n";
	std::cout << "European Bison \n";
	std::cout << "Exmoor Ponies \n";
	std::cout << "Wild Horses \n";
	std::cout << "Long Horn Cattle \n";
	std::cout << "Elk \n";
	std::cout << "Wild Boar \n";
	std::cout << "Stork \n";
	std::cout << "White-Tailed Eagles \n";
	std::cout << "Pine Marten \n";
	std::cout << "Red Squirrel \n";
	std::cout << "\n";
	std::cout << "Select 1 or 2: \n";
	std::cin >> input;

	if (input == "1")
	{
		//Aging(age);
	}
	else if (input == "2")
	{
		std::cout << "Please type the name of the species you'd like to add: \n";
		std::cin >> input2;

		if (input2 == "Fallow Deer")
		{
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description";
		}
		else if (input2 == "Red Squirrel")
		{
			std::cout << "You chose to add Red Squirrels to your ecosystem. \n";
			std::cout << "Description";
		}
		else if (input2 == "Roe Deer")
		{
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description";
		
		}
		AniUsed.push_back(input2);
	}
}

void T_3(Ecosystem& protag, int age, int hp)
{
	std::string input;
	std::string input2;

	std::cout << "5 years on, your ecosystem has thrived. Not too much but enough to notice some changes. \n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";

	std::cout << "Fallow Deer \n";
	std::cout << "Red Squirrel \n";
	std::cout << "Roe Deer \n";
	std::cout << "European Bison \n";
	std::cout << "Exmoor Ponies \n";
	std::cout << "Wild Horses \n";
	std::cout << "Long Horn Cattle \n";
	std::cout << "Elk \n";
	std::cout << "Wild Boar \n";
	std::cout << "Stork \n";
	std::cout << "White-Tailed Eagles \n";
	std::cout << "Pine Marten \n";
	std::cout << "Red Squirrel \n";
	std::cout << "\n";
	std::cout << "Select 1 or 2: \n";
	std::cin >> input;

	if (input == "1")
	{
		Aging(age);
	}
	else if (input == "2")
	{
		std::cout << "Please type the name of the species you'd like to add: \n";
		std::cin >> input2;

		if (input2 == "Wild Horses")
		{
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
		}
		else if (input2 == "European Bison")
		{
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			hp += 10;
		}
		else if (input2 == "Stork")
		{
			std::cout << "You chose to add Stork to your ecosystem. \n";
		}
		AniUsed.push_back(input2);
	}
}

void T_4(Ecosystem& protag, int age, int hp)
{
	std::string input;
	std::string input2;

	std::cout << "5 years on, your ecosystem has thrived. Not too much but enough to notice some changes. \n";
	std::cout << "You now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";

	std::cout << "Fallow Deer \n";
	std::cout << "Red Squirrel \n";
	std::cout << "Roe Deer \n";
	std::cout << "European Bison \n";
	std::cout << "Exmoor Ponies \n";
	std::cout << "Wild Horses \n";
	std::cout << "Long Horn Cattle \n";
	std::cout << "Elk \n";
	std::cout << "Wild Boar \n";
	std::cout << "Stork \n";
	std::cout << "White-Tailed Eagles \n";
	std::cout << "Pine Marten \n";
	std::cout << "Red Squirrel \n";
	std::cout << "\n";
	std::cout << "Select 1 or 2: \n";
	std::cin >> input;

	if (input == "1")
	{
		Aging(age);
	}
	else if (input == "2")
	{
		std::cout << "Please type the name of the species you'd like to add: \n";
		std::cin >> input2;

		if (input2 == "Wild Horses")
		{
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
		}
		else if (input2 == "European Bison")
		{
			std::cout << "You chose to add European Bison to your ecosystem. \n";
		}
		else if (input2 == "Stork")
		{
			std::cout << "You chose to add Stork to your ecosystem. \n";
		}
		AniUsed.push_back(input2);
	}
}

//void T_5(Ecosystem& protag, int age, int hp);
//void T_6(Ecosystem& protag, int age, int hp);
//void T_7(Ecosystem& protag, int age, int hp);
//void T_8(Ecosystem& protag, int age, int hp);
//void T_9(Ecosystem& protag, int age, int hp);
//void T_11(Ecosystem& protag, int age, int hp);
//void T_12(Ecosystem& protag, int age, int hp);