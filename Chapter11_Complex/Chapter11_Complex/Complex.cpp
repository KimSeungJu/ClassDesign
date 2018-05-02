#include "Complex.h"

//생성자
Complex::Complex(int r, int i) : real(r), image(i) {}
//출력 함수
void Complex::ShowComplex() const
{
	if(image>=0)
	cout << "(" << real << "+" << image << "i)" << endl;
	else
	cout << "(" << real << image << "i)" << endl;
}
//7. 두 복소수 객체를 곱하는 함수
Complex Complex::operator *(const Complex &other) const
{
	Complex retObj;

	retObj.real = (this->real * other.real) - (this->image * other.image);
	retObj.image = (this->real * other.image) + (this->image * other.real);

	return retObj;

}

//9. 객체를 1만큼 감소(선행처리)
Complex Complex::subOnePrefix()
{
	Complex retObj;

	retObj.real = --this->real;
	retObj.image = --this->image;
	
	//this->real--;
	//this->image--;

	return retObj;

}

//++연산자 후행처리
Complex Complex::operator ++ (int)
{
	Complex retObj;

	retObj.real = this->real;
	retObj.image = this->image;

	this->real++;
	this->image++;

	return retObj;

}
//--연산자 후행처리
Complex Complex::operator -- (int)
{
	Complex retObj;

	retObj.real = this->real;
	retObj.image = this->image;

	this->real--;
	this->image--;

	return retObj;
}