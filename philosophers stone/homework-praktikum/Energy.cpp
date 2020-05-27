#include "Energy.h"

Energy::Energy(int col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Energy::increaseCol(int n)
{
	this->col += n;
}

void Energy::decreaseCol(int n)
{
	this->col -= n;
}

Element * Energy::clone() const
{
	return new Energy(*this);
}

int Energy::getCol() const
{
	return this->col;
}

std::vector<std::string> Energy::getIteractions() const
{
	return this->iteractions;
}

std::string Energy::getName() const
{
	return "Energy";
}

bool Energy::isBase() const
{
	return false;
}

void Energy::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Energy" ;
}

Energy::Energy()
{
	this->col = 1;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}
