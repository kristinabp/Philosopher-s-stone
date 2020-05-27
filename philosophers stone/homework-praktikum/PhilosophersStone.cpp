#include "PhilosophersStone.h"



PhilosophersStone::PhilosophersStone()
{
	this->col = 1;
}

PhilosophersStone::PhilosophersStone(int col)
{
	this->col = col;
}

void PhilosophersStone::increaseCol(int n)
{
	this->col += n;
}

void PhilosophersStone::decreaseCol(int n)
{
	this->col -= n;
}

Element * PhilosophersStone::clone() const
{
	return new PhilosophersStone(*this);
}

int PhilosophersStone::getCol() const
{
	return this->col;
}

std::vector<std::string> PhilosophersStone::getIteractions() const
{
	return this->iteractions;
}

std::string PhilosophersStone::getName() const
{
	return "Philosopher's Stone";
}

bool PhilosophersStone::isBase() const
{
	return false;
}

void PhilosophersStone::print() const
{
	if (col > 1)
	{
		std::cout << col << " ";
	}
	std::cout << "Philosopher's Stone";
}


