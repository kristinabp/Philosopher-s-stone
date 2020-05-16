#ifndef FIRE_H
#define FIRE_H
#include "Element.h"
#include <vector>
#include <string>

class Fire:
	public Element
{
protected:
	std::vector<std::string> iteractions;

public:
	Fire();
	Fire(int& col);


	int getCol()const;

};
#endif // !FIRE_H

