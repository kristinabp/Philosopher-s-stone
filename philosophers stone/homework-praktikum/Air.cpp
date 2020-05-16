#include "Air.h"

Air::Air():Element()
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
	iteractions.push_back("earth");
}

Air::Air(int & col):Element(col)
{
	iteractions.push_back("air");
	iteractions.push_back("water");
	iteractions.push_back("fire");
	iteractions.push_back("earth");
}

int Air::getCol() const
{
	return this->col;
}
