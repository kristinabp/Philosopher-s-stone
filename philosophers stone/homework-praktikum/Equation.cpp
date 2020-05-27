#include "Equation.h"

Equation::Equation(const std::vector<std::string> elements, int size): size(size)
{
	Air air;
	Earth earth;
	Energy energy;
	Fire fire;
	Gold gold;
	Metal metal;
	PhilosophersStone phStone;
	Spirit spirit;
	Stone stone;
	Water water;

	for (size_t i = 0; i < size; i++)
	{
		if (elements[i] == "Air")
		{
			this->elements.push_back(air.clone());
		}
		else if (elements[i] == "Earth")
		{
			this->elements.push_back(earth.clone());
		}
		else if (elements[i] == "Energy")
		{
			this->elements.push_back(energy.clone());
		}
		else if (elements[i] == "Fire")
		{
			this->elements.push_back(fire.clone());
		}
		else if (elements[i] == "Gold")
		{
			this->elements.push_back(gold.clone());
		}
		else if (elements[i] == "Metal")
		{
			this->elements.push_back(metal.clone());
		}
		else if (elements[i] == "PhilosophersStone")
		{
			this->elements.push_back(phStone.clone());
		}
		else if (elements[i] == "Spirit")
		{
			this->elements.push_back(spirit.clone());
		}
		else if (elements[i] == "Stone")
		{
			this->elements.push_back(stone.clone());
		}
		else if (elements[i] == "Water")
		{
			this->elements.push_back(water.clone());
		}
	}
}

std::vector<Element*> Equation::getElements() const
{
	return this->elements;
}

void Equation::print() const
{
	for (size_t i = 0; i < this->size-1; i++)
	{
		elements[i]->print();
		std::cout << "+";
	}
	if (this->size > 0)
	{
		elements[this->size - 1]->print();
	}
}

