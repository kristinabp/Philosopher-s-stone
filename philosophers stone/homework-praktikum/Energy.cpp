#include "Energy.h"

Energy::Energy(int & col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Energy::increaseCol(int & n)
{
	this->col += n;
}

void Energy::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Energy::clone() const
{
	return new Energy(*this);
}

std::vector<std::string> Energy::getIteractions() const
{
	return this->iteractions;
}

std::string Energy::getName() const
{
	return "Energy";
}

void Energy::print() const
{
	std::cout << "Energy" ;
}

Energy::Energy()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}
