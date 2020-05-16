#ifndef EARTH_H
#define EARTH_H

#include "Element.h"
#include <vector>
#include <string>

class Earth:
	public Element
{
protected:
	std::vector<std::string> iteractions;
public:
	Earth();
	Earth(int & col);

	int getCol()const;
};
#endif // !EARTH_H

