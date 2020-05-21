#ifndef FORMULA_H
#define FORMULA_H
#include "Equation.h"

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

	void print()const;

};
#endif // !FORMULA_H

