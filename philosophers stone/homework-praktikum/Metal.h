#ifndef METAL_H
#define METAL_H

#include "Earth.h"
#include "Fire.h"

class Metal :
	public Earth, public Fire
{
public:
	Metal();
	Metal(int& col1, int& col2);

};

#endif // !METAL_H
