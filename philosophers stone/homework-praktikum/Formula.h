#ifndef FORMULA_H
#define FORMULA_H
#include "Equation.h"

class Formula
{
private:
	Equation* equation;

public:
	Formula();
	Formula(const Equation* equation);
};
#endif // !FORMULA_H

