#include "Metal.h"

Metal::Metal()
{
	this->col = 0;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

Metal::Metal(int & col) 
{
	this->col = col;
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
	iteractions.push_back("air");
}

void Metal::increaseCol(int & n)
{
	this->col += n;
}

void Metal::decreaseCol(int & n)
{
	this->col -= n;
}

Element * Metal::clone() const
{
	return new Metal(*this);
}

std::vector<std::string> Metal::getIteractions() const
{
	return this->iteractions;
}

void Metal::print() const
{
	std::cout << "Metal";
}


