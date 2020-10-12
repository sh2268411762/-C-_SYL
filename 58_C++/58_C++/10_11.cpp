//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	void fun()
//	{
//		cout << this << endl;
//	}
//};
//
//class Date
//{
//public:
//	void setDate(int _year, int _month, int _day)
//	{
//		this->year = _year;
//		this->month = _month;
//		this->day = _day;
//	}
//
//	Date(int _year, int _month, int _day)
//	{
//		this->year = _year;
//		this->month = _month;
//		this->day = _day;
//	}
//
//	Date()
//	{
//		year = 1900;
//		month = 1;
//		day = 1;
//	}
//
//	~Date()
//	{
//		cout << "析构函数，不能重载，无参，无返回值" << endl;
//	}
//	void printDate()
//	{
//		cout << this->year << ":" << this->month << ":" << this->day << endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//
//};
//
//
//int main()
//{
//	Date d1(2019,9,10);  //有参构造函数
//	d1.printDate();
//	Date d2; //无参构造函数
//	d2.setDate(2020, 10, 11);
//	d2.printDate();
//
//	return 0;
//}
//
////int main()
////{
////	A a1, a2, a3;
////	a1.fun();
////
////	A* pa = &a1;
////	pa->fun();
////	//对象.成员函数时，this不可为空
////	//p->成员函数，p为nullptr，则，this为nullptr
////	return 0;
////}