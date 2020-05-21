#include "Gold.h"

Gold::Gold()
{
	this->col = 0;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

Gold::Gold(int & col)
{
	this->col = col;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

void Gold::increaseCol(int & n)
{
	this->col += n;
}

void Gold::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Gold::clone() const
{
	return new Gold(*this);
}

std::vector<std::string> Gold::getIteractions() const
{
	return this->iteractions;
}

void Gold::print() const
{
	std::cout << "Gold" ;
}
