#include "Air.h"

Air::Air():Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Air::Air(int col):Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Earth");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Air::decreaseCol(int n)
{
	this->col -= n;
}

void Air::increaseCol(int n)
{
	this->col += n;
}

Element * Air::clone() const
{
	return new Air(*this);
}

int Air::getCol() const
{
	return this->col;;
}

std::vector<std::string> Air::getIteractions() const
{
	return this->iteractions;
}

std::string Air::getName() const
{
	return "Air";
}

bool Air::isBase() const
{
	return true;
}

void Air::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Air";
}

