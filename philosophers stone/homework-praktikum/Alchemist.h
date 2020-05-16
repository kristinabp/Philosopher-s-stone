#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include "AlchemicalBook.h"
#include "Element.h"
#include <vector>

class Alchemist
{
private:
	AlchemicalBook book;
	std::vector<Element*> elements;
public:
	Alchemist();
	Alchemist(const AlchemicalBook& book, std::vector<Element*> elements);
	bool philosopherStone();
};
#endif // !ALCHEMIST_H
