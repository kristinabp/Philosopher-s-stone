#include "Water.h"

Water::Water():Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
}

Water::Water(int & col):Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
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

std::string Water::getName() const
{
	return "Water";
}

void Water::print() const
{
	std::cout << "Water";
}

