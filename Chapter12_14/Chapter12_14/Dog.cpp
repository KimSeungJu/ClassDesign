#include "Dog.h"


Dog::Dog(int a, int w, string b)
{
	age = a;
	weight = w;
	breed = b;
}
void Dog::speak()//�������̵�
{
	cout << "�۸�\n";
}
void Dog::print()//�������̵�
{
	cout << "���� : " << age << endl;
	cout << "������ : " << weight << endl;
	cout << "ǰ�� : " << breed.c_str() << endl;
}