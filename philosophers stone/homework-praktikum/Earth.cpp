#include "Earth.h"

Earth::Earth() : Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Earth::Earth(const int col): Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

void Earth::decreaseCol(int  n)
{
	this->col -= n;
}

void Earth::increaseCol(int n)
{
	this->col += n;
}

int Earth::getCol()
{
	return this->col;
}

Element * Earth::clone() const
{
	return new Earth(*this);
}

int Earth::getCol() const
{
	return this->col;
}

std::vector<std::string> Earth::getIteractions() const
{
	return this->iteractions;
}

std::string Earth::getName() const
{
	return "Earth";
}

bool Earth::isBase() const
{
	return true;
}

void Earth::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Earth" ;
}
