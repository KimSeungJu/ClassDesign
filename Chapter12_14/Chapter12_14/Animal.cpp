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
	cout << "ÀÚ´Ù\n";
}
void Animal::eat()
{
	cout << "¸Ô´Ù\n";
}
void Animal::print()
{
	cout << "³ªÀÌ : " << age << endl;
	cout << "¸ö¹«°Ô : " << weight << endl;
}