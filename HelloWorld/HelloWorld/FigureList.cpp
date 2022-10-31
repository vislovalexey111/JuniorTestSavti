#include <iostream>
#include "FigureList.h"

FigureList::FigureList(const FigureList& otherList) { Add(otherList); }
FigureList::~FigureList() { Clear(); }

FigureList FigureList::operator=(const FigureList& otherList)
{
	Clear();
	Add(otherList);

	return *this;
}

FigureList FigureList::operator+(const FigureList& otherList) const
{
	FigureList tempFigureList(*this);
	tempFigureList.Add(otherList);

	return tempFigureList;
}

void FigureList::operator+=(const FigureList& otherList)
{
	for (auto p : otherList.m_figures) *this += p;
}

void FigureList::operator+=(const IFigure* figure)
{
	m_figures.push_back(figure->Clone());
}

void FigureList::PrintFigures() const
{
	for (auto p : m_figures) p->Print();
}

void FigureList::Add(const FigureList& otherList)
{
	*this += otherList;
}

inline void FigureList::Clear()
{
	for (auto p : m_figures)
		delete p;

	m_figures.clear();
}