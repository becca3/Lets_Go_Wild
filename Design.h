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
void print();

void Game_Core(Ecosystem& protag, int age);
void T_2(Ecosystem& protag, int age);
void T_3(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
void T_5(Ecosystem& protag, int age);
void T_6(Ecosystem& protag, int age);
//void T_7(Ecosystem& protag, int age);
//void T_8(Ecosystem& protag, int age);
//void T_9(Ecosystem& protag, int age);
//void T_11(Ecosystem& protag, int age);
//void T_12(Ecosystem& protag, int age);

void Aging(int& age);

#endif