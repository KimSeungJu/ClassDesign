#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyStack
{
private:
	int top; 
	int size;
	T *stack;

public:
	MyStack();
	MyStack(int s); //동적할당하면 소멸자 만들어야됨
	~MyStack();
	void Push(T data);
	T Pop();
	T Seek();
	void Print();

private :
	void Reallocation();
	void Reallocation2();
};

template <typename T>
MyStack<T>::MyStack()
{
	top = -1;
	size = 10; //초기 크기 10으로 설정
	stack = new T[size]; //c++ 메모리 할당에 new 씀
}

template <typename T>
MyStack<T>::MyStack(int s)
{
	top = -1;
	size = s;
	stack = new T[size]; //c++ 메모리 할당에 new 씀
}

template <typename T>
MyStack<T>::~MyStack()
{
	delete stack; // 스택 메모리 삭제
}

template <typename T>
void MyStack<T>::Push(T data)
{
	stack[++top] = data;
	if(top+1==size) this->Reallocation(); //재할당
}

template <typename T>
T MyStack<T>::Pop()
{
	if ((top + 1) == (size / 2)) {  this->Reallocation2(); } //재할당2
	return stack[top--];
}

template <typename T>
T MyStack<T>::Seek()
{
	return stack[top];
}

template <typename T>
void MyStack<T>::Print()
{
	cout << endl;
	cout << "total : " << (top + 1) << " of " << size << endl;
	for (int i = 0; i <= top; i++) cout << stack[i] << " ";
		cout << endl << endl;
}

template <typename T>
void MyStack<T>::Reallocation()
{
	T *temp; //데이타 타입으로 설정
	size *= 2;
	temp = new T[size];
	for (int i = 0; i <= size/2; i++) temp[i] = stack[i];
	delete stack;
	stack = temp;

	cout << endl << "Memory reallocated!" << endl;
}

template <typename T>
void MyStack<T>::Reallocation2()
{
	T *temp; //데이타 타입으로 설정
	size /= 2;
	temp = new T[size];
	for (int i = 0; i < size ; i++) temp[i] = stack[i];
	delete stack;
	stack = temp;

	cout << endl << "Memory reallocated2!" << endl;
}