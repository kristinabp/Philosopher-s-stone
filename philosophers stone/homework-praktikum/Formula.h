#ifndef FORMULA_H
#define FORMULA_H
#include "Equation.h"
#include "DividedElement.h"

class Formula
{
private:
	Equation* equation;
	bool isDivided;
	std::string result;

public:
	Formula();
	Formula(std::string dividedElem);
	Formula(Equation* equation, const std::string& result);

	bool divided()const;
	Element* getResult()const;
	Equation* getEquation()const;
	DividedElement* getDividedElement()const;

	void print()const;

};
#endif // !FORMULA_H

