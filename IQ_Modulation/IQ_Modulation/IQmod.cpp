#include "IQmod.h"

//����Լ�
IQmod::IQmod(int i, int q) : I(i), Q(q) {} //������
IQmod::~IQmod() {} //�Ҹ���

//������ �����ε�
IQmod IQmod::operator +(const IQmod &other) const //+ ������ �����ε�
{
	IQmod retObj;
	retObj.I = this->I + other.I;
	retObj.Q = this->Q + other.Q;

	return retObj;
}
IQmod IQmod::operator -(const IQmod &other) const //- ������ �����ε�
{
	IQmod retObj;
	retObj.I = this->I - other.I;
	retObj.Q = this->Q - other.Q;

	return retObj;

}
IQmod IQmod::operator -() const //-������ ��ȣó�� �����ε�
{
	IQmod retObj;
	retObj.I = -this->I;
	retObj.Q = -this->Q;

	return retObj;

}
IQmod IQmod::operator ++(int) //++ ������ �����ε� (����ó��)
{
	IQmod retObj;
	retObj.I = this->I;
	retObj.Q = this->Q;

	this->I++;
	this->Q++;

	return retObj;

}
IQmod IQmod::operator --(int) //-- ������ �����ε� (����ó��)
{
	IQmod retObj;
	retObj.I = this->I;
	retObj.Q = this->Q;

	this->I--;
	this->Q--;

	return retObj;
}
//��� �Լ�
void IQmod::ShowIQmod() const
{
	cout << "I : " << I << "Q : " << Q  << endl;
}

//������ �Լ�

IQmod & operator ++(IQmod &other) //++ ������ �����ε� (����ó��)
{
	other.I++;
	other.Q++;
	return other;
}
IQmod & operator --(IQmod &other) //-- ������ �����ε� (����ó��)
{
	other.I--;
	other.Q--;
	return other;
}
ostream & operator << (ostream &os, IQmod &other) // << ��½�Ʈ�� �����ε�
{
	os << "I : " << other.I << "Q : " << other.Q << endl;
	return os;
}