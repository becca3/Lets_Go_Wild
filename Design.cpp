//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University

//Include files
#include "Design.h"
#include "Images.h"

//Include libraries
#include <vector>
#include <iostream>	
#include <ctime>
#include <iostream>
#include <fstream>
#include <algorithm>

//Not best practice.
using namespace std;

//Geenrate randomness
using Random = effolkronium::random_static;

//Start of life bar
int life = 10;

//Vector to hold list of playable animals.
std::vector<std::string> AniList;

//Vector to hold animals already in game.
std::vector<std::string> AniUsed;

//Small fire. 
void fire(Ecosystem& protag, int& age) //remove protag and age - test if works - should do 
{
	std::cout << "There was a small fire on a portion of land.\n";
	std::cout << "It's destroyed some vegetation. \n";
	std::cout << "\n";
	life -= 10;
	age += 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}
}

//Drought.
void drought(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a drought. \n";
	std::cout << "\n";
	life -= 10;
	age += 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}
}

//Flood. 
void flood(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a flood. \n";
	std::cout << "\n";
	std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
	life -= 10;
	age += 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}
}
 
//Invasive species.
void Invasive(Ecosystem& protag, int& age)
{
	std::cout << "An invasive species has appeared on your land!\n";
	std::cout << "\n";
	life -= 20;
	age += 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}
}

void nothing(Ecosystem& protag, int& age)
{
	std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing2(Ecosystem& protag, int& age)
{
	std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

//Adds 5 years
void Aging(int& age)
{
	age += 5;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Ecosystem& protag, int& age)
{
	std::vector<std::string> events;
	events.push_back("fire");
	events.push_back("drought");
	events.push_back("flood");
	events.push_back("Invasive");
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
	std::cout << "\nBit about establishment \n";
	std::cout << "On this occassion, we'll give you the starting 3 species. \n";
	std::cout << "\n";
	std::cout << "These species will be Red Deer, Tamworth Pigs, and Heck Cattle. \n";

	std::cout << "Each turn, a list of animals already inhabiting the land will be printed.\n";
	std::cout << "Read the list carefully and choose a species that is not already on the list to reintroduce.\n";

	AniUsed.push_back("Red Deer");
	AniUsed.push_back("Tamworth Pigs");
	AniUsed.push_back("Heck Cattle");
}

//This function lists animals available for reintroduction with the exclusion of predators.
void AnimalListInit()
{
	std::cout << "Below is a list of animals that you could choose to reintroduce. \n";
	std::cout << "\n";

	fstream newfile;

	newfile.open("Initial_Animals.txt", ios::in); //Open a file to perform read operation using file object

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
}

void print() 
{
	std::cout << "These are the species currently on your land: \n";

	for (int i = 0; i < AniUsed.size(); i++)
		std::cout << AniUsed.at(i) << '\n';
}

void Game_Core(Ecosystem& protag, int age)
{
	std::cout << "\nThese species all have certain ecological roles: describle roles \n";
	std::cout << "These three species will determine how your ecosystem is going to look in the next 5 years \n";
	std::cout << "\n";
	//Aging(age);
}

void T_2(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed. \n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_3(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed. \n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_4(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_5(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed. \n";
	//Insert map?
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_6(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed. \n";
	//Insert map?
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_7(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_8(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_9(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_11(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_12(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your ecosystem is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your ecosystem has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListInit();
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

		if (input2 == "FallowDeer")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "RedSquirrel")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;

		}
		else if (input2 == "RoeDeer")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EuropeanBison")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "ExmoorPonies")
		{
			ExPonImg();
			std::cout << "You chose to add Exmoor Ponies to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WildHorses")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LongHornCattle")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Elk")
		{
			ElkImg();
			std::cout << "You chose to add Elk to your ecosystem. \n";
			life += 10;
		}
		else if (input2 == "WildBoar")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your ecosystem. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "Stork")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WhiteTailedEagles")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your ecosystem. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PineMarten")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your ecosystem. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your ecosystem was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}