#ifndef EQUATION_H
#define EQUATION_H

#include "Element.h"
#include <vector>

struct ElementDivision
{
	Element el1;
	Element el2;

	void print()const;
};

class Equation
{
private:
	Equation* eq;
	Element* el;

	bool isElement()const;
public:
	Equation();
	Equation(Equation* eq, Element* el);

	Element* elemId(const Element* el);
	ElementDivision elemDiv(const Element* el);

};
#endif // !EQUATION_H


