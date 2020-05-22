#ifndef EQUATION_H
#define EQUATION_H

#include "Element.h"
#include "Air.h"
#include "Earth.h"
#include "Energy.h"
#include "Fire.h"
#include "Gold.h"
#include "Metal.h"
#include "PhilosophersStone.h"
#include "Spirit.h"
#include "Stone.h"
#include "Water.h"
#include <vector>
#include <utility>

class Equation
{
private:
	std::vector<Element*> elements;
	int size;

public:
	Equation(const std::vector<std::string> elements, int size);

	bool validEquation(const std::vector<std::string> elements)const;
	void print()const;
};
#endif // !EQUATION_H


