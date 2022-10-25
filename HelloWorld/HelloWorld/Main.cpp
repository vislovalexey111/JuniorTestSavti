#include <iostream>
#include "FigureList.h"

int main()
{
	Circle c1(8.4), c2(-2.0);
	Square s(20.4);
	Triangle t(3.0, 2.0, 3.0);
	FigureList fl;
	fl.AddFigure(t);
	fl.AddFigure(s);
	fl.PrintFigures();

	std::cin.get();
	return 0;
}