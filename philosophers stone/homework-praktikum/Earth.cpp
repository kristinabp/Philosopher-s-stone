#include "Earth.h"

Earth::Earth() : Element()
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
}

Earth::Earth(int & col): Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
}

void Earth::decreaseCol(int & n)
{
	this->col -= n;
}

void Earth::increaseCol(int & n)
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

std::vector<std::string> Earth::getIteractions() const
{
	return this->iteractions;
}

void Earth::print() const
{
	std::cout << "Earth" ;
}
