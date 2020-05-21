#include "Water.h"

Water::Water():Element()
{
	iteractions.push_back("air");
	iteractions.push_back("fire");
}

Water::Water(int & col):Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("fire");
}

void Water::increaseCol(int & n)
{
	this->col += n;
}

void Water::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Water::clone() const
{
	return new Water(*this);
}

std::vector<std::string> Water::getIteractions() const
{
	return this->iteractions;
}

void Water::print() const
{
	std::cout << "Water";
}

