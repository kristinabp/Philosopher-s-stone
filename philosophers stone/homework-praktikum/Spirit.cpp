#include "Spirit.h"

Spirit::Spirit()
{
	this->col = 1;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Spirit::Spirit(int col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Spirit::increaseCol(int n)
{
	this->col += n;
}

void Spirit::decreaseCol(int n)
{
	this->col -= n;
}

Element * Spirit::clone() const
{
	return new Spirit(*this);
}

int Spirit::getCol() const
{
	return this->col;
}

std::vector<std::string> Spirit::getIteractions() const
{
	return this->iteractions;
}

std::string Spirit::getName() const
{
	return "Spirit";
}

bool Spirit::isBase() const
{
	return false;
}

void Spirit::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Spirit";
}
