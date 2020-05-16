#pragma once
#include "Air.h"
#include "Water.h"
#include "Fire.h"
#include "Earth.h"


class PhilosophersStone :
	public Air, public Water, public Fire, public Earth
{
private:

public:
	PhilosophersStone();
};

