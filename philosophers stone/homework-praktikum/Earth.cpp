#include "Earth.h"

Earth::Earth() : Element()
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
}

Earth::Earth(int & col): Element(col)
{
	iteractions.push_back("Air");
	iteractions.push_back("Fire");
	iteractions.push_back("Water");
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

std::string Earth::getName() const
{
	return "Earth";
}

void Earth::print() const
{
	std::cout << "Earth" ;
}
