#include "Fire.h"

Fire::Fire(): Element()
{
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Fire::Fire(const int & col):Element(col)
{
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Fire::decreaseCol(int & n)
{
	this->col -= n;
}

void Fire::increaseCol(int & n)
{
	this->col += n;
}

Element * Fire::clone() const
{
	return new Fire(*this);
}

int Fire::getCol()
{
	return this->col;
}

std::vector<std::string> Fire::getIteractions() const
{
	return this->iteractions;
}

std::string Fire::getName() const
{
	return "Fire";
}

void Fire::print() const
{
	std::cout << "Fire";
}

