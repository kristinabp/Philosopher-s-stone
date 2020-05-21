#include "Energy.h"

Energy::Energy(int & col)
{
	this->col = col;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
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

void Energy::print() const
{
	std::cout << "Energy" ;
}

Energy::Energy()
{
	this->col = 0;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}
