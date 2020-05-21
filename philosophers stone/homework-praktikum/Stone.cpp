#include "Stone.h"

Stone::Stone()
{
	this->col = 0;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

Stone::Stone(int & col)
{
	this->col = col;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

void Stone::increaseCol(int & n)
{
	this->col += n;
}

void Stone::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Stone::clone() const
{
	return new Stone(*this);
}

std::vector<std::string> Stone::getIteractions() const
{
	return this->iteractions;
}

void Stone::print() const
{
	std::cout << "Stone" ;
}
