#pragma once
//IQ Mod�� ��ӹ޾� cos �Լ��� �����ϴ� �Լ�
#include "IQmod.h"
#include <math.h>

//I(t)cos2pift = sqrt(I^2+Q^2) * cos(2pift - tan^-1(Q/I))
class CosFunction : public IQmod {

private :
	double amp; // sqrt(I^2+Q^2)
	double phase; // tan^-1(Q/I)
	double frequency = 1; //���ļ� ���� ���Ǹ� ���� 1�� ��
	const double pi = 3.14; //���̰�

public:
	//������
	CosFunction(int i = 0, int q = 0);

	//cos �Լ��� �׷��ִ� �Լ�
	void Draw();

};