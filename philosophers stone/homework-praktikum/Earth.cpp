#include "Earth.h"

Earth::Earth() : Element()
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
}

Earth::Earth(int & col): Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
}

int Earth::getCol() const
{
	return this->col;
}
