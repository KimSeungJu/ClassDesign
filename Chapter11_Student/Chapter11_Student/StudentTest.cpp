#include "Student.h"
//���� �Լ�
void main()
{
	Student stu1(1,"Ȳ����",99,80,95);
	Student stu2(2,"�̹ο�", 60, 80, 90);
	Student stu3(3, "�����", 85, 70, 90);
	cout << "�л���ȣ �̸�   ���� ���� ���� ���� ���\n";
	stu1.print();
	stu2.print();
	stu3.print();
}