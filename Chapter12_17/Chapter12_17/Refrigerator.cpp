#include "Refrigerator.h"

Refrigerator::Refrigerator(int p, string m, string col,int c)
{
	price = p;
	model = m;
	color = col;
	capacity = c;
}
void Refrigerator::Prn()
{
	cout << ">> ≥√¿Â∞Ì <<" << endl;
	cout << "øÎ∑Æ : " << capacity << endl;
}