#include "Animal.h"

Animal::Animal()
{
	age = 0;
	weight = 0;
}
Animal::Animal(int a, int w)
{
	age = a;
	weight = w;
}
void Animal::sleep()
{
	cout << "�ڴ�\n";
}
void Animal::eat()
{
	cout << "�Դ�\n";
}
void Animal::print()
{
	cout << "���� : " << age << endl;
	cout << "������ : " << weight << endl;
}