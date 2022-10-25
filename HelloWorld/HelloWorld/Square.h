#pragma once

#include "Figure.h"

class Square : public IFigure
{
private:
	double m_sideSize;
public:
	Square(double sideSize = 1.0);
	~Square() {}

	void Print() const override;
	Square* Clone() const override;
};