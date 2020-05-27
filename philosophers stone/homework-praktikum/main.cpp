#include <iostream>
#include "Metal.h"
#include <fstream>

#include "AlchemicalBook.h"
#include "Alchemist.h"

int main()
{
	AlchemicalBook a;
	a.read("test.txt");

	Alchemist alchemist(a, { });
	alchemist.addElement(new Earth(3));
	alchemist.addElement(new Fire(4));
	alchemist.addElement(new Water(2));
	alchemist.addElement(new Air(10));

	alchemist.print();

	std::cout << "-------------------\n";
	std::cout << "Philosopher's stone created: ";
	if (alchemist.createPhilosophersStone())
	{
		std::cout << "Yes\n";
	}
	else
	{
		std::cout << "No\n";
	}

	return system("pause");
}