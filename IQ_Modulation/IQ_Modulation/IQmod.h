#pragma once
#include <iostream>

using namespace std;

//IQ Modulation을 위한 클래스
class IQmod
{
protected:
	int I;
	int Q;

public :
	IQmod(int i = 0, int q = 0); //생성자
	~IQmod(); //소멸자

	//get,set 함수
	int GetI() const { return I; }
	int GetQ() const { return Q; }

	void SetI(int i) { I = i; }
	void SetQ(int q) { Q = q; }
	void SetIQ(int i = 0, int q = 0) { I = i; Q = q; }

	IQmod operator +(const IQmod &other) const; //+ 연산자 오버로딩
	IQmod operator -(const IQmod &other) const; //- 연산자 오버로딩
	IQmod operator -() const; //-연산자 부호처리 오버로딩
	IQmod operator ++(int); //++ 연산자 오버로딩 (후행처리)
	IQmod operator --(int); //-- 연산자 오버로딩 (후행처리)

	void ShowIQmod() const; //출력함수

public :
	friend IQmod & operator ++(IQmod &other); //++ 연산자 오버로딩 (선행처리)
	friend IQmod & operator --(IQmod &other); //-- 연산자 오버로딩 (선행처리)
	friend ostream & operator << (ostream &os, IQmod &other); //<< 출력스트림 오버로딩


};