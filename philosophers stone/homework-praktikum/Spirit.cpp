#include "Spirit.h"

Spirit::Spirit()
{
	this->col = 0;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

Spirit::Spirit(int & col)
{
	this->col = col;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
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

void Spirit::print() const
{
	std::cout << "Spirit";
}
