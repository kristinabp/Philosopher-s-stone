#include "Gold.h"

Gold::Gold()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Gold::Gold(int & col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
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

std::string Gold::getName() const
{
	return "Gold";
}

void Gold::print() const
{
	std::cout << "Gold" ;
}
