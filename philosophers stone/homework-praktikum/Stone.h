#ifndef STONE_H
#define STONE_H

#include "Fire.h"
#include "Water.h"

class Stone :
	public Fire, public Water
{
public:
	Stone(int &col1, int &col2);

};
#endif // !STONE_H

