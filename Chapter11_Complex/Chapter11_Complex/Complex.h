#pragma once
#include <iostream>
using namespace std;

//Complex Class
class Complex {

private: //멤버변수
	int real;
	int image;

public: // 멤버함수 Complex.cpp에 구현
	//생성자
	Complex(int r = 0, int i = 0);
	//GET 함수
	int GetReal() const { return real; }
	int GetImage() const { return image; }
	//SET 함수
	void SetReal(int r) { real = r; }
	void SetImage(int i) { image = i; }
	void SetComplex(int r = 0, int i = 0) { real = r; image = i; }
	//출력 함수
	void ShowComplex() const;
	//7. 두 복소수 객체를 곱하는 함수
	Complex operator *(const Complex &other) const; 
	//9. 객체를 1만큼 감소(선행처리)
	Complex subOnePrefix();
	// ++ 연산자 후행처리
	Complex operator ++ (int);//a++
	// -- 연산자 후행처리
	Complex operator -- (int);//a--

public: // ComplexTest.cpp에 구현
	//8. 두 복소수 객체를 빼는 함수
	friend Complex Sub(const Complex &a, const Complex &b);
	//10. 객체를 1만큼 감소(후행처리)
	friend Complex subOnePostfix(Complex &a);
	//11. 이항연산자 - 오버로딩
	friend Complex operator- (const Complex &other,const Complex &other2);
	// ++ 연산자 선행처리
	friend Complex & operator ++ (Complex &other);//++a
	// -- 연산자 선행처리
	friend Complex & operator -- (Complex &other);//--a
};