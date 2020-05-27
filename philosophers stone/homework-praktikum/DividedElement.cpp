#include "DividedElement.h"

DividedElement::DividedElement(const std::string elem)
{
	if (elem == "/Air")
	{
		this->el1 = new Air();
		this->el2 = new Air();
	}
	else if (elem == "/Earth")
	{
		this->el1 = new Earth();
		this->el2 = new Earth();
	}
	else if (elem == "/Energy")
	{
		this->el1 = new Water();
		this->el2 = new Air();
	}
	else if (elem == "/Fire")
	{
		this->el1 = new Fire();
		this->el2 = new Fire();
	}
	else if (elem == "/Gold")
	{
		this->el1 = new Metal();
		this->el2 = new Metal();
	}
	else if (elem == "/Metal")
	{
		this->el1 = new Earth();
		this->el2 = new Fire();
	}
	else if (elem == "/Philosopher's stone")
	{
		this->el1 = new PhilosophersStone();
		this->el2 = new PhilosophersStone();
	}
	else if (elem == "/Spirit")
	{
		this->el1 = new Air();
		this->el2 = new Air();
	}
	else if (elem == "/Stone")
	{
		this->el1 = new Fire();
		this->el2 = new Water();
	}
	else if (elem == "/Water")
	{
		this->el1 = new Water();
		this->el2 = new Water();
	}
}

Element * DividedElement::getEl1() const
{
	return this->el1;
}

Element * DividedElement::getEl2() const
{
	return this->el2;
}

void DividedElement::print() const
{
	el1->print();
	std::cout << " "; 
	el2->print();
}

