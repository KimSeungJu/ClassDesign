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
	cout << "�Ŀ�" << endl;
}
void Taxi::Prn()
{
	cout << "�𵨸� : " << model << endl;
	cout << "���� : " << color  << endl;
	if (meter == true)
	{
		cout << "��� : " << fare << endl;
	}
	else
	{
		cout << "���ͱⰡ �����ֽ��ϴ�.\n";
	}
}