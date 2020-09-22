//#include <iostream>
//#include <string>
//using namespace std;
//
//class Date
//{
//public:
//	int month;
//	int day;
//	int year;
//
//	explicit Date(int _month, int _day, int _year)
////		:month(_month),day(_day),year(_year)
//	{
//		cout << "构造函数！！！" << endl;
//		if (_month >= 1 && _month <= 12)
//		{
//			month = _month;
//		}
//		else
//		{
//			month = 1;
//		}
//		if (_year <= 1000)
//		{
//			_year = 1000;
//		}
//		year = _year;
//
//		day = _day;
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			day = 31;
//			break;
//
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			day = 30;
//			break;
//
//		case 2:
//			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//			{
//				day = 29;
//			}
//			else
//			{
//				day = 28;
//			}
//			break;
//
//		default:
//			cout << "输入有误，程序退出！！！" << endl;
//		}
//	}
//
//	void setYear(int _year)
//	{
//		if (_year <= 1000)
//		{
//			_year = 1000;
//		}
//		year = _year;
//	}
//	int getYear()
//	{
//		return year;
//	}
//	void setMonth(int _month)
//	{
//		if (_month >= 1 && _month <= 12)
//		{
//			month = _month;
//		}
//		else
//		{
//			month = 1;
//		}
//	}
//	int getMonth()
//	{
//		return month;
//	}
//	void setDay(int _day)
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			day = 31;
//			break;
//
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			day = 30;
//			break;
//
//		case 2:
//			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//			{
//				day = 29;
//			}
//			else
//			{
//				day = 28;
//			}
//			break;
//
//		default:
//			cout << "输入有误，程序退出！！！" << endl;
//		}
//	}
//	int getDay()
//	{
//		return day;
//	}
//	void displayDate()
//	{
//		cout << year << "/" << month << "/" << day << endl;
//	}
//};
//
//int main()
//{
//	Date d1(2, 23, 2020);
//	Date d2(99, 88, 200);
//
//	d1.displayDate();
//	d2.displayDate();
//	return EXIT_SUCCESS;
//}