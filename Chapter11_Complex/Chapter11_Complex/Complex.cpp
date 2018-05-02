#include "Complex.h"

//������
Complex::Complex(int r, int i) : real(r), image(i) {}
//��� �Լ�
void Complex::ShowComplex() const
{
	if(image>=0)
	cout << "(" << real << "+" << image << "i)" << endl;
	else
	cout << "(" << real << image << "i)" << endl;
}
//7. �� ���Ҽ� ��ü�� ���ϴ� �Լ�
Complex Complex::operator *(const Complex &other) const
{
	Complex retObj;

	retObj.real = (this->real * other.real) - (this->image * other.image);
	retObj.image = (this->real * other.image) + (this->image * other.real);

	return retObj;

}

//9. ��ü�� 1��ŭ ����(����ó��)
Complex Complex::subOnePrefix()
{
	Complex retObj;

	retObj.real = --this->real;
	retObj.image = --this->image;
	
	//this->real--;
	//this->image--;

	return retObj;

}

//++������ ����ó��
Complex Complex::operator ++ (int)
{
	Complex retObj;

	retObj.real = this->real;
	retObj.image = this->image;

	this->real++;
	this->image++;

	return retObj;

}
//--������ ����ó��
Complex Complex::operator -- (int)
{
	Complex retObj;

	retObj.real = this->real;
	retObj.image = this->image;

	this->real--;
	this->image--;

	return retObj;
}