//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//
//class Account
//{
//public:
//	int balance;    //�˻���� 
//	explicit Account(int sum)
//		:balance(sum)
//	{
//		if (sum < 0)
//		{
//			printf("�����Ч������Ϊ0������\n");
//			balance = 0;
//		}
//	}
//	void credit(int a)
//	{
//		if (a > 0)
//		{
//			balance += a;
//			printf("[%d]Ԫ�Ѿ����뵱ǰ���пͻ���\n", a);
//		}
//		else
//		{
//			printf("����Ƿ�������\n[%d]������0\n", a);
//		}
//	}
//	void debit(int a)
//	{
//		if (balance < a)
//		{
//			printf("Debit amount exceeded account balance.\n");
//		}
//		else
//		{
//			balance -= a;
//			printf("��ȡ��[%d]Ԫ��\n�˻���[%d]\n", a, balance);
//		}
//	}
//	int getBalance()
//	{
//		return balance;
//	}
//	void menu()
//	{
//		printf("*******************************************\n");
//		printf("** 1���������  2�����  3��ȡ�� 0���˳� **\n");
//		printf("** ���������ѡ��[0--->3]:               **\n");
//		printf("*******************************************\n");
//	}
//};
//int main()
//{
//	Account a1(5000); //a1�˻���5000
//	Account a2(-666); //a2Ӧ��Ϊ0
//	Account a3(0);    //a3�˻�Ϊ0 
//	int temp = 0;
//	int select = 0;
//
//	//���� a1
//	a1.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a1.getBalance();
//			printf("��ǰ���Ϊ��[%d]Ԫ\n", temp);
//			break;
//		case 2:
//			cout << "������Ҫ������Ŀ��";
//			cin >> temp;
//			a1.credit(temp);
//			break;
//		case 3:
//			cout << "������Ҫȡ�����Ŀ��";
//			cin >> temp;
//			a1.debit(temp);
//			break;
//		case 0:
//			cout << "�˳�������\n" << endl;
//			break;
//		default:
//			cout << "�����������������룡����" << endl;
//			break;
//		}
//		if (select != 0)
//		{
//			a1.menu();
//			cin >> select;
//		}
//		//	 	scanf("%d",&select);
//	} while (select);
//
//
//
//	//����a2
//	cout << "a1�˳���a2����" << endl;
//	a2.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a2.getBalance();
//			printf("��ǰ���Ϊ��[%d]Ԫ\n", temp);
//			break;
//		case 2:
//			cout << "������Ҫ������Ŀ��";
//			cin >> temp;
//			a2.credit(temp);
//			break;
//		case 3:
//			cout << "������Ҫȡ�����Ŀ��";
//			cin >> temp;
//			a2.debit(temp);
//			break;
//		case 0:
//			cout << "�˳�������\n" << endl;
//			break;
//		default:
//			cout << "�����������������룡����" << endl;
//			break;
//		}
//		if (select != 0)
//		{
//			a2.menu();
//			cin >> select;
//		}
//		//	 	scanf("%d",&select);
//	} while (select);
//
//
//
//	//����a3
//	cout << "a2�˳���a3����" << endl;
//	a3.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a3.getBalance();
//			printf("��ǰ���Ϊ��[%d]Ԫ\n", temp);
//			break;
//		case 2:
//			cout << "������Ҫ������Ŀ��";
//			cin >> temp;
//			a3.credit(temp);
//			break;
//		case 3:
//			cout << "������Ҫȡ�����Ŀ��";
//			cin >> temp;
//			a3.debit(temp);
//			break;
//		case 0:
//			cout << "�˳�������\n" << endl;
//			break;
//		default:
//			cout << "�����������������룡����" << endl;
//			break;
//		}
//		if (select != 0)
//		{
//			a3.menu();
//			cin >> select;
//		}
//		//	 	scanf("%d",&select);
//	} while (select);
//	return EXIT_SUCCESS;
//}
