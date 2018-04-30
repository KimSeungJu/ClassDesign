#include "Person.h"

Person::Person()
{
	//기본 생성자 널 값만, char은 대입이 안됨
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
	cout << "이름	 : " << name << endl;
	cout << "주소	 : " << address << endl;
	cout << "휴대폰 번호 : " << phone << endl;
}