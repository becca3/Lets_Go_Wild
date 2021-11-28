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
int life = 20;

//Vector to hold list of playable animals.
std::vector<std::string> AniList;

//Vector to hold animals already in game.
std::vector<std::string> AniUsed;
 
void fire(Ecosystem& protag, int& age) //remove protag and age - test if works - should do 
{
	
}
void drought(Ecosystem& protag, int& age)
{

} 
void flood(Ecosystem& protag, int& age)
{
	
}
void invasive(Ecosystem& protag, int& age)
{
	
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
void HeckPolicy(Ecosystem& protag, int& age)
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

//void nothing(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing2(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing3(Ecosystem& protag, int& age)
//{
//
//}
//void nothing4(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing5(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing6(Ecosystem& protag, int& age)
//{
//
//}
//void nothing7(Ecosystem& protag, int& age)
//{
//
//}
//void nothing8(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing9(Ecosystem& protag, int& age)
//{
//	
//}
//void nothing10(Ecosystem& protag, int& age)
//{
//
//}

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
	events.push_back("flood");
	events.push_back("drought");
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
	events.push_back("HeckPolicy");
	events.push_back("ElkPolicy");
	events.push_back("ElephantPolicy");
	events.push_back("LionPolicy");
	events.push_back("HyenaPolicy");
	events.push_back("BisonPolicy");
	events.push_back("MammothPolicy");
	events.push_back("WolfPolicy");
	events.push_back("BearsPolicy");


	//Multiply the number of "nothing" events to reduce chances of other events occurring 
	//events.push_back("nothing");
	//events.push_back("nothing2");
	//events.push_back("nothing3");
	//events.push_back("nothing4");
	//events.push_back("nothing5");
	//events.push_back("nothing6");
	//events.push_back("nothing7");
	//events.push_back("nothing8");
	//events.push_back("nothing9");
	//events.push_back("nothing10");

	//vectorise the events to follow which have occurred then give player choice to add supp. feeding  	

	//Shuffles events and chooses one at random.
	Random::shuffle(events);

	if (events[0] == "shooting")
	{
		ShootingImg();
		std::string input1;
		std::cout << "There was a shooting on the land, do you want to publicise it? Y/N \n";
		std::cin >> input1;

		if (input1 == "Y")
		{
			life += 5;
		}
		else
		{
			life -= 5;
		}
	}
	else if (events[0] == "fire")
	{
		fireImg();
		life -= 5;
	}
	else if (events[0] == "flood")
	{
		floodImg();
		life -= 5;
	}
	else if (events[0] == "drought")
	{
		droughtImg();
		life -= 5;
	}
	else if (events[0] == "disease")
	{
		DiseaseImg();
		std::string input1;
		std::cout << "Bovine TB has broken out. Cattle have been removed. Type 'Y' \n";
		std::cin >> input1;

		if (std::find(AniUsed.begin(), AniUsed.end(), "HECKCATTLE") != AniUsed.end())
		{
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "HECKCATTLE"));
			life -= 10;
		}
		if (std::find(AniUsed.begin(), AniUsed.end(), "LONGHORNCATTLE") != AniUsed.end())
		{
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "LONGHORNCATTLE"));
			life -= 12;
		}
	}
	else if (events[0] == "protest")
	{
		ProtestImg();
		life -= 5;
	}
	else if (events[0] == "extinction")
	{
		ExtinctionImg();
		life -= 10;
	}
	else if (events[0] == "winter")
	{
		WinterImg();
		std::string input1;
		std::cout << "It's been a harsh winter. Do you want to add supplementary feed to your animals? Y/N \n";
		std::cin >> input1;

		if (input1 == "Y")
		{
			life -= 5;
		}
		else
		{
			life -= 10;
		}
	}
	else if (events[0] == "carcasses")
	{
		//CarcassesImg();
	}
	else if (events[0] == "poachers")
	{
		PoachersImg();
		life -= 5;
	}
	else if (events[0] == "invasive")
	{
		InvasiveImg();
		std::string input1;

		std::cout << "A non-native invasive species has appeared on your land. Would you like to remove it? Y/N \n";
		std::cin >> input1;

		if (input1 == "Y")
		{
			life -= 5;
		}
		else
		{
			life -= 10;
		}
	}
	else if (events[0] == "dogwalk")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "EUROPEANBISON") != AniUsed.end())
		{
			DogWalkerImg();
			life -= 5;
		}
	}
	else if (events[0] == "partnership")
	{
		PartnershipImg();
		life += 5;
	}
	else if (events[0] == "BBC")
	{
		BBCImg();
		life += 5;
	}
	else if (events[0] == "visitors")
	{
		VisitorsImg();
		life -= 5;
	}
	else if (events[0] == "shoutout")
	{
		ShoutoutImg();
		life += 5;
	}
	else if (events[0] == "govfund")
	{
		GovFundImg();
		life += 10;
	}

	//Policy events. 
	else if (events[0] == "RhinoPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "RHINOCEROS") != AniUsed.end())
		{
			RhinoPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "RHINOCEROS"));
			life -= 14;
		}
	}
	else if (events[0] == "HeckPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "HECKCATTLE") != AniUsed.end())
		{
			HeckPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "HECKCATTLE"));
			life -= 10;
		}
	}
	else if (events[0] == "ElkPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "EURASIANELK") != AniUsed.end())
		{
			ElkPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "EURASIANELK"));
			life -= 7;
		}
	}
	else if (events[0] == "ElephantPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "ELEPHANT") != AniUsed.end())
		{
			ElephantPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "ELEPHANT"));
			life -= 18;
		}
	}
	else if (events[0] == "LionPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "LION") != AniUsed.end())
		{
			LionsPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "LION"));
			life -= 15;
		}
	}
	else if (events[0] == "HyenaPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "SPOTTEDHYENA") != AniUsed.end())
		{
			HyenasPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "SPOTTEDHYENA"));
			life -= 14;
		}
	}
	else if (events[0] == "BisonPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "EUROPEANBISON") != AniUsed.end())
		{
			BisonPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "EUROPEANBISON"));
			life -= 11;
		}
	}
	else if (events[0] == "BearsPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "BEARS") != AniUsed.end())
		{
			BearsPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "BEARS"));
			life -= 12;
	}
	}
	else if (events[0] == "MammothPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "WOOLYMAMMOTH") != AniUsed.end())
		{
			MammothPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "WOOLYMAMMOTH"));
			life -= 18;
		}
	}
	else if (events[0] == "WolfPolicy")
	{
		if (std::find(AniUsed.begin(), AniUsed.end(), "WOLF") != AniUsed.end())
		{
			WolfPolicyImg();
			AniUsed.erase(std::find(AniUsed.begin(), AniUsed.end(), "WOLF"));
			life -= 8;
		}
	}

	//These are to reduce probability of an actual event.
	//else if (events[0] == "nothing")
	//{
	//	nothing(protag, age);
	//}
	//else if (events[0] == "nothing2")
	//{
	//	nothing2(protag, age);
	//}
	//else if (events[0] == "nothing3")
	//{
	//	nothing3(protag, age);
	//}
	//else if (events[0] == "nothing4")
	//{
	//	nothing4(protag, age);
	//}
	//else if (events[0] == "nothing5")
	//{
	//	nothing5(protag, age);
	//}
	//else if (events[0] == "nothing6")
	//{
	//	nothing6(protag, age);
	//}
	//else if (events[0] == "nothing7")
	//{
	//	nothing7(protag, age);
	//}
	//else if (events[0] == "nothing8")
	//{
	//	nothing8(protag, age);
	//}
	//else if (events[0] == "nothing9")
	//{
	//	nothing9(protag, age);
	//}
	//else if (events[0] == "nothing10")
	//{
	//	nothing10(protag, age);
	//}
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
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

//Add images and functions for predators here!!!
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
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
		ZeroImg();
		std::cout << "You didn't change anything\n";
		EndImg();
	}
	else if (life >= 10 && life <= 25)
	{
		ZeroImg();
		std::cout << "You made some change - good\n";
		EndImg();
	}
	else if (life >= 26 && life <= 50)
	{
		TwentyImg();
		std::cout << "You made big change - great\n";
		EndImg();
	}
	else if (life >= 51)
	{
		SixtyImg(); //Add text to images here
		std::cout << "You made huge change - amazing\n";
		EndImg();
	}
}

//Pleistocene rewilding 

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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
			else if (input2 == "LION")
			{
				LionImg();
				life += 15;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				life += 14;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
		}
		else if (input2 == "LION")
		{
			LionImg();
			life += 15;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			life += 14;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
			else if (input2 == "LION")
			{
				LionImg();
				life += 15;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				life += 14;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
		}
		else if (input2 == "LION")
		{
			LionImg();
			life += 15;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			life += 14;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
			else if (input2 == "LION")
			{
				LionImg();
				life += 15;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				life += 14;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
		}
		else if (input2 == "LION")
		{
			LionImg();
			life += 15;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			life += 14;
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
			life += 7;
		}
		else if (input2 == "ELK" && std::find(AniUsed.begin(), AniUsed.end(), "EURASIANBEAVER") == AniUsed.end())
		{
			wetlandsImg();
			std::cout << "You cannot place Elk into a rewilding project until Beavers have established!\n";
			std::cout << "Please choose a different animal\n";
			std::cin >> input2;

			if (input2 == "FALLOWDEER")
			{
				FallowImg();
				life += 9;
			}
			else if (input2 == "REDSQUIRREL")
			{
				RedSqImg();
				life += 5;
			}
			else if (input2 == "ROEDEER")
			{
				RoeImg();
				life += 8;
			}
			else if (input2 == "EUROPEANBISON")
			{
				EUbiImg();
				life += 11;
			}
			else if (input2 == "WILDHORSES")
			{
				HorseImg();
				life += 11;
			}
			else if (input2 == "LONGHORNCATTLE")
			{
				LHCatImg();
				life += 12;
			}
			else if (input2 == "EURASIANBEAVER")
			{
				EUBevImg();
				life += 8;
			}
			else if (input2 == "WILDBOAR")
			{
				WildBoarImg();
				life += 6;
			}
			else if (input2 == "STORK")
			{
				StorkImg();
				life += 4;
			}
			else if (input2 == "WHITETAILEDEAGLE")
			{
				WTEImg();
				life += 4;
			}
			else if (input2 == "PINEMARTEN")
			{
				PiMarImg();
				life += 3;
			}
			else if (input2 == "HECKCATTLE")
			{
				HeckImg();
				life += 10;
			}
			else if (input2 == "RHINOCEROS")
			{
				RhinoImg();
				life += 14;
			}
			else if (input2 == "ELEPHANT")
			{
				ElephantImg();
				life += 18;
			}
			else if (input2 == "WOOLYMAMMOTH")
			{
				MammothImg();
				life += 18;
			}
			else if (input2 == "REINDEER")
			{
				ReindeerImg();
				life += 10;
			}
			else if (input2 == "WOLF")
			{
				WolfImg();
				life += 8;
			}
			else if (input2 == "EURASIANLYNX")
			{
				EULyImg();
				life += 9;
			}
			else if (input2 == "WILDCAT")
			{
				WildcatImg();
				life += 6;
			}
			else if (input2 == "BEARS")
			{
				BearImg();
				life += 12;
			}
			else if (input2 == "LION")
			{
				LionImg();
				life += 15;
			}
			else if (input2 == "SPOTTEDHYENA")
			{
				HyenaImg();
				life += 14;
			}
		}
		else if (input2 == "FALLOWDEER")
		{
			FallowImg();
			life += 9;
		}
		else if (input2 == "REDSQUIRREL")
		{
			RedSqImg();
			life += 5;
		}
		else if (input2 == "ROEDEER")
		{
			RoeImg();
			life += 8;
		}
		else if (input2 == "EUROPEANBISON")
		{
			EUbiImg();
			life += 11;
		}
		else if (input2 == "WILDHORSES")
		{
			HorseImg();
			life += 11;
		}
		else if (input2 == "LONGHORNCATTLE")
		{
			LHCatImg();
			life += 12;
		}
		else if (input2 == "EURASIANBEAVER")
		{
			EUBevImg();
			life += 8;
		}
		else if (input2 == "WILDBOAR")
		{
			WildBoarImg();
			life += 6;
		}
		else if (input2 == "STORK")
		{
			StorkImg();
			life += 4;
		}
		else if (input2 == "WHITETAILEDEAGLE")
		{
			WTEImg();
			life += 4;
		}
		else if (input2 == "PINEMARTEN")
		{
			PiMarImg();
			life += 3;
		}
		else if (input2 == "HECKCATTLE")
		{
			HeckImg();
			life += 10;
		}
		else if (input2 == "RHINOCEROS")
		{
			RhinoImg();
			life += 14;
		}
		else if (input2 == "ELEPHANT")
		{
			ElephantImg();
			life += 18;
		}
		else if (input2 == "WOOLYMAMMOTH")
		{
			MammothImg();
			life += 18;
		}
		else if (input2 == "REINDEER")
		{
			ReindeerImg();
			life += 10;
		}
		else if (input2 == "WOLF")
		{
			WolfImg();
			life += 8;
		}
		else if (input2 == "EURASIANLYNX")
		{
			EULyImg();
			life += 9;
		}
		else if (input2 == "WILDCAT")
		{
			WildcatImg();
			life += 6;
		}
		else if (input2 == "BEARS")
		{
			BearImg();
			life += 12;
		}
		else if (input2 == "LION")
		{
			LionImg();
			life += 15;
		}
		else if (input2 == "SPOTTEDHYENA")
		{
			HyenaImg();
			life += 14;
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