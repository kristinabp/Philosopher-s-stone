#include "Fire.h"

Fire::Fire(): Element()
{
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
}

Fire::Fire(const int & col):Element(col)
{
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
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

void Fire::print() const
{
	std::cout << "Fire";
}

