//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//int main()
//{
//	int time = 0;
//	cout << "请输入第一个雇员的工作时间（输入小于0则退出）：";
//	cin >> time;
//	unsigned int count = 0;
//
//	while (time >= 0)
//	{
//		count++;
//		double rale = 0;
//		double temp = 0;
//		cout << "请输入正规工作时间工资：";
//		cin >> rale;
//		if (time > 40)
//		{
//			temp = 40 * rale + 1.5 * (time - 40) * rale;
//		}
//		else
//		{
//			temp = time * rale;
//		}
//		cout << setprecision(2) << fixed;
//		cout << "该雇员工资为：" << temp << "\n" << endl;
//
//		cout << "请输入下一个雇员的工作时间（输入小于0则退出）：";
//		cin >> time;
//	}
//
//	if (count != 0)
//	{
//		cout << "共录入" << count << "名雇员工资信息\n欢迎下次再来！！！" << endl;
//	}
//	else
//	{
//		cout << "未录入，程序退出！！！" << endl;
//	}
//	return 0;
//}