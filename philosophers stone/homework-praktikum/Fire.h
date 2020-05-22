#ifndef FIRE_H
#define FIRE_H
#include "Element.h"

class Fire:
	public virtual Element
{
protected:

public:
	Fire();
	Fire(const int& col);

	void decreaseCol(int& n);
	void increaseCol(int& n);
	Element* clone()const;

	int getCol();
	std::vector<std::string> getIteractions()const;
	std::string getName()const;


	void print()const;
};
#endif // !FIRE_H

