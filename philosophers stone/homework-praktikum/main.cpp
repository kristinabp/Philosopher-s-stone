#include <iostream>
#include "Metal.h"
#include <fstream>

#include "AlchemicalBook.h"
int main()
{
	/*std::vector<std::string> elements;
	std::string result;
	std::fstream inputFile;
	inputFile.open("test.txt", std::ios::in);
	if (inputFile.is_open())
	{
		std::string temp;
		getline(inputFile, temp);
		int i = 0;
		std::string tempEl;
		while (i < temp.size())
		{
			if (temp[i] != '+' && temp[i] != '=' )
			{
				tempEl.push_back(temp[i]);
				i++;
			}
			else if (temp[i] == '=' )
			{
				for (size_t k = i+1; k < temp.size(); k++)
				{
					result.push_back(temp[k]);
				}
				break;
			}
			else
			{
				elements.push_back(tempEl);
				tempEl = "";
				i++;
			}
		}
		elements.push_back(tempEl);

		inputFile.close();
	}
	std::cout << elements.size();
	for (size_t i = 0; i < elements.size(); i++)
	{
		std::cout << elements[i];
	}
	std::cout << result;
*/

	AlchemicalBook a;
	a.read("test.txt");
	a.print();

	return system("pause");
}