#ifndef METAL_H
#define METAL_H

#include "Earth.h"
#include "Fire.h"

class Metal:
	public Earth, public Fire
{
public:
	Metal();
	Metal(int col);

	void increaseCol(int n);
	void decreaseCol(int n);
	Element* clone()const;

	int getCol()const;
	std::vector<std::string> getIteractions()const;
	std::string getName()const;
	bool isBase()const;

	void print()const;

};

#endif // !METAL_H
