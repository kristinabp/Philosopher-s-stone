#include "Air.h"

Air::Air():Element()
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
	iteractions.push_back("earth");
}

Air::Air(int & col):Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
	iteractions.push_back("earth");
}

void Air::decreaseCol(int & n)
{
	this->col -= n;
}

void Air::increaseCol(int & n)
{
	this->col += n;
}

Element * Air::clone() const
{
	return new Air(*this);
}

std::vector<std::string> Air::getIteractions() const
{
	return this->iteractions;
}

void Air::print() const
{
	std::cout << "Air";
}

