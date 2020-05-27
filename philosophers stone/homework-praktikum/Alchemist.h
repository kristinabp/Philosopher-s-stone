#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include "AlchemicalBook.h"
#include "Element.h"
#include <vector>
#include <algorithm>

class Alchemist
{
private:
	AlchemicalBook book;
	std::vector<Element*> elements;

	std::vector<Element*> expandElem(Element* el);
	bool allBase(std::vector<Element*> el)const;
	
public:
	Alchemist();
	Alchemist(const AlchemicalBook& book, std::vector<Element*> elements);

	void addElement(Element* el);
	bool createPhilosophersStone();
	void print()const;
};
#endif // !ALCHEMIST_H
