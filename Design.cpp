#include "Design.h"
//#include "Images.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

using Random = effolkronium::random_static;

//Small fire. 
void fire(Ecosystem& protag, int& age)
{
	system("CLS");
	std::cout << "Unfortunately, there was a small fire on a portion of land.\t";
	std::cout << "It's destroyed some vegetation.";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

//Drought.
void drought(Ecosystem& protag, int& age)
{
	system("CLS");
	std::cout << "Due to climate change, your land suffered a drought";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

//Flood. 
void flood(Ecosystem& protag, int& age)
{
	system("CLS");
	std::cout << "Due to climate change, your land suffered a flood.";
	protag.setHealth(protag.health() - 10);
	age += 5;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Ecosystem& protag, int& age)
{
	std::vector<std::string> events;
	events.push_back("fire");
	events.push_back("drought");
	events.push_back("flood");

	////Shuffles events and chooses one at random.
	//Random::shuffle(events);
	//if (events[0] == "fire")
	//{
	//	FireImg();
	//	fire(protag, age);
	//}
	//else if (events[0] == "drought")
	//{
	//	DroughtImg();
	//	drought(protag, age);
	//}
	//else if (events[0] == "flood")
	//{
	//	FloodImg();
	//	flood(protag, age);
	//}
}


template <typename T>
void print_vector(const std::vector<T>& vec, std::string sep = " ")
{
	for (auto elem : vec)
	{
		std::cout << elem << sep;
	}
	std::cout << std::endl;
}

//Function to read in file from folder and print list of available animals to display to user. 
void AnimalList(Ecosystem& protag, int& age)
{
	std::string input;
	std::vector<std::string> AniList;

	/*User needs to be precise in this section
	can modify once we have a base game to make it easier for user */
	/* Also need to create a stop after 3 inputs have been taken */

	std::cout << "Below is a list of animals that you can choose to reintroduce. \n";
	std::cout << "Please select 3 to begin with and type names exactly as they are shown on screen: \n";
	std::cout << "Once you have made you choice of 3, please type 'done' and the game will continue. \n";
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
	while ((cin >> input) && input != "done");
	AniList.push_back(input);
	
	print_vector(AniList);
}
