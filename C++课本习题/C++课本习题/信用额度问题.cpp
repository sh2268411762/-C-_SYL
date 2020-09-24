//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int number = 0;
//	double beginBalance = 0;   //月初欠款
//	double charges = 0;        //本月消费总金额
//	double credit = 0;         //存入总金额
//	double creditLimit = 0;    //允许的信用额度
//	unsigned int count = 0;
//
//	cout << "请输入第一个顾客账号（小于0则退出）：";
//	cin >> number;
//
//	while (number >= 0)
//	{
//		cout << "请输入该顾客月初欠款：";
//		cin >> beginBalance;
//		cout << "请输入本月该顾客购买总金额：";
//		cin >> charges;
//		cout << "请输入本月该顾客存入的总金额：";
//		cin >> credit;
//		cout << "请输入该顾客允许的信用额度：";
//		cin >> creditLimit;
//		double newBalance = beginBalance + charges - credit;
//		count++;
//		if (newBalance > creditLimit)
//		{
//			cout << "账号    ：" << number << endl;
//			cout << "信用额度：" << creditLimit << endl;
//			cout << "新的欠款：" << newBalance << endl;
//			cout << "Credit Limit Exceeded." << endl;
//		}
//		else
//		{
//			cout << "账号：" << number << "未超支！" << endl;
//		}
//
//		cout << "\n请输入下一个顾客账号（小于0则退出）：";
//		cin >> number;
//	}
//
//	if (count != 0)
//	{
//		cout << "共录入" << count << "名顾客信息\n欢迎下次再来！！！" << endl;
//	}
//	else
//	{
//		cout << "未录入，程序退出！！！" << endl;
//	}
//	return 0;
//}