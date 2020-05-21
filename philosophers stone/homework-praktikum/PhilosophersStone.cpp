#include "PhilosophersStone.h"



PhilosophersStone::PhilosophersStone()
{
	this->col = 0;
}

PhilosophersStone::PhilosophersStone(int & col)
{
	this->col = col;
}

void PhilosophersStone::increaseCol(int & n)
{
	this->col += n;
}

void PhilosophersStone::decreaseCol(int & n)
{
	this->col -= n;
}

Element * PhilosophersStone::clone() const
{
	return new PhilosophersStone(*this);
}

std::vector<std::string> PhilosophersStone::getIteractions() const
{
	return this->iteractions;
}

void PhilosophersStone::print() const
{
	std::cout << "Philosophers's stone";
}


