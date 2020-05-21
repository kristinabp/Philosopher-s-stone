#include "Element.h"

Element::Element():col(0), iteractions(std::vector<std::string>())
{
}

Element::Element(const int & col):col(col)
{
	this->iteractions = std::vector<std::string>();
}
