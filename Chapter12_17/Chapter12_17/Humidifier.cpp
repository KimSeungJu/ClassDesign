#include "Humidifier.h"

Humidifier::Humidifier(int p, string m, string col,bool a)
{
	price = p;
	model = m;
	color = col;
	au = a;
}
void Humidifier::Prn()
{
	cout << ">> ������ <<" << endl;
	cout << "ǰ�� : " << model << endl;
	cout << "���� : " << price << endl;
	cout << "���� : " << color << endl;
	cout << "�ڵ� : " << au << endl;
}
