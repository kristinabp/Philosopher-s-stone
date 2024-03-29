#ifndef AIR_H
#define AIR_H

#include "Element.h"

class Air:
	public virtual Element
{
protected:
public:
	Air();
	Air(int col);

	void decreaseCol(int n);
	void increaseCol(int n);
	Element* clone()const;

	int getCol()const;
	std::vector<std::string> getIteractions()const;
	std::string getName()const;
	bool isBase()const;

	void print()const;
};
#endif // !AIR_H

