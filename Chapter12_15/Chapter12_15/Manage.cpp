#include "Manage.h"

Manage::Manage() {
	name = "";
	age = 0;
	gender = true;
	no = "";
	salary = 0;
	department = "";
	bonus = 0;
}
Manage::Manage(string n, int a, bool g, string num, int s, string d, int b)
{
	name = n;
	age = a;
	gender = g;
	no = num;
	salary = s;
	department = d;
	bonus = b;
}
void Manage::Print()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << gender << endl;
	cout << "�ѹ� : " << no << endl;
	cout << "���� : " << salary << endl;
	cout << "�μ� : " << department << endl;
	cout << "���ʽ� : " << bonus << endl;
}