#include <iostream>
#include "Square.h"

Square::Square(double sideSize) : Figure()
{
	if (sideSize > 0.0)
		m_sideSize = sideSize;
	else
	{
		std::cout << "ERROR: Bad square, side size will be set to 1.0!" << std::endl;
		m_sideSize = 1.0;
	}
}

Square::~Square()
{
}

void Square::Print()
{
	std::cout << "Square with side size: " << m_sideSize << std::endl;
}