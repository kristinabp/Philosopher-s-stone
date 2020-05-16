#ifndef WATER_H
#define WATER_H

#include "Element.h"
#include <vector>
#include <string>

class Water:
	public Element
{
protected:
	std::vector<std::string> iteractions;

public:
	Water();
	Water(int& col);

	int getCol()const;

};
#endif // !WATER_H

