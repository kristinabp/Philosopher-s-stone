#include "Equation.h"

Equation::Equation() : eq(nullptr), el(nullptr)
{
}

Equation::Equation(Equation * eq,Element * el)
{
	this->eq = eq;
	this->el = el;
}
