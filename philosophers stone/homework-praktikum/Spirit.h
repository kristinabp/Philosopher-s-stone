#ifndef SPIRIT_H
#define SPIRIT_H

#include "Air.h"

class Spirit :
	public Air
{
public:
	Spirit();
	Spirit(int &col);

	void increaseCol(int& n);
	void decreaseCol(int& n);
	Element* clone()const;

	std::vector<std::string> getIteractions()const;


	void print()const;

};
#endif // !SPIRIT_H

