#include "Water.h"

Water::Water():Element()
{
	iteractions.push_back("air");
	iteractions.push_back("fire");
}

Water::Water(int & col):Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("fire");
}

int Water::getCol() const
{
	return this->col;
}
