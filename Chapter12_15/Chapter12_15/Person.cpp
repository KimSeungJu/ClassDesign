#include "Person.h"

Person::Person()
{
	name = "";
	age = 0;
	gender = true;
}
Person::Person(string n, int a, bool g)
{
	name = n;
	age = a;
	gender = g;
}
void Person::Print()
{
	cout << "�̸� : " << name <<endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << gender << endl;
}
