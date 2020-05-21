#include "Formula.h"

Formula::Formula(): equation(nullptr), isDivided(false), result("")
{
}

Formula::Formula(std::string dividedElem):equation(nullptr), isDivided(true), result(dividedElem)
{
}

Formula::Formula(Equation * equation, const std::string & result):equation(equation), result(result)
{
	if (result[0] == '/')
	{
		isDivided = true;
	}
}

void Formula::print() const
{
	if (isDivided)
	{
		std::cout << result << "\n";
	}
	else
	{
		equation->print();
		std::cout << "=" << result << "\n";
	}
}


