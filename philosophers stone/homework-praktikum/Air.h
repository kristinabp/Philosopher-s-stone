#ifndef AIR_H
#define AIR_H

#include "Element.h"

class Air:
	public virtual Element
{
protected:
public:
	Air();
	Air(int &col);

	void decreaseCol(int& n);
	void increaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;

	void print()const;
};
#endif // !AIR_H

