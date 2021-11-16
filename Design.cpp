//Code created by Rebecca Morgan for the Rewilding and rewilding project services class at Sussex University

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
	life -= 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW FIRE AFFECTS LAND.\n";
		exit(0);
	}
}

//Drought.
void drought(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a drought. \n";
	std::cout << "\n";
	life -= 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW DROUGHT AFFECTS LAND.\n";
		exit(0);
	}
}

//Flood. 
void flood(Ecosystem& protag, int& age)
{
	std::cout << "Due to climate change, your land suffered a flood. \n";
	std::cout << "\n";
	std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.\n";
	life -= 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW FLOODS AFFECT LAND.\n";
		exit(0);
	}
}
 
//Invasive species.
void Invasive(Ecosystem& protag, int& age)
{
	std::cout << "An invasive species has appeared on your land!\n";
	std::cout << "\n";
	life -= 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW INVASIVE SPP AFFECT LAND.\n";
		exit(0);
	}
}

void disease(Ecosystem& protag, int& age)
{

}

void shooting(Ecosystem& protag, int& age)
{

}

void protest(Ecosystem& protag, int& age)
{

}

void nothing(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing2(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing3(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing4(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
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
	std::vector<std::string> EventsOccurred;

	std::string input1;

	events.push_back("fire");
	events.push_back("drought");
	events.push_back("flood");
	events.push_back("Invasive");

	//Multiply the number of "nothing" events to reduce chances of other events occurring 
	events.push_back("nothing");
	events.push_back("nothing2");
	events.push_back("nothing3");
	events.push_back("nothing4");

	//vectorise the events to follow which have occurred then give player choice to add supp. feeding 
	//Refer to todays lecture 16/11/21 for other metrics 	

	//Shuffles events and chooses one at random.
	Random::shuffle(events);
	if (events[0] == "fire")
	{
		//FireImg();
		fire(protag, age);
		EventsOccurred.push_back("fire");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "fire") != EventsOccurred.end())
		{
			std::cout << "There was a fire on the land, do you want to do something? \n";
			std::cin >> input1;
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "drought")
	{
		//DroughtImg();
		drought(protag, age);
		EventsOccurred.push_back("drought");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "drought") != EventsOccurred.end())
		{
			std::cout << "There was a drought on the land, do you want to do something? \n";
			std::cin >> input1;
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "flood")
	{
		//FloodImg();
		flood(protag, age);
		EventsOccurred.push_back("flood");
	}
	else if (events[0] == "Invasive")
	{
		//InvasiveImg();
		Invasive(protag, age);
		EventsOccurred.push_back("invasive");
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
	else if (events[0] == "nothing3")
	{
		nothing3(protag, age);
	}
	else if (events[0] == "nothing4")
	{
		nothing4(protag, age);
	}
	//Add more nothings to reduce probability of bad things happening 
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
	std::cout << "\nOn this occasion, we'll give you the starting 3 species. \n";
	std::cout << "\n";
	std::cout << "These species will be Red Deer, Tamworth Pigs, and Heck Cattle. \n";
	RedDeerImg();
	TamPigImg();
	HeckImg();

	std::cout << "Each turn, a list of animals already inhabiting the land will be printed.\n";
	std::cout << "Read the list carefully and choose a species that is not already on the list to reintroduce.\n";

	AniUsed.push_back("REDDEER");
	AniUsed.push_back("TAMWORTHPIGS");
	AniUsed.push_back("HECKCATTLE");
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

void AnimalListPred()
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
}

//Prints species already on land.
void print() 
{
	std::cout << "These are the species currently on your land: \n";

	for (int i = 0; i < AniUsed.size(); i++)
		std::cout << AniUsed.at(i) << '\n';
}

//Turn into image?
void Game_Core(Ecosystem& protag, int age)
{
	std::cout << "These three species will determine how your rewilding project is going to look in the next 5 years \n";
	std::cout << "\n";
}

//Turn 2 - first user input
void T_2(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed. \n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_3(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed. \n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_4(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_5(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed. \n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_6(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health. \n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed. \n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_7(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_8(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}			
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

//Add images and functions for predators here!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void T_9(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
	std::cout << "You can now introduce predators!! Your herbivores have established and your rewilding project can now support predators.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListPred();
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WOLF")
			{
			WolfImg();
			std::cout << "You chose to add Wolf to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
			}
		else if (input2 == "EURASIANLYNX")
			{
			EULyImg();
			std::cout << "You chose to add Eurasian Lynx to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
			}
		else if (input2 == "WILDCAT")
			{
			WildcatImg();
			std::cout << "You chose to add Wild Cat to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
			}
		else if (input2 == "BEARS")
			{
			BearImg();
			std::cout << "You chose to add Bears to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
			}

		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_10(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListPred();
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			std::cout << "You chose to add Wolf to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			std::cout << "You chose to add Eurasian Lynx to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			std::cout << "You chose to add Wild Cat to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			std::cout << "You chose to add Bears to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}

		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_11(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListPred();
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
		}

		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			std::cout << "You chose to add Roe Deer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			std::cout << "You chose to add European Bison to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			std::cout << "You chose to add Wild Horses to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			std::cout << "You chose to add Wild Boar to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			std::cout << "You chose to add Stork to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			std::cout << "You chose to add Pine Marten to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			std::cout << "You chose to add Wolf to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			std::cout << "You chose to add Eurasian Lynx to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			std::cout << "You chose to add Wild Cat to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			std::cout << "You chose to add Bears to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}

		AniUsed.push_back(input2);
	}

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void T_12(Ecosystem& protag, int age)
{
	std::string input;
	std::string input2;

	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW TO DO BETTER ETC.";
		exit(0);
	}

	std::cout << "\n5 years on, your rewilding project has changed.\n";
	std::cout << "\nYou now have 2 choices: \n";
	std::cout << "1 - Leave everything as it is and see what happens over the next 5 years? \n";
	std::cout << "2 - Choose to add another speices from the following list: \n";
	std::cout << "\n";
	AnimalListPred();
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

		while (std::count(AniUsed.begin(), AniUsed.end(), input2))
		{
			std::cout << "Animal already in rewilding project\n";
			std::cout << "Please type the name of the species you'd like to add: \n";
			std::cin >> input2;
		}

		if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") != AniUsed.end())
		{
			ElkImg();
			std::cout << "You chose to add Elk to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				std::cout << "You chose to add Fallow Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				std::cout << "You chose to add Red Squirrel to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;

			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				std::cout << "You chose to add Roe Deer to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				std::cout << "You chose to add European Bison to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				std::cout << "You chose to add Wild Horses to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				std::cout << "You chose to add Long Horn Cattle to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				std::cout << "You chose to add Eurasian Beavers to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				std::cout << "You chose to add Wild Boar to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				std::cout << "You chose to add Stork to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				std::cout << "You chose to add White-tailed Eagles to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				std::cout << "You chose to add Pine Marten to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				std::cout << "You chose to add Wolf to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				std::cout << "You chose to add Eurasian Lynx to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				std::cout << "You chose to add Wild Cat to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				std::cout << "You chose to add Bears to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			AniUsed.push_back(input2);
		}
	}
	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

//To be edited
void EndGame()
{
	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life == 10)
	{
		std::cout << "You didn't change anything\n";
	}
	else if (life >= 10 && life <= 25)
	{
		std::cout << "You made some change - good\n";
	}
	else if (life >= 26 && life <= 50)
	{
		std::cout << "You made big change - great\n";
	}
	else if (life >= 51)
	{
		std::cout << "You made huge change - amazing\n";
	}
}