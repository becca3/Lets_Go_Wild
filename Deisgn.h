#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include "random.h"
//#include "character.h"
//#include "Items.h"

#include <string>

class Ecosystem
{
public:
	Ecosystem(std::string name);
	~Ecosystem();

	std::string name();
	void setName(std::string name);

	bool alive();

private:
	std::string name_{ "The Shadow" };
	int health_{ 100 };
};

void randomEvent(Ecosystem& protag, int& distance);


#endif