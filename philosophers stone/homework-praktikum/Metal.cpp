#include "Metal.h"

Metal::Metal()
{
	this->col = 0;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Metal::Metal(int col) 
{
	this->col = col;
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Metal::increaseCol(int n)
{
	this->col += n;
}

void Metal::decreaseCol(int n)
{
	this->col -= n;
}

Element * Metal::clone() const
{
	return new Metal(*this);
}

int Metal::getCol() const
{
	return this->col;
}

std::vector<std::string> Metal::getIteractions() const
{
	return this->iteractions;
}

std::string Metal::getName() const
{
	return "Metal";
}

bool Metal::isBase() const
{
	return false;
}

void Metal::print() const
{
	if (col > 0)
	{
		std::cout << col << " ";
	}
	std::cout << "Metal";
}


