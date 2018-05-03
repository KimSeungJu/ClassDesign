#include "MyStack.h"

void main()
{
	MyStack<int> intStack(2);
	intStack.Push(10);
	intStack.Push(20);
	intStack.Print();
	intStack.Push(30);
	intStack.Push(40);
	intStack.Print();
	intStack.Pop();
	intStack.Pop();
	intStack.Print();

	/*
	MyStack<int> intStack(5);
	MyStack<double> doubleStack(20);
	MyStack<char> charStack(10);

	intStack.Push(10);
	intStack.Push(20);
	intStack.Push(30);
	intStack.Push(40);
	intStack.Print();

	doubleStack.Push(1.23);
	doubleStack.Push(2.34);
	doubleStack.Push(3.45);
	doubleStack.Push(4.56);
	doubleStack.Print();

	charStack.Push('a');
	charStack.Push('b');
	charStack.Push('c');
	charStack.Push('d');
	charStack.Print();
	*/

	/*
	intStack.Pop();
	intStack.Print();
	cout <<  intStack.Seek() << endl;
	intStack.Print();
	*/
}