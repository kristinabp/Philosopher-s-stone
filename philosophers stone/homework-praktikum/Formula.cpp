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
		this->isDivided = true;
	}
}

bool Formula::divided() const
{
	return this->isDivided;
}

Element* Formula::getResult() const
{
	if (result == "Air")
	{
		return new Air();
	}
	else if (result == "Earth")
	{
		return new Earth();
	}
	else if (result == "Energy")
	{
		return new Energy();
	}
	else if (result == "Fire")
	{
		return new Fire();
	}
	else if (result == "Gold")
	{
		return new Gold();
	}
	else if (result == "Metal")
	{
		return new Metal();
	}
	else if (result == "Spirit")
	{
		return new Spirit();
	}
	else if (result == "Philosopher's Stone")
	{
		return new PhilosophersStone();
	}
	else if (result == "Stone")
	{
		return new Stone();
	}
	else if (result == "Water")
	{
		return new Water();
	}

}

Equation * Formula::getEquation() const
{
	return this->equation;
}

DividedElement * Formula::getDividedElement() const
{
	return new DividedElement(result);
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


