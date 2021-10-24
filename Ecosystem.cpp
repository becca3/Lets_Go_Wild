//Code created by Rebecca Morgan for the Rewilding and ecosystem services class at Sussex University

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

//int Ecosystem::life()
//{
//	return health_;
//}
//
//void Ecosystem::setLife(int hp)
//{
//	health_ = hp;
//}
