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
	cout << ">> ��Ź�� <<" << endl;
	cout << "ǰ�� : " << model << endl;
	cout << "���� : " << price << endl;
	cout << "���� : " << color << endl;
	cout << "�뷮 : " << capacity << endl;
}
