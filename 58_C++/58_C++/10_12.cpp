//#include <iostream>
//#include <string>
//using namespace std;
//class String
//{
//	//һ����������漰����Դ�����������ʽ���忽�����캯������ֵ���������������ʽ����
//	//ǳ��������һ�������е�����ԭ�ⲻ���Ŀ�������һ��������
//public:
//	String(const char* _str = "")
//	{
//		str = (char*)malloc(strlen(_str) + 1);
//		strcpy(str, _str);
//	}
//
//	~String()
//	{
//		if (str)
//		{
//			free(str);
//			str = nullptr;
//		}
//	}
//
//	void printString()
//	{
//		cout << this->str << endl;
//	}
//
//private:
//	char* str;
//};
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
//	Date(const Date& d)
//	{
//		year = d.year;
//		month = d.month;
//		day = d.day;
//		cout << "�������캯��" << this << endl;
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
////		cout << "�����������������أ��޲Σ��޷���ֵ" << endl;
//	}
//	void printDate()
//	{
//		cout << this->year << ":" << this->month << ":" << this->day << endl;
//	}
//
//	bool operator<(Date& d)
//	{
//		if ((year < d.year) || (year == d.year && month < d.month) || (month == d.month && day < d.day))
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	bool operator==(Date& d)
//	{
//		return year == d.year && month == d.month && day == d.day;
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
//	Date d1(2020, 10, 12);
//	d1.printDate();
//	Date d2(d1);  //���ÿ������캯����ֻ�е����βΡ��������͵����ã�
//	d2.printDate();
//	d1.printDate();
//
//	if (!(d1 < d2))
//	{
//		cout << "d1 < d2" << endl;
//	}
//	else
//	{
//		cout << "d1 >= d2" << endl;
//	}
//
//	if (d1 == d2)
//	{
//		cout << "d1 == d2" << endl;
//	}
//	else
//	{
//		cout << "d1 != d2" << endl;
//	}
//	//String s1("Hello World");
//	//s1.printString();
//	//String s2(s1);
//	//s2.printString();
//
//	return EXIT_SUCCESS;
//}