#pragma once
#include "Air.h"
#include "Water.h"
#include "Fire.h"
#include "Earth.h"

class PhilosophersStone :
	public Air, public Water, public Fire, public Earth
{
private:

public:
	PhilosophersStone();
	PhilosophersStone(int& col);

	void increaseCol(int& n);
	void decreaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;
	std::string getName()const;


	void print()const;

};

