#include "Customer.h"

Customer::Customer()
{
	//�⺻ ������ �� ����, char�� ������ �ȵ�
	strcpy(name, "");
	strcpy(address, "");
	strcpy(phone, "");
	strcpy(id, "");
	point = 0;
}

Customer::Customer(char *name, char *address, char *phone ,char *id, int point)
{
	strcpy(this->name, name);
	strcpy(this->address, address);
	strcpy(this->phone, phone);
	strcpy(this->id, phone);
	this->point = point;
}

void Customer::print()
{
	cout << "�̸�	 : " << name << endl;
	cout << "�ּ�	 : " << address << endl;
	cout << "�޴��� ��ȣ : " << phone << endl;
	cout << "���̵� : " << id << endl;
	cout << "����Ʈ ���� : " << point << endl;
}