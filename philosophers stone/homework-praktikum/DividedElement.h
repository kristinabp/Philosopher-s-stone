#ifndef DIVIDEDELEMENT_H
#define DIVIDEDELEMENT_H

#include "Element.h"
#include "Air.h"
#include "Earth.h"
#include "Energy.h"
#include "Fire.h"
#include "Gold.h"
#include "Metal.h"
#include "PhilosophersStone.h"
#include "Spirit.h"
#include "Stone.h"
#include "Water.h"

class DividedElement
{
private:
	Element* el1;
	Element* el2;
public:
	DividedElement(const std::string elem);

	void print()const;

};
#endif // !DIVIDEDELEMENT_H

