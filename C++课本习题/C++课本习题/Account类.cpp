//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//
//class Account
//{
//public:
//	int balance;    //账户余额 
//	explicit Account(int sum)
//		:balance(sum)
//	{
//		if (sum < 0)
//		{
//			printf("余额无效，设置为0！！！\n");
//			balance = 0;
//		}
//	}
//	void credit(int a)
//	{
//		if (a > 0)
//		{
//			balance += a;
//			printf("[%d]元已经存入当前银行客户！\n", a);
//		}
//		else
//		{
//			printf("输入非法！！！\n[%d]不大于0\n", a);
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
//			printf("已取出[%d]元。\n账户余额：[%d]\n", a, balance);
//		}
//	}
//	int getBalance()
//	{
//		return balance;
//	}
//	void menu()
//	{
//		printf("*******************************************\n");
//		printf("** 1、返回余额  2、存款  3、取款 0、退出 **\n");
//		printf("** 请输入你的选择[0--->3]:               **\n");
//		printf("*******************************************\n");
//	}
//};
//int main()
//{
//	Account a1(5000); //a1账户有5000
//	Account a2(-666); //a2应该为0
//	Account a3(0);    //a3账户为0 
//	int temp = 0;
//	int select = 0;
//
//	//测试 a1
//	a1.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a1.getBalance();
//			printf("当前余额为：[%d]元\n", temp);
//			break;
//		case 2:
//			cout << "请输入要存款的数目：";
//			cin >> temp;
//			a1.credit(temp);
//			break;
//		case 3:
//			cout << "请输入要取款的数目：";
//			cin >> temp;
//			a1.debit(temp);
//			break;
//		case 0:
//			cout << "退出！！！\n" << endl;
//			break;
//		default:
//			cout << "输入有误，请重新输入！！！" << endl;
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
//	//测试a2
//	cout << "a1退出，a2进入" << endl;
//	a2.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a2.getBalance();
//			printf("当前余额为：[%d]元\n", temp);
//			break;
//		case 2:
//			cout << "请输入要存款的数目：";
//			cin >> temp;
//			a2.credit(temp);
//			break;
//		case 3:
//			cout << "请输入要取款的数目：";
//			cin >> temp;
//			a2.debit(temp);
//			break;
//		case 0:
//			cout << "退出！！！\n" << endl;
//			break;
//		default:
//			cout << "输入有误，请重新输入！！！" << endl;
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
//	//测试a3
//	cout << "a2退出，a3进入" << endl;
//	a3.menu();
//	///	 scanf("%d",&select);
//	cin >> select;
//	do {
//		switch (select)
//		{
//		case 1:
//			temp = a3.getBalance();
//			printf("当前余额为：[%d]元\n", temp);
//			break;
//		case 2:
//			cout << "请输入要存款的数目：";
//			cin >> temp;
//			a3.credit(temp);
//			break;
//		case 3:
//			cout << "请输入要取款的数目：";
//			cin >> temp;
//			a3.debit(temp);
//			break;
//		case 0:
//			cout << "退出！！！\n" << endl;
//			break;
//		default:
//			cout << "输入有误，请重新输入！！！" << endl;
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
