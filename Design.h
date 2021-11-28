//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University

#ifndef DESIGN_H
#define DESIGN_H

#include "random.h"

#include <string>

class Ecosystem
{
public:
	Ecosystem(std::string name);
	~Ecosystem();

	std::string name();
	void setName(std::string name);

//	int life();
//	void setLife(int hp);
//
//	bool alive();
//
//
private:
	std::string name_{ "The Shadow" };
//
//	int health_{ 10 };
};

void randomEvent(Ecosystem& protag, int& age);
void AnimalList(); 
void AnimalListInit();
void AnimalListPred();
void AnimalListPleio();
void AnimalListPleioInit();
void AnimalListPredPleio();
void print();
void LifeBZero();
void LifeAHundred();

void Game_Core(Ecosystem& protag, int age);
void Game_CorePleio(Ecosystem& protag, int age);
//Trophic RW
void T_2(Ecosystem& protag, int age);
void T_3(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
void T_5(Ecosystem& protag, int age);
void T_6(Ecosystem& protag, int age);
void T_7(Ecosystem& protag, int age);
void T_8(Ecosystem& protag, int age);
void T_9(Ecosystem& protag, int age);
void T_10(Ecosystem& protag, int age);
void T_11(Ecosystem& protag, int age);
void T_12(Ecosystem& protag, int age);

//Pleistocene RW
void PT_2(Ecosystem& protag, int age);
void PT_3(Ecosystem& protag, int age);
void PT_4(Ecosystem& protag, int age);
void PT_5(Ecosystem& protag, int age);
void PT_6(Ecosystem& protag, int age);
void PT_7(Ecosystem& protag, int age);
void PT_8(Ecosystem& protag, int age);
void PT_9(Ecosystem& protag, int age);
void PT_10(Ecosystem& protag, int age);
void PT_11(Ecosystem& protag, int age);
void PT_12(Ecosystem& protag, int age);

void EndGame();

void Aging(int& age);

#endif