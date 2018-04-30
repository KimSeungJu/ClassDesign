#include "Taxi.h"

Taxi::Taxi()
{
	model = "";
	color = "";
	meter = false;
	fare = 2000;
}
Taxi::Taxi(string m, string c)
{
	model = m;
	color = c;
	meter = false;
	fare = 2000;
}
Taxi::Taxi(string m, string c, bool met, int f)
{
	model = m;
	color = c;
	meter = met;
	fare = f;
}
void Taxi::Power()
{
	cout << "파워" << endl;
}
void Taxi::Prn()
{
	cout << "모델명 : " << model << endl;
	cout << "색상 : " << color  << endl;
	if (meter == true)
	{
		cout << "요금 : " << fare << endl;
	}
	else
	{
		cout << "미터기가 꺼져있습니다.\n";
	}
}