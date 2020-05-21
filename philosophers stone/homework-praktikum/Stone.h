#ifndef STONE_H
#define STONE_H

#include "Fire.h"
#include "Water.h"

class Stone :
	public Fire, public Water
{
public:
	Stone();
	Stone(int &col);

	void increaseCol(int& n);
	void decreaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;


	void print()const;
};
#endif // !STONE_H

