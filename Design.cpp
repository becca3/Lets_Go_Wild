#include "Design.h"
//#include "Images.h"
#include <vector>
#include <iostream>
#include <ctime>

using Random = effolkronium::random_static;

//Small fire. 
void fire(Ecosystem& protag, int& distance)
{
	system("CLS");
	std::cout << "Unfortunately, there was a small fire on a portion of land.\t";
	std::cout << "It's destroyed some vegetation.";
	protag.setHealth(protag.health() - 10);
	distance += 5;
}

//Drought.
void drought(Ecosystem& protag, int& distance)
{
	system("CLS");
	std::cout << "Due to climate change, your land suffered a drought";
	protag.setHealth(protag.health() - 10);
	distance += 5;
}

//Flood. 
void flood(Ecosystem& protag, int& distance)
{
	system("CLS");
	std::cout << "Due to climate change, your land suffered a flood.";
	protag.setHealth(protag.health() - 10);
	distance += 5;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Ecosystem& protag, int& distance)
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
	//	fire(protag, distance);
	//}
	//else if (events[0] == "drought")
	//{
	//	DroughtImg();
	//	drought(protag, distance);
	//}
	//else if (events[0] == "flood")
	//{
	//	FloodImg();
	//	flood(protag, distance);
	//}
}