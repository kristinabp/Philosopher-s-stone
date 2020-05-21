#ifndef METAL_H
#define METAL_H

#include "Earth.h"
#include "Fire.h"

class Metal:
	public Earth, public Fire
{
public:
	Metal();
	Metal(int& col);

	void increaseCol(int& n);
	void decreaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;


	void print()const;


};

#endif // !METAL_H
