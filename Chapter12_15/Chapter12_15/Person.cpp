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
	cout << "이름 : " << name <<endl;
	cout << "나이 : " << age << endl;
	cout << "성별 : " << gender << endl;
}
