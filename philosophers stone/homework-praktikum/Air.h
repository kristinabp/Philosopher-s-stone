#ifndef AIR_H
#define AIR_H

#include "Element.h"
#include <vector>
#include <string>

class Air:
	public Element
{
protected:
	std::vector<std::string> iteractions;

public:
	Air();
	Air(int &col);

	int getCol()const;
};
#endif // !AIR_H

