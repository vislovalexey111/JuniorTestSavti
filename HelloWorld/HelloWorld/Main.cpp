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
	std::cout << std::endl;

	FigureList fl2(fl);
	fl2.PrintFigures();
	std::cout << std::endl;

	fl2.AddFigure(c2);
	fl2.PrintFigures();
	std::cout << std::endl;

	FigureList fl3;
	fl3.AddFigure(Circle(2.4));
	fl3.PrintFigures();
	std::cout << std::endl;

	fl3 = fl + fl2;
	fl3.PrintFigures();

	std::cin.get();
	return 0;
}