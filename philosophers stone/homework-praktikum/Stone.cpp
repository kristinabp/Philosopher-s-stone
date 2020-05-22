#include "Stone.h"

Stone::Stone()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Stone::Stone(int & col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
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

std::string Stone::getName() const
{
	return "Stone";
}

void Stone::print() const
{
	std::cout << "Stone" ;
}
