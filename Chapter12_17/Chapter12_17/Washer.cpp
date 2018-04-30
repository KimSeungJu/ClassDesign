#include "Washer.h"

Washer::Washer(int p, string m, string col, float c)
{
	price = p;
	model = m;
	color = col;
	capacity = c;
}
void Washer::Prn()
{
	cout << ">> 세탁기 <<" << endl;
	cout << "품명 : " << model << endl;
	cout << "가격 : " << price << endl;
	cout << "색상 : " << color << endl;
	cout << "용량 : " << capacity << endl;
}
