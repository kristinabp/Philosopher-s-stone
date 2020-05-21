#ifndef ALCHEMICALBOOK_H
#define ALCHEMICALBOOK_H

#include "Formula.h"
#include <vector>
#include <fstream>

class AlchemicalBook
{
private:
	std::vector<Formula*> formulas;

public:
	AlchemicalBook();
	AlchemicalBook(std::vector<Formula*> formulas);

	void addFormula(std::vector<std::string> elements, std::string result);
	void read(const std::string fileName);

	void print()const;
};
#endif // !ALCHEMICALBOOK_H

