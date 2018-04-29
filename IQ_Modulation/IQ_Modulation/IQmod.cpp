#include "IQmod.h"

//멤버함수
IQmod::IQmod(int i, int q) : I(i), Q(q) {} //생성자
IQmod::~IQmod() {} //소멸자

//연산자 오버로딩
IQmod IQmod::operator +(const IQmod &other) const //+ 연산자 오버로딩
{
	IQmod retObj;
	retObj.I = this->I + other.I;
	retObj.Q = this->Q + other.Q;

	return retObj;
}
IQmod IQmod::operator -(const IQmod &other) const //- 연산자 오버로딩
{
	IQmod retObj;
	retObj.I = this->I - other.I;
	retObj.Q = this->Q - other.Q;

	return retObj;

}
IQmod IQmod::operator -() const //-연산자 부호처리 오버로딩
{
	IQmod retObj;
	retObj.I = -this->I;
	retObj.Q = -this->Q;

	return retObj;

}
IQmod IQmod::operator ++(int) //++ 연산자 오버로딩 (후행처리)
{
	IQmod retObj;
	retObj.I = this->I;
	retObj.Q = this->Q;

	this->I++;
	this->Q++;

	return retObj;

}
IQmod IQmod::operator --(int) //-- 연산자 오버로딩 (후행처리)
{
	IQmod retObj;
	retObj.I = this->I;
	retObj.Q = this->Q;

	this->I--;
	this->Q--;

	return retObj;
}
//출력 함수
void IQmod::ShowIQmod() const
{
	cout << "I : " << I << "Q : " << Q  << endl;
}

//프렌즈 함수

IQmod & operator ++(IQmod &other) //++ 연산자 오버로딩 (선행처리)
{
	other.I++;
	other.Q++;
	return other;
}
IQmod & operator --(IQmod &other) //-- 연산자 오버로딩 (선행처리)
{
	other.I--;
	other.Q--;
	return other;
}
ostream & operator << (ostream &os, IQmod &other) // << 출력스트림 오버로딩
{
	os << "I : " << other.I << "Q : " << other.Q << endl;
	return os;
}