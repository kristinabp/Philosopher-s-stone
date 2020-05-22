#include <iostream>
#include "Metal.h"
#include <fstream>

#include "AlchemicalBook.h"

int main()
{
	AlchemicalBook a;
	a.read("test.txt");
	a.print();

	return system("pause");
}