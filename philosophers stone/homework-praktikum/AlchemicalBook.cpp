#include "AlchemicalBook.h"

bool AlchemicalBook::checkIteraction(std::vector<std::string> vector, std::string str)
{
	if (str == "Air" || str == "Water" || str == "Earth" || str == "Fire")
	{
		bool inVector = false;
		for (auto vit = vector.cbegin(); !inVector && vit != vector.cend(); vit++) {
			inVector = (*vit) == str;
		}
		return inVector;
	}
	else if(str=="Metal" || str=="Gold")
	{
		bool inVector = false;
		bool inVector2 = false;
		for (auto vit = vector.cbegin(); !inVector  && vit != vector.cend(); vit++) {
			inVector = (*vit) == "Earth";
		}
		for (auto vit = vector.cbegin(); !inVector2 && vit != vector.cend(); vit++) {
			inVector2 = (*vit) == "Fire";
		}
		return inVector && inVector2;
	}
	else if (str == "Stone")
	{
		bool inVector = false;
		bool inVector2 = false;
		for (auto vit = vector.cbegin(); !inVector && !inVector2 && vit != vector.cend(); vit++) {
			inVector = (*vit) == "Fire";
		}
		for (auto vit = vector.cbegin(); !inVector2  && vit != vector.cend(); vit++) {
			inVector2 = (*vit) == "Water";
		}
		return inVector && inVector2;
	}
	else if (str == "Energy")
	{
		bool inVector = false;
		bool inVector2 = false;
		for (auto vit = vector.cbegin(); !inVector && vit != vector.cend(); vit++) {
			inVector = (*vit) == "Water";
		}
		for (auto vit = vector.cbegin(); !inVector2 && vit != vector.cend(); vit++) {
			inVector2 = (*vit) == "Air";
		}
		return inVector && inVector2;
	}
	else if (str == "Spirit")
	{
		bool inVector = false;
		for (auto vit = vector.cbegin(); !inVector  && vit != vector.cend(); vit++) {
			inVector = (*vit) == "Air";
		}
		return inVector;
	}
}

AlchemicalBook::AlchemicalBook():formulas(std::vector<Formula*>())
{
}

AlchemicalBook::AlchemicalBook(std::vector<Formula*> formulas)
{
}

void AlchemicalBook::addFormula(std::vector<std::string> elements, std::string result)
{
	std::vector<Element*> elementss;

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

	for (size_t i = 0; i < elements.size(); i++)
	{
		if (elements[i] == "Air")
		{
			elementss.push_back(air.clone());
		}
		else if (elements[i] == "Earth")
		{
			elementss.push_back(earth.clone());
		}
		else if (elements[i] == "Energy")
		{
			elementss.push_back(energy.clone());
		}
		else if (elements[i] == "Fire")
		{
			elementss.push_back(fire.clone());
		}
		else if (elements[i] == "Gold")
		{
			elementss.push_back(gold.clone());
		}
		else if (elements[i] == "Metal")
		{
			elementss.push_back(metal.clone());
		}
		else if (elements[i] == "PhilosophersStone")
		{
			elementss.push_back(phStone.clone());
		}
		else if (elements[i] == "Spirit")
		{
			elementss.push_back(spirit.clone());
		}
		else if (elements[i] == "Stone")
		{
			elementss.push_back(stone.clone());
		}
		else if (elements[i] == "Water")
		{
			elementss.push_back(water.clone());
		}
	}

	if (elements.empty())
	{
		this->formulas.push_back(new Formula(result));
	}
	else
	{
		bool flag=true;
		for (size_t i = 0; i < elementss.size(); i++)
		{
			for (size_t j = 0; j < elementss.size(); j++)
			{
				if (elementss[j]->getIteractions()== elementss[i]->getIteractions())
				{
					continue;
				}
				else if(checkIteraction(elementss[j]->getIteractions(),elementss[i]->getName()))
				{
					continue;
				}
				else 
				{
					flag = false;
					break;
				}
			}

			if (!flag)
			{
				break;
			}
		}

		if (flag)
		{
			this->formulas.push_back(new Formula(new Equation(elements, elements.size()), result));
		}
	}
	
}

void AlchemicalBook::read(const std::string fileName)
{
	std::fstream inputFile;
	inputFile.open(fileName, std::ios::in);
	if (inputFile.is_open())
	{
		std::vector<std::string> elements;
		std::string result;

		std::string temp;
		
		int i = 0;
		while (getline(inputFile, temp))
		{
			i = 0;
			if (temp[i] == '/')
			{
				result = temp;

			}
			else
			{
				std::string tempEl;
				while (i < temp.size())
				{
					if (temp[i] != '+' && temp[i] != '=')
					{
						tempEl.push_back(temp[i]);
						i++;
					}
					else if (temp[i] == '=')
					{
						for (size_t k = i + 1; k < temp.size(); k++)
						{
							result.push_back(temp[k]);
						}
						break;
					}
					else
					{
						elements.push_back(tempEl);
						tempEl = "";
						i++;
					}
				}
				elements.push_back(tempEl);
			}

			if (elements.empty())
			{
				addFormula({}, result);
			}
			else
			{
				addFormula(elements, result);
			}
			

			elements.clear();
			result = "";
		}

		inputFile.close();
	}
	else
	{
		std::cout << "Couldn't open the file\n";
	}
}

void AlchemicalBook::print() const
{
	for (size_t i = 0; i < formulas.size(); i++)
	{
		formulas[i]->print();
	}
}
