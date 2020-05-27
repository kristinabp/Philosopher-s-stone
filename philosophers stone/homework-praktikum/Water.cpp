#include "Water.h"

Water::Water():Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
}

Water::Water(int col):Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
}

void Water::increaseCol(int n)
{
	this->col += n;
}

void Water::decreaseCol(int n)
{
	this->col -= n;
}

Element * Water::clone() const
{
	return new Water(*this);
}

int Water::getCol() const
{
	return this->col;
}

std::vector<std::string> Water::getIteractions() const
{
	return this->iteractions;
}

std::string Water::getName() const
{
	return "Water";
}

bool Water::isBase() const
{
	return true;
}

void Water::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Water";
}

