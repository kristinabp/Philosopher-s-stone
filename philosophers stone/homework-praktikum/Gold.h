#pragma once
#include "Metal.h"

class Gold :
	public Metal
{
public:
	Gold();
	Gold(int &col);

	void increaseCol(int& n);
	void decreaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;
	std::string getName()const;


	void print()const;

};

