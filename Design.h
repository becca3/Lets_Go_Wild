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
void print();

void Game_Core(Ecosystem& protag, int age);
void T_2(Ecosystem& protag, int age);
void T_3(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
void T_4(Ecosystem& protag, int age);
//void T_5(Ecosystem& protag, int age, int hp);
//void T_6(Ecosystem& protag, int age, int hp);
//void T_7(Ecosystem& protag, int age, int hp);
//void T_8(Ecosystem& protag, int age, int hp);
//void T_9(Ecosystem& protag, int age, int hp);
//void T_11(Ecosystem& protag, int age, int hp);
//void T_12(Ecosystem& protag, int age, int hp);

void Aging(int& age);
//void fallow(int& life);

#endif