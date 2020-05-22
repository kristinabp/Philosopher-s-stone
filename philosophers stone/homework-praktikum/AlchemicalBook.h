#ifndef ALCHEMICALBOOK_H
#define ALCHEMICALBOOK_H

#include "Formula.h"
#include <vector>
#include <fstream>
#include <iostream>

class AlchemicalBook
{
private:
	std::vector<Formula*> formulas;
	bool checkIteraction(std::vector<std::string> vector, std::string str);
	void createVectorOfElements(std::vector<std::string> elements);

public:
	AlchemicalBook();
	AlchemicalBook(std::vector<Formula*> formulas);

	void addFormula(std::vector<std::string> elements, std::string result);
	void read(const std::string fileName);

	void print()const;
};
#endif // !ALCHEMICALBOOK_H

