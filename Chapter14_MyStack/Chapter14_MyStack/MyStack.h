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
	MyStack(int s); //�����Ҵ��ϸ� �Ҹ��� �����ߵ�
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
	size = 10; //�ʱ� ũ�� 10���� ����
	stack = new T[size]; //c++ �޸� �Ҵ翡 new ��
}

template <typename T>
MyStack<T>::MyStack(int s)
{
	top = -1;
	size = s;
	stack = new T[size]; //c++ �޸� �Ҵ翡 new ��
}

template <typename T>
MyStack<T>::~MyStack()
{
	delete stack; // ���� �޸� ����
}

template <typename T>
void MyStack<T>::Push(T data)
{
	stack[++top] = data;
	if(top+1==size) this->Reallocation(); //���Ҵ�
}

template <typename T>
T MyStack<T>::Pop()
{
	if ((top + 1) == (size / 2)) {  this->Reallocation2(); } //���Ҵ�2
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
	T *temp; //����Ÿ Ÿ������ ����
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
	T *temp; //����Ÿ Ÿ������ ����
	size /= 2;
	temp = new T[size];
	for (int i = 0; i < size ; i++) temp[i] = stack[i];
	delete stack;
	stack = temp;

	cout << endl << "Memory reallocated2!" << endl;
}