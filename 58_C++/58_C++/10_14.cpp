#include <iostream>
#include <string>
using namespace std;



class Date
{
public:
	void setDate(int _year, int _month, int _day)
	{
		this->year = _year;
		this->month = _month;
		this->day = _day;
	}

	Date(int _year, int _month, int _day)   // 多参数构造函数
	{
		this->year = _year;
		this->month = _month;
		this->day = _day;
	}

	Date(const Date& d)   // 拷贝构造函数
	{
		year = d.year;
		month = d.month;
		day = d.day;
//		cout << "拷贝构造函数" << this << endl;
	}

	Date()  // 无参构造函数
	{
		year = 1900;
		month = 1;
		day = 1;
	}

	~Date()   // 析构函数
	{
//		cout << "析构函数，不能重载，无参，无返回值" << endl;
	}
	void printDate()   // 打印信息
	{
		cout << this->year << ":" << this->month << ":" << this->day << endl;
	}

	bool operator<(Date& d)   // < 重载
	{
		if ((year < d.year) || (year == d.year && month < d.month) || (month == d.month && day < d.day))
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	Date operator=(const Date& d)
	{
		if (this != &d)
		{
			year = d.year;
			month = d.month;
			day = d.day;
		}
		return *this;
	}

	Date& operator++()   // 前置
	{
		day++;
		return *this;
	}

	Date operator++(int)   // 后置
	{
		Date temp(*this);
		day++;
		return temp;
	}

	Date& operator--()   // 前置
	{
		day--;
		return *this;
	}

	Date operator--(int)   // 后置
	{
		Date temp(*this);
		day--;
		return temp;
	}

	Date* operator&()
	{
		cout << this << endl;
		return this;
	}

	bool operator==(Date& d)  // == 重载
	{
		return year == d.year && month == d.month && day == d.day;
	}

	int year;
	int month;
	int day;

};

int main()
{
	Date d1(2020, 10, 15);
	Date d2;
	Date d3(d1);
	Date d4(2020, 10, 14);

	d2 = d1;
	d2 = d1 = d4;
	d1.printDate();
	d2.printDate();
	d3.printDate();
	d4.printDate();

	Date d5;  //默認值
	d4++.printDate(); //d4 2020.10.14
	d5 = ++d4;
	d5.printDate();  //d4 2020.10.16   d5 2020.10.16
	d4--.printDate(); //16 -->15
	d5 = --d4;        //d4 14    d5  14
	d4.printDate();
	d5.printDate();
	

	return EXIT_SUCCESS;
}