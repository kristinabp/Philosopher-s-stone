#ifndef ENERGY_H
#define ENERGY_H


#include "Water.h"
#include "Air.h"


class Energy :
	public Water, public Air
{
public:
	Energy(int &col1, int &col2);

};

#endif // !ENERGY_H