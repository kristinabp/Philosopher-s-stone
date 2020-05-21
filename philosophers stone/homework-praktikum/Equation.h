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

class Equation
{
private:
	std::vector<Element*> elements;
	int size;

public:
	Equation(const std::vector<std::string> elements, int size);

	void print()const;
};
#endif // !EQUATION_H


