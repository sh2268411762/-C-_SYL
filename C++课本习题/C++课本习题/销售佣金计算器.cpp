//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//int main()
//{
//	double sale = 0;
//	cout << "请输入第一个销售员上周推销毛利（输入小于0则退出）：";
//	cin >> sale;
//	unsigned int count = 0;
//
//	while (sale >= 0)
//	{
//		count++;
//		double temp = 200 + sale * 0.09;
//		cout << setprecision(2) << fixed;
//		cout << "该销售员上周工资为：" << temp << endl;
//
//		cout << "\n请输入下一个销售员上周推销毛利（输入小于0则退出）：";
//		cin >> sale;
//	}
//
//	if (count != 0)
//	{
//		cout << "共录入" << count << "名销售员信息\n欢迎下次再来！！！" << endl;
//	}
//	else
//	{
//		cout << "未录入，程序退出！！！" << endl;
//	}
//	return 0;
//}