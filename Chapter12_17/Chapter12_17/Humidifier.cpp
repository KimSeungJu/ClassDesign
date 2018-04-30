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
	cout << ">> 가습기 <<" << endl;
	cout << "품명 : " << model << endl;
	cout << "가격 : " << price << endl;
	cout << "색상 : " << color << endl;
	cout << "자동 : " << au << endl;
}
