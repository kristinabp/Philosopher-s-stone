#include "Spirit.h"

Spirit::Spirit()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Spirit::Spirit(int & col)
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Spirit::increaseCol(int & n)
{
	this->col += n;
}

void Spirit::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Spirit::clone() const
{
	return new Spirit(*this);
}

std::vector<std::string> Spirit::getIteractions() const
{
	return this->iteractions;
}

std::string Spirit::getName() const
{
	return "Spirit";
}

void Spirit::print() const
{
	std::cout << "Spirit";
}
