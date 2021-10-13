#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include "random.h"

#include <string>

class Ecosystem
{
public:
	Ecosystem(std::string name);
	~Ecosystem();

	std::string name();
	void setName(std::string name);

	int health();
	void setHealth(int hp);

	bool alive();

private:
	std::string name_{ "The Shadow" };

	int health_{ 100 };
};

void randomEvent(Ecosystem& protag, int& age, int hp);
void AnimalList();
void print_vec();
void Game_Core(Ecosystem& protag, int age, int hp);
void T_2(Ecosystem& protag, int age, int hp);


#endif