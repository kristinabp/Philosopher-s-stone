#ifndef ENERGY_H
#define ENERGY_H

#include "Water.h"
#include "Air.h"


class Energy :
	public Water, public Air
{
public:
	Energy();
	Energy(int col);

	void increaseCol(int n);
	void decreaseCol(int n);
	Element* clone()const;

	int getCol()const;
	std::vector<std::string> getIteractions()const;
	std::string getName()const;
	bool isBase()const;


	void print()const;

};

#endif // !ENERGY_H