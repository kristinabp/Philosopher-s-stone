#ifndef ALCHEMICALBOOK_H
#define ALCHEMICALBOOK_H

#include "Formula.h"
#include <vector>

class AlchemicalBook
{
private:
	std::vector<Formula*> formulas;
public:
	AlchemicalBook();
	AlchemicalBook(std::vector<Formula*> formulas);
};
#endif // !ALCHEMICALBOOK_H

