#include "Fire.h"

Fire::Fire(): Element()
{
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
}

Fire::Fire(int & col):Element(col)
{
	iteractions.push_back("fire");
	iteractions.push_back("water");
	iteractions.push_back("earth");
}

int Fire::getCol() const
{
	return this->col;
}
