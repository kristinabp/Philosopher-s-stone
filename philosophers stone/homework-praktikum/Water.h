#ifndef WATER_H
#define WATER_H

#include "Element.h"

class Water:
	public virtual Element
{
protected:

public:
	Water();
	Water(int& col);

	void increaseCol(int& n);
	void decreaseCol(int& n);

	Element* clone()const;

	std::vector<std::string> getIteractions()const;
	std::string getName()const;


	void print()const;

};
#endif // !WATER_H

