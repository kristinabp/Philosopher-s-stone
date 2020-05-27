#include "Alchemist.h"

std::vector<Element*> Alchemist::expandElem(Element* el)
{
	std::vector<Element*> vec;
	bool findFormula = false;

	for (size_t i = 0; i < book.getFormulas().size(); i++)
	{
		if (!book.getFormulas()[i]->divided())
		{
			if (book.getFormulas()[i]->getResult()->getName() == el->getName())
			{
				vec = book.getFormulas()[i]->getEquation()->getElements();
				findFormula = true;
				break;
			}
		}
	}

	if (findFormula)
	{
		if (allBase(vec))
		{
			return vec;
		}
		else
		{
			std::vector<Element*> neww;
			std::vector<Element*> curr;
			for (size_t i = 0; i < vec.size(); i++)
			{
				if (vec[i]->isBase())
				{
					neww.push_back(vec[i]);
				}
				else
				{
					curr = expandElem(vec[i]);
					neww.insert(neww.end(), curr.begin(), curr.end());
				}
			}

			return neww;
		}
	}
	else
	{
		vec.push_back(new Air(-10)); //error case just to know that there is an element that can't be created
		return vec;
	}
}

bool Alchemist::allBase(std::vector<Element*> el) const
{
	for (size_t i = 0; i < el.size(); i++)
	{
		if (el[i]->isBase())
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool Alchemist::createPhilosophersStone()
{
	std::vector<Formula*> formulasForPhilosophersStone;
	for (size_t i = 0; i < book.getFormulas().size(); i++)
	{
		if (!book.getFormulas()[i]->divided())
		{
			if (book.getFormulas()[i]->getResult()->getName() == "Philosopher's Stone")
			{
				formulasForPhilosophersStone.push_back(book.getFormulas()[i]);
			}
		}
		else
		{
			if (book.getFormulas()[i]->getDividedElement()->getEl1()->isBase())
			{
				for (size_t j = 0; j < elements.size(); j++)
				{
					if (elements[j]->getName() == book.getFormulas()[i]->getDividedElement()->getEl1()->getName())
					{
						elements[j]->increaseCol(1);
					}
				}
			}
			else
			{
				elements.push_back(book.getFormulas()[i]->getDividedElement()->getEl1()->clone());
			}

			if (book.getFormulas()[i]->getDividedElement()->getEl2()->isBase())
			{
				for (size_t j = 0; j < elements.size(); j++)
				{
					if (elements[j]->getName() == book.getFormulas()[i]->getDividedElement()->getEl2()->getName())
					{
						elements[j]->increaseCol(1);
					}
				}
			}
			else
			{
				elements.push_back(book.getFormulas()[i]->getDividedElement()->getEl2()->clone());
			}
		}
	}

	std::vector<std::vector<Element*>> neededElementsForPhilosophersStone;

	for (size_t i = 0; i < formulasForPhilosophersStone.size(); i++)
	{
		neededElementsForPhilosophersStone.push_back(formulasForPhilosophersStone[i]->getEquation()->getElements());
	}

	if (formulasForPhilosophersStone.empty())
	{
		return false;
	}
	else
	{
		std::vector<Element*> allElementsNeeded;
		std::vector<Element*> cur;
		for (size_t i = 0; i < neededElementsForPhilosophersStone.size(); i++)
		{
			for (size_t j = 0; j < neededElementsForPhilosophersStone[i].size(); j++)
			{
				cur = expandElem(neededElementsForPhilosophersStone[i][j]);
				if (cur.empty())
				{
					return false;
				}
				allElementsNeeded.insert(allElementsNeeded.end(), cur.begin(), cur.end());
			}
		}

		for (size_t i = 0; i < allElementsNeeded.size(); i++)
		{
			if (allElementsNeeded[i]->getCol() == -10) //error case 
			{
				return false;
			}
			for (size_t j = 0; j < elements.size(); j++)
			{
				if (elements[j]->getName() == allElementsNeeded[i]->getName())
				{
					if (elements[j]->getCol() == 0)
					{
						return false;
					}
					else
					{
						elements[j]->decreaseCol(1);
					}
					break;
				}
			}
		}
	}
	return true;
}

Alchemist::Alchemist():book(AlchemicalBook()), elements(std::vector<Element*>())
{
}

Alchemist::Alchemist(const AlchemicalBook & book, std::vector<Element*> elements):book(book),elements(elements)
{
}

void Alchemist::addElement(Element * el)
{
	elements.push_back(el);
}

void Alchemist::print() const
{
	std::cout << "-------------------\n";
	std::cout << "Available formulas:\n";
	std::cout << "-------------------\n";
	book.print();
	std::cout << "-------------------\n";
	std::cout << "Available elements:\n";
	std::cout << "-------------------\n";
	for (size_t i = 0; i < elements.size(); i++)
	{
		elements[i]->print();
		std::cout << "\n";
	}
}
