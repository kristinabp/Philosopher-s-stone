#include "AlchemicalBook.h"

AlchemicalBook::AlchemicalBook():formulas(std::vector<Formula*>())
{
}

AlchemicalBook::AlchemicalBook(std::vector<Formula*> formulas)
{
}

void AlchemicalBook::addFormula(std::vector<std::string> elements, std::string result)
{
	if (elements.empty())
	{
		this->formulas.push_back(new Formula(result));
	}
	else
	{
		for (size_t i = 0; i < elements.size(); i++)
		{
			
		}
	}
	
}

void AlchemicalBook::read(const std::string fileName)
{
	std::fstream inputFile;
	inputFile.open(fileName, std::ios::in);
	if (inputFile.is_open())
	{
		std::vector<std::string> elements;
		std::string result;

		std::string temp;
		
		int i = 0;
		while (getline(inputFile, temp))
		{
			i = 0;
			if (temp[i] == '/')
			{
				result = temp;

			}
			else
			{
				std::string tempEl;
				while (i < temp.size())
				{
					if (temp[i] != '+' && temp[i] != '=')
					{
						tempEl.push_back(temp[i]);
						i++;
					}
					else if (temp[i] == '=')
					{
						for (size_t k = i + 1; k < temp.size(); k++)
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
			}

			if (elements.empty())
			{
				addFormula({}, result);
			}
			else
			{
				addFormula(elements, result);
			}
			

			elements.clear();
			result = "";
		}

		inputFile.close();
	}
	else
	{
		std::cout << "Couldn't open the file\n";
	}
}

void AlchemicalBook::print() const
{
	for (size_t i = 0; i < formulas.size(); i++)
	{
		formulas[i]->print();
	}
}
