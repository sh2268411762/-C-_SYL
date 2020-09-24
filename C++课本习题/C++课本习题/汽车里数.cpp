//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	double miles;
//	double gallons;
//
//	//explicit Car(double _miles, double _gallons)
//	//	:miles(_miles), gallons(_gallons)
//	//{
//	//	//构造函数
//	//}
//	void setMiles(double _miles) //设置英里
//	{
//		miles = _miles;
//	}
//	double getMiles()
//	{
//		return miles;
//	}
//	void setGallons(double _gallons)
//	{
//		gallons = _gallons;
//	}
//	double getGallons()
//	{
//		return gallons;
//	}
//	double getMpg(double mpg,double &t)
//	{
//		if (t == 0)
//		{
//			return mpg;
//		}
//		else
//		{
//			t = (t + mpg) / 2;
//			return t;
//		}
//	}
//};
//
//int main()
//{
//	Car c1;
//	double total = 0;  //总MPG
//	c1.miles = 0;
//	cout << "请输入行驶英里数（输入小于0则退出）：";
//	cin >> c1.miles;
//	c1.setGallons(0);
//	double t = 0;
//
//	while (c1.miles >= 0)
//	{
//		if (c1.miles == 0)
//		{
//			cout << "程序退出！" << endl;
//			break;
//		}
//		else
//		{
//			cout << "请输入行驶" << c1.miles << "英里所费油量：";
//			cin >> c1.gallons;
//			if (c1.gallons <= 0)
//			{
//				cout << "请重新输入：";
//				cin >> c1.gallons;
//			}
////			c1.setMiles(select);
////			c1.setGallons(trip);
//			t = c1.getMiles() / c1.getGallons();
//			total = c1.getMpg(t, total);
//			cout << "本次行程每加仑英里数：" << t << endl;
//			cout << "总行程每加仑英里数  ：" << total << endl;
//
//			cout << "请输入行驶英里数（输入小于0则退出）：";
//			cin >> c1.miles;
//		}
//	}
//	return 0;
//}