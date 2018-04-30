#include "Bird.h"
#include "Dog.h"

void main()
{
	Dog dog(3, 7, "∏ª∆º¡Ó");
	dog.print();
	dog.sleep();
	dog.speak();

	Bird bird(1, 3);
	bird.print();
	bird.sleep();
	bird.speak();

}