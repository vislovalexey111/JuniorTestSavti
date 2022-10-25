#include <iostream>
#include "Square.h"

Square::Square(double sideSize) : IFigure()
{
	if (sideSize > 0.0)
		m_sideSize = sideSize;
	else
	{
		std::cout << "ERROR: Bad square, side size will be set to 1.0!" << std::endl;
		m_sideSize = 1.0;
	}
}

void Square::Print() const
{
	std::cout << "Square with side size: " << m_sideSize << std::endl;
}

Square* Square::Clone() const
{
	return new Square(*this);
}
