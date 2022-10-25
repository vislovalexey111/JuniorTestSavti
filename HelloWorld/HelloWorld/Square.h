#pragma once

#include "Figure.h"

class Square : public Figure
{
private:
	double m_sideSize;
public:
	Square(double sideSize = 1.0);
	~Square();

	void Print();
};