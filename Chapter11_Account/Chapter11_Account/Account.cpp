#include "Account.h"
//������
Account::Account(string a, string b, int c)
{
	accountNum = a;
	name=b;
	balance=c;
	
}
void Account::deposit(int d)//�Ա�
{
	cout << accountNum << "���¿� " << d << "�� �Ա�\n";
	balance += d;
}
void Account::withdraw(int w)//���
{
	if (balance >= w)
	{
		cout << accountNum << "���¿��� " << w << "�� ���\n";
		balance -= w;
	}
}
void Account::getBalance()const//���� �ܰ� ���
{
	cout << accountNum << "������ ���� �ܰ�� " << balance << "�Դϴ�.\n";
}
void Account::prnAccount()const//�������� ���
{
	cout << "�������� : ���¹�ȣ :" << accountNum << " ���� ������ �̸� : " << name << " �ܰ� : " << balance << endl;

}