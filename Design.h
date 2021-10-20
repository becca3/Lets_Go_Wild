#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include "random.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

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

	int health_{ 10 };
};

void randomEvent(Ecosystem& protag, int& age, int hp);
void AnimalList();
void print();

void Game_Core(Ecosystem& protag, int age, int hp);
void T_2(Ecosystem& protag, int age, int hp);
void T_3(Ecosystem& protag, int age, int hp);
void T_4(Ecosystem& protag, int age, int hp);
void T_4(Ecosystem& protag, int age, int hp);
//void T_5(Ecosystem& protag, int age, int hp);
//void T_6(Ecosystem& protag, int age, int hp);
//void T_7(Ecosystem& protag, int age, int hp);
//void T_8(Ecosystem& protag, int age, int hp);
//void T_9(Ecosystem& protag, int age, int hp);
//void T_11(Ecosystem& protag, int age, int hp);
//void T_12(Ecosystem& protag, int age, int hp);

void Aging(int& age);
void fallow(Ecosystem& protag, int& hp);

#endif