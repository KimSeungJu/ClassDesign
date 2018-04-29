#pragma once
#include <iostream>

using namespace std;

//IQ Modulation�� ���� Ŭ����
class IQmod
{
protected:
	int I;
	int Q;

public :
	IQmod(int i = 0, int q = 0); //������
	~IQmod(); //�Ҹ���

	//get,set �Լ�
	int GetI() const { return I; }
	int GetQ() const { return Q; }

	void SetI(int i) { I = i; }
	void SetQ(int q) { Q = q; }
	void SetIQ(int i = 0, int q = 0) { I = i; Q = q; }

	IQmod operator +(const IQmod &other) const; //+ ������ �����ε�
	IQmod operator -(const IQmod &other) const; //- ������ �����ε�
	IQmod operator -() const; //-������ ��ȣó�� �����ε�
	IQmod operator ++(int); //++ ������ �����ε� (����ó��)
	IQmod operator --(int); //-- ������ �����ε� (����ó��)

	void ShowIQmod() const; //����Լ�

public :
	friend IQmod & operator ++(IQmod &other); //++ ������ �����ε� (����ó��)
	friend IQmod & operator --(IQmod &other); //-- ������ �����ε� (����ó��)
	friend ostream & operator << (ostream &os, IQmod &other); //<< ��½�Ʈ�� �����ε�


};