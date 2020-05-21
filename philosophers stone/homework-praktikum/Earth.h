#ifndef EARTH_H
#define EARTH_H

#include "Element.h"

class Earth:
	public virtual Element
{
public:
	Earth();
	Earth(int & col);

	void decreaseCol(int& n);
	void increaseCol(int& n);
	int getCol();
	Element* clone()const;

	std::vector<std::string> getIteractions()const;

	void print()const;
};
#endif // !EARTH_H

