//#include <iostream>
//using namespace std;
//
//

//
////友元函数
////访问类的私有和保护成员
//class Time
//{
//	friend class Date;
//public:
//	Time(int _hour = 0, int _minute = 0, int _second = 0)
//		:hour(_hour)
//		,minute(_minute)
//		,second(_second)
//	{
//
//	}
//private:
//	int hour;
//	int minute;
//	int second;
//};
//
//class Date
//{
//	friend class Time;
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	Date(int _year, int _month, int _day)   // 多参数构造函数
//		:year(_year)
//		, month(_month)
//		, day(_day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date(const Date& d)   // 拷贝构造函数
//		:year(d.year)
//		,month(d.month)
//		,day(d.day)
//	{
//		cout << "Date(const Date& d):" << this << endl;
//	}
//
//	void printDate()
//	{
//		cout << this->year << "," << this->month << "," << this->day << endl;
//	}
//
//	void printDate2()
//	{
//		cout << this->year << "-" << this->month << "-" << this->day << "\t" << this->t.hour << ":" << this->t.minute << ":" << this->t.second << endl;
//	}
//
//	~Date()   // 析构函数
//	{
//		cout << "析构函数，不能重载，无参，无返回值" << this << endl;
//	}
//
//
//	Date& operator=(const Date& d)
//	{
//		cout << this << "=" << &d << endl;
//		if (this != &d)
//		{
//			year = d.year;
//			month = d.month;
//			day = d.day;
//		}
//		return *this;
//	}
//
//private:
//	int year;
//	int month;
//	int day;
//	Time t;
//};
//
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d.year << "," << d.month << "," << d.day;
//	return _cout;
//}
//int main()
//{
//	Date d1(2020, 10, 20);
////	cout << d1;
//	d1.printDate2();
//	return 0;
//}
