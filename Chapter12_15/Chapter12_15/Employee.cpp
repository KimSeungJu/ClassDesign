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
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
	cout << "성별 : " << gender << endl;
	cout << "넘버 : " << no << endl;
	cout << "연봉 : " << salary << endl;
	cout << "부서 : " << department << endl;
}