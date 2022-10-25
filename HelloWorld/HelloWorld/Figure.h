#pragma once

/*
 * Creating pure "Clone" virtual function to make FigureList objects not referencing
 * the same memory adresses, as the original objects.
 */

struct IFigure
{
	virtual ~IFigure() {}
	virtual void Print() const = 0;
	virtual IFigure* Clone() const = 0;
};