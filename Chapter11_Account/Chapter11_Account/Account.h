#pragma once
#include <iostream>
#include <string>
using namespace std;

//Account Class
class Account
{
private: //�������
	string accountNum;
	string name;
	int balance;

public: //����Լ�
	//������
	Account(string a = NULL, string b = NULL, int c = 0);
	void deposit(int);//�Ա��Լ�
	void withdraw(int);//����Լ�
	void getBalance() const;//���� �ܰ� ����Լ�
	void prnAccount() const;//�������� ����Լ�

};