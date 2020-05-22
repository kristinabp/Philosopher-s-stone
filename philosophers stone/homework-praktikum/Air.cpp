#include "Air.h"

Air::Air():Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Air::Air(int & col):Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Air::decreaseCol(int & n)
{
	this->col -= n;
}

void Air::increaseCol(int & n)
{
	this->col += n;
}

Element * Air::clone() const
{
	return new Air(*this);
}

std::vector<std::string> Air::getIteractions() const
{
	return this->iteractions;
}

std::string Air::getName() const
{
	return "Air";
}

void Air::print() const
{
	std::cout << "Air";
}

