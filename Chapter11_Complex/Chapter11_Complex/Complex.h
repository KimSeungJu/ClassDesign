#pragma once
#include <iostream>
using namespace std;

//Complex Class
class Complex {

private: //�������
	int real;
	int image;

public: // ����Լ� Complex.cpp�� ����
	//������
	Complex(int r = 0, int i = 0);
	//GET �Լ�
	int GetReal() const { return real; }
	int GetImage() const { return image; }
	//SET �Լ�
	void SetReal(int r) { real = r; }
	void SetImage(int i) { image = i; }
	void SetComplex(int r = 0, int i = 0) { real = r; image = i; }
	//��� �Լ�
	void ShowComplex() const;
	//7. �� ���Ҽ� ��ü�� ���ϴ� �Լ�
	Complex operator *(const Complex &other) const; 
	//9. ��ü�� 1��ŭ ����(����ó��)
	Complex subOnePrefix();
	// ++ ������ ����ó��
	Complex operator ++ (int);//a++
	// -- ������ ����ó��
	Complex operator -- (int);//a--

public: // ComplexTest.cpp�� ����
	//8. �� ���Ҽ� ��ü�� ���� �Լ�
	friend Complex Sub(const Complex &a, const Complex &b);
	//10. ��ü�� 1��ŭ ����(����ó��)
	friend Complex subOnePostfix(Complex &a);
	//11. ���׿����� - �����ε�
	friend Complex operator- (const Complex &other,const Complex &other2);
	// ++ ������ ����ó��
	friend Complex & operator ++ (Complex &other);//++a
	// -- ������ ����ó��
	friend Complex & operator -- (Complex &other);//--a
};