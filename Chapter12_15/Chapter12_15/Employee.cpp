#include "Employee.h"

Employee::Employee() {
	name = "";
	age = 0;
	gender = true;
	no = "";
	salary = 0;
	department = "";
}
Employee::Employee(string n, int a, bool g, string num, int s, string d)
{
	name = n;
	age = a;
	gender = g;
	no = num;
	salary = s;
	department = d;
}
void Employee::Print()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << gender << endl;
	cout << "�ѹ� : " << no << endl;
	cout << "���� : " << salary << endl;
	cout << "�μ� : " << department << endl;
}