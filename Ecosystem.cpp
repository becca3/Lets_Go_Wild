#include "Design.h"

Ecosystem::Ecosystem(std::string name)
{
	name_ = name;
}

Ecosystem::~Ecosystem()
{
}

std::string Ecosystem::name()
{
	return name_;
}

void Ecosystem::setName(std::string name)
{
	name_ == name;
}

int Ecosystem::health()
{
	return health_;
}

void Ecosystem::setHealth(int hp)
{
	health_ = hp;
}
