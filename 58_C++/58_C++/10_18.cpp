#include <iostream>
#include <string>
using namespace std;

//ͳ�Ƹ��ഴ���˶��ٸ�����
class Date
{
public:
	Date(int _year = 1900, int _month = 1, int _day =1)   // ��������캯��
		:year(_year)
		, month(_month)
		, day(_day)
	{
		count++;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)   // �������캯��
		:year(d.year)
		, month(d.month)
		, day(d.day)
	{
		count++;
		cout << "Date(const Date& d):" << this << endl;
	}

	void printDate()
	{
		cout << this->year << "," << this->month << "," << this->day << endl;
	}

	~Date()   // ��������
	{
		count--;
		cout << "�����������������أ��޲Σ��޷���ֵ" << this << endl;
	}


	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			year = d.year;
			month = d.month;
			day = d.day;
		}
		return *this;
	}


private:
	int year;
	int month;
	int day;
	static int count;
};

int Date::count = 0;
int main()
{
	Date d1(2020, 10, 18);
	Date d2(d1);
	d1.printDate();
	d2.printDate();
	cout << sizeof(d1) << endl; //12
	return 0;
}




#if 0
class Date1
{
public:
	int year;
	int month;
	int day;

	explicit Date1(int _year = 1900)
		:year(_year)
		, month(1)
		, day(1)
	{

	}

	void printDate1()
	{
		cout << this->year << "," << this->month << "," << this->year << endl;
	}
};

int main()
{
	Date1 d(2020);
	d.printDate1();
	return 0;
}
#endif


# if 0
class Time
{
public:
	Time(int _hour = 0, int _minute = 0, int _second = 0)
		:hours(_hour)
		,minute(_minute)
		,second(_second)
	{

	}

	int hours;
	int minute;
	int second;
};
class Date
{
public:
	Date(int _year, int _month, int _day)   // ��������캯��
		:year(_year)
		, month(_month)
		, day(_day)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)   // �������캯��
		:year(d.year)
		,month(d.month)
		,day(d.day)
	{
		cout << "Date(const Date& d):" << this << endl;
	}

	void printDate()
	{
		cout << this->year << "," << this->month << "," << this->day << "," << this->t.hours << "," << this->t.minute << "," << this->t.second << endl;
	}

	~Date()   // ��������
	{
		cout << "�����������������أ��޲Σ��޷���ֵ" << this << endl;
	}


	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			year = d.year;
			month = d.month;
			day = d.day;
		}
		return *this;
	}

	int year;
	int month;
	int day;
	Time t;
};
Date Test1(Date d);
Date& Test2(Date& d);
Date Test3(Date d);
void Test();

int main()
{
	Date d1(2020, 10, 18);
	d1.printDate();
	return 0;
}

#endif



# if 0
int main1()
{
	Test();
	return 0;
}
Date Test1(Date d)
{
	Date temp(d);
	temp = d;
	return temp;
}

Date& Test2(Date& d)
{
	Date temp(d);
	temp = d;
	return d;
}

Date Test3(Date d)
{
	return d;
}

void Test()
{
	Date d1(2020, 10, 14);
	Date d2(d1);

	//	d2 = Test1(d1);
	d2 = Test2(d1);
}

#endif
