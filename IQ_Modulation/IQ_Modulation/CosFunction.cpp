#include "CosFunction.h"

//������
CosFunction::CosFunction(int i, int q)
{
	amp = sqrt((double)(i*i)+ (double)(q*q));
	phase = atan2((double)q , (double)i);
}

//cos �Լ��� �׷��ִ� �Լ�
void CosFunction::Draw()
{
	double temp; // cos ���� ���� ����
	
	for (int i = 0; i <= 360; i += 15)
	{
		temp = amp*cos(frequency*i*(pi/180.0)-phase); //cos�� ���Ȱ� �־���
		printf("cos(%3d) =  %+.2lf", i, temp);
		for (int j = -20; j < temp * 10; j++)//cos �� ��ŭ �����
			printf(" ");
		printf("*\n");//�ٹٲ�
	}
}