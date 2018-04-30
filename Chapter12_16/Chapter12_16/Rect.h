#pragma once
#include "Shape.h"

class Rect : public Shape{
protected:
	double width;
	double height;
public :
	Rect();
	Rect(double w, double h);
	double CalcArea();
};