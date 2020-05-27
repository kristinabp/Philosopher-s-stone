#include "Fire.h"

Fire::Fire(): Element()
{
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Fire::Fire(int col):Element(col)
{
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Fire::decreaseCol(int n)
{
	this->col -= n;
}

void Fire::increaseCol(int n)
{
	this->col += n;
}

Element * Fire::clone() const
{
	return new Fire(*this);
}

int Fire::getCol() const
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

bool Fire::isBase() const
{
	return true;
}

void Fire::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Fire";
}

