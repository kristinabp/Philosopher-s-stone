#include "Metal.h"

Metal::Metal()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Metal::Metal(int & col) 
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
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

std::string Metal::getName() const
{
	return "Metal";
}

void Metal::print() const
{
	std::cout << "Metal";
}


