#include "Person.h"

Person::Person()
{
	//�⺻ ������ �� ����, char�� ������ �ȵ�
	strcpy(name, "");
	strcpy(address, "");
	strcpy(phone, "");
}

Person::Person(char *name, char *address, char *phone)
{
	strcpy(this->name, name);
	strcpy(this->address, address);
	strcpy(this->phone, phone);
}

void Person::print()
{
	cout << "�̸�	 : " << name << endl;
	cout << "�ּ�	 : " << address << endl;
	cout << "�޴��� ��ȣ : " << phone << endl;
}