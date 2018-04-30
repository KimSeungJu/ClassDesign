#include "Dog.h"


Dog::Dog(int a, int w, string b)
{
	age = a;
	weight = w;
	breed = b;
}
void Dog::speak()//오버라이딩
{
	cout << "멍멍\n";
}
void Dog::print()//오버라이딩
{
	cout << "나이 : " << age << endl;
	cout << "몸무게 : " << weight << endl;
	cout << "품종 : " << breed.c_str() << endl;
}