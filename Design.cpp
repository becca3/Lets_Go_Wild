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
void invasive(Ecosystem& protag, int& age)
{
	std::cout << "A non-native invasive species has appeared on your land!\n";
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
	std::cout << "Bovine TB has broken out in your herd of cattle.This is a very serious disease with strict restrictions \
				  surrounding it.Unfortunately, this means your cattle have had to be removed.You can reintroduce them in \
		          the next round but not straight away, to reduce the risk of Bovine TB coming back. \n";

}

void shooting(Ecosystem& protag, int& age)
{

}

void protest(Ecosystem& protag, int& age)
{
	life -= 5;

	if (life <= 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		std::cout << "DESCRIPTION ABOUT HOW INVASIVE SPP AFFECT LAND.\n";
		exit(0);
	}
}

void extinction(Ecosystem& protag, int& age)
{

}

void winter(Ecosystem& protag, int& age)
{

}

void carcasses(Ecosystem& protag, int& age)
{

}

void poachers(Ecosystem& protag, int& age)
{

}

void vistors(Ecosystem& protag, int& age)
{

}

void dogwalk(Ecosystem& protag, int& age)
{

}

void govfund(Ecosystem& protag, int& age)
{

}

void partnership(Ecosystem& protag, int& age)
{

}

void shoutout(Ecosystem& protag, int& age)
{

}

void BBC(Ecosystem& protag, int& age)
{

}

void RhinoPolicy(Ecosystem& protag, int& age)
{

}

void CattlePolicy(Ecosystem& protag, int& age)
{

}

void ElkPolicy(Ecosystem& protag, int& age)
{

}

void ElephantPolicy(Ecosystem& protag, int& age)
{

}

void LionPolicy(Ecosystem& protag, int& age)
{

}

void HyenaPolicy(Ecosystem& protag, int& age)
{

}

void BisonPolicy(Ecosystem& protag, int& age)
{

}

void BearsPolicy(Ecosystem& protag, int& age)
{

}

void MammothPolicy(Ecosystem& protag, int& age)
{

}

void WolfPolicy(Ecosystem& protag, int& age)
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

void nothing5(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing6(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing7(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing8(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing9(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing10(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing11(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing12(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing13(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing14(Ecosystem& protag, int& age)
{
	//std::cout << "Nothing devastating happened \n";
	std::cout << "\n";
	age += 0;
}

void nothing15(Ecosystem& protag, int& age)
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

	events.push_back("shooting");
	events.push_back("disease");
	events.push_back("protest");
	events.push_back("invasive");
	events.push_back("winter");
	events.push_back("extinction");
	events.push_back("carcasses");
	events.push_back("poachers");
	events.push_back("dogwalk");
	events.push_back("visitors");
	events.push_back("partnership");
	events.push_back("shoutout");
	events.push_back("BBC");

	events.push_back("RhinoPolicy");
	events.push_back("CattlePolicy");
	events.push_back("ElkPolicy");
	events.push_back("ElephantPolicy");
	events.push_back("LionPolicy");
	events.push_back("HyenaPolicy");
	events.push_back("BisonPolicy");
	events.push_back("MammothPolicy");
	events.push_back("WolfPolicy");
	events.push_back("BearsPolicy");


	//Multiply the number of "nothing" events to reduce chances of other events occurring 
	events.push_back("nothing");
	events.push_back("nothing2");
	events.push_back("nothing3");
	events.push_back("nothing4");
	events.push_back("nothing5");
	events.push_back("nothing6");
	events.push_back("nothing7");
	events.push_back("nothing8");
	events.push_back("nothing9");
	events.push_back("nothing10");
	events.push_back("nothing11");
	events.push_back("nothing12");
	events.push_back("nothing13");
	events.push_back("nothing14");
	events.push_back("nothing15");

	//vectorise the events to follow which have occurred then give player choice to add supp. feeding 
	//Refer to todays lecture 16/11/21 for other metrics 	

	//Shuffles events and chooses one at random.
	Random::shuffle(events);

	if (events[0] == "shooting")
	{
		//ShootingImg();
		shooting(protag, age);
		EventsOccurred.push_back("shooting");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "shooting") != EventsOccurred.end())
		{
			std::cout << "There was a shooting on the land, do you want to publicise it? \n";
			std::cin >> input1;

			if (input1 == "Y")
			{
				life += 5;
			}
			else
			{
				life -= 5;
			}
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "disease")
	{
		//DiseaseImg();
		disease(protag, age);
		EventsOccurred.push_back("disease");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "disease") != EventsOccurred.end())
		{
			std::cout << "Bovine TB has broken out. Cattle have been removed. Type 'Y' \n";
			std::cin >> input1;

			if (input1 == "Y")
			{
				AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "HECKCATTLE"));
			}
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "protest")
	{
		//ProtestImg();
		protest(protag, age);
		EventsOccurred.push_back("protest");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "protest") != EventsOccurred.end())
		{
			std::cout << "protest \n";
			
			life -= 5;

			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "extinction")
	{
		//ExtinctionImg();
		extinction(protag, age);
		EventsOccurred.push_back("extinction");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "extinction") != EventsOccurred.end())
		{
			std::cout << "There was a shooting on the land, do you want to publicise it? \n";
			std::cin >> input1;
			life += 5;
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "winter")
	{
		//WinterImg();
		winter(protag, age);
		EventsOccurred.push_back("winter");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "winter") != EventsOccurred.end())
		{
			std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
			std::cin >> input1;

			if (input1 == "Y")
			{
				life -= 5;
			}
			else if (input1 == "N")
			{
				life -= 10;
			}
			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "carcasses")
	{
		//CarcassesImg();
		carcasses(protag, age);
		EventsOccurred.push_back("carcasses");
		if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "carcasses") != EventsOccurred.end())
		{
			std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
			std::cin >> input1;

			life += 5;

			EventsOccurred.erase(EventsOccurred.begin());
		}
	}
	else if (events[0] == "poachers")
	{
	//PoachersImg();
	poachers(protag, age);
	EventsOccurred.push_back("poachers");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "poachers") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "invasive")
	{
	//InvasiveImg();
	invasive(protag, age);
	EventsOccurred.push_back("invasive");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "invasive") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "dogwalk")
	{
	//DogwalkImg();
	dogwalk(protag, age);
	EventsOccurred.push_back("dogwalk");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "dogwalk") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "partnership")
	{
	//PartnershipImg();
	partnership(protag, age);
	EventsOccurred.push_back("partnership");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "partnership") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "BBC")
	{
	//BBCImg();
	BBC(protag, age);
	EventsOccurred.push_back("BBC");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "BBC") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "visitors")
	{
	//VisotorsImg();
	vistors(protag, age);
	EventsOccurred.push_back("visitors");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "visitors") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
	}
	else if (events[0] == "shoutout")
	{
	//ShoutoutImg();
	shoutout(protag, age);
	EventsOccurred.push_back("shoutout");
	if (std::find(EventsOccurred.begin(), EventsOccurred.end(), "shoutout") != EventsOccurred.end())
	{
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? \n";
		std::cin >> input1;

		life += 5;

		EventsOccurred.erase(EventsOccurred.begin());
	}
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

	RedDeerImg();
	TamPigImg();
	HeckImg();

	AniUsed.push_back("REDDEER");
	AniUsed.push_back("TAMWORTHPIGS");
	AniUsed.push_back("HECKCATTLE");
}

//This function lists animals available for reintroduction with the exclusion of predators. TROPHIC RW
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

//This function lists animals available for reintroduction with the exclusion of predators. Pleistocene RW
void AnimalListPleio()
{
	std::cout << "Below is a list of animals that you could choose to reintroduce. \n";
	std::cout << "\n";

	fstream newfile;

	newfile.open("PleistoceneAnimals.txt", ios::in); //Open a file to perform read operation using file object

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

	RedDeerImg();
	TamPigImg();
	HeckImg();


	AniUsed.push_back("REDDEER");
	AniUsed.push_back("TAMWORTHPIGS");
	AniUsed.push_back("HECKCATTLE");
}

//Prints animal list for Pleistocene - excluding predators.
void AnimalListPleioInit()
{
	std::cout << "Below is a list of animals that you could choose to reintroduce. \n";
	std::cout << "\n";

	fstream newfile;

	newfile.open("PleioInit.txt", ios::in); //Open a file to perform read operation using file object

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

//Prints trophic animal list and predators.
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

//Prints Pleistocene animals and predators.
void AnimalListPredPleio()
{
	std::cout << "Below is a list of animals that you could choose to reintroduce. \n";
	std::cout << "\n";

	fstream newfile;

	newfile.open("PleistoceneAnimals.txt", ios::in); //Open a file to perform read operation using file object

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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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

	//add 20 year map

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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
	std::cout << "2 - Choose to add another species from the following list: \n";
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
//To be edited
void EndGame()
{
	std::cout << "Your rewilding project is at " << life << "% health.\n";

	if (life == 10)
	{
		std::cout << "You didn't change anything\n";
		EndImg();
	}
	else if (life >= 10 && life <= 25)
	{
		std::cout << "You made some change - good\n";
		EndImg();
	}
	else if (life >= 26 && life <= 50)
	{
		std::cout << "You made big change - great\n";
		EndImg();
	}
	else if (life >= 51)
	{
		std::cout << "You made huge change - amazing\n";
		EndImg();
	}
}

//Pleistocene rewilding 

//Turn into image?
void Game_CorePleio(Ecosystem& protag, int age)
{
	std::cout << "These three species will determine how your rewilding project is going to look in the next 5 years \n";
	std::cout << "\n";
}

//Turn 2 - first user input
void PT_2(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_3(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_4(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_5(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_6(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_7(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

void PT_8(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";

	AnimalListPleioInit();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
	}
	AniUsed.push_back(input2);

	if (life == 0)
	{
		std::cout << "Game Over!! Your rewilding project was destroyed :( \n";
		std::cout << "Health has hit 0% \n";
		exit(0);
	}
}

//Intro of predators
void PT_9(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";
	AnimalListPredPleio();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
				else if (input2 == "LION")
			{
				LionImg();
				std::cout << "You chose to add Lion to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
				else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
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
		else if (input2 == "RHINOCEROS")
			{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
			}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
		MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "LION")
		{
			LionImg();
			std::cout << "You chose to add Lion to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
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

void PT_10(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";
	AnimalListPredPleio();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
			else if (input2 == "LION")
			{
				LionImg();
				std::cout << "You chose to add Lion to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "LION")
		{
			LionImg();
			std::cout << "You chose to add Lion to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
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

void PT_11(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";
	AnimalListPredPleio();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
			else if (input2 == "LION")
			{
				LionImg();
				std::cout << "You chose to add Lion to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "LION")
		{
			LionImg();
			std::cout << "You chose to add Lion to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
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

void PT_12(Ecosystem& protag, int age)
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
	std::cout << "2 - Choose to add another species from the following list: \n";
	std::cout << "\n";
	AnimalListPredPleio();
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
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
				life += 10;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				std::cout << "You chose to add Elephant to your rewilding project. \n";
				std::cout << "Description\n";
				life += 0;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
				std::cout << "Description\n";
				life += 5;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
			else if (input2 == "LION")
			{
				LionImg();
				std::cout << "You chose to add Lion to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
				std::cout << "Description\n";
				life += 10;
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
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			std::cout << "You chose to add Rhinoceros to your rewilding project. \n";
			life += 10;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			std::cout << "You chose to add Elephant to your rewilding project. \n";
			std::cout << "Description\n";
			life += 0;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			std::cout << "You chose to add Wooly Mammoth to your rewilding project. \n";
			std::cout << "Description\n";
			life += 5;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			std::cout << "You chose to add Reindeer to your rewilding project. \n";
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
		else if (input2 == "LION")
		{
			LionImg();
			std::cout << "You chose to add Lion to your rewilding project. \n";
			std::cout << "Description\n";
			life += 10;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			std::cout << "You chose to add Spotted Hyena to your rewilding project. \n";
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