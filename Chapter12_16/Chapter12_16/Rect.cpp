#include "Rect.h"

Rect::Rect()
{
	width = 0;
	height = 0;
}
Rect::Rect(double w, double h)
{
	width = w;
	height = h;
}
double Rect::CalcArea()
{
	return width * height;
}