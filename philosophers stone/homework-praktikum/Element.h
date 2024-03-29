#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <vector>
#include <string>

class Element
{
protected:
	int col;
	std::vector<std::string> iteractions;

public:
	Element();
	Element(int col);

	virtual void increaseCol(int n) = 0;
	virtual void decreaseCol(int n) = 0;
	virtual Element* clone()const = 0;

	virtual int getCol()const = 0;
	virtual std::vector<std::string> getIteractions()const = 0;
	virtual std::string getName()const = 0;
	virtual bool isBase()const = 0;

	virtual void print()const = 0;
};
#endif // !ELEMENT.H

