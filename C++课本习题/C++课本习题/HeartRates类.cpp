//#include <iostream>
//#include <string>
//using namespace std;
//
//class HeartRates
//{
//public:
//	string name;
//	int year;
//	int month;
//	int day;
//
//	explicit HeartRates(string _name, int _year, int _month, int _day)
//		:name(_name),year(_year),month(_month),day(_day)
//	{
//		cout << "���캯��" << endl;
//	}
//	void setName(string _name)
//	{
//		name = _name;
//	}
//	string getName()
//	{
//		return name;
//	}
//	void setYear(int _year)
//	{
//		year = _year;
//	}
//	int getYear()
//	{
//		return year;
//	}
//	void setMonth(int _month)
//	{
//		month = _month;
//	}
//	int getMonth()
//	{
//		return month;
//	}
//	void setDay(int _day)
//	{
//		day = _day;
//	}
//	int getDay()
//	{
//		return day;
//	}
//	int getAge(int _year)   //�����˵�����
//	{
//		return _year - year;
//	}
//	int getMaxiiumunHeartRate(int _year) //�������
//	{
//		return 220 - getAge(_year);
//	}
//	int getTargetHeartRate(int _year)
//	{
//		return (int)(getMaxiiumunHeartRate(_year) * 0.5);
//	}
//	void print(int _year)
//	{
//		cout << "����:" << name << "  �������ڣ�" << year << "/" << month << "/" << day << " ���䣺" << getAge(_year) << endl;
//	}
//};
//
//int main()
//{
//	HeartRates h1("���", 1999, 8, 27);
//	h1.print(2020);
//	cout << h1.name << "���������Ϊ��" << h1.getMaxiiumunHeartRate(2020) << endl;
//	cout << h1.name << "��Ŀ������Ϊ��" << h1.getTargetHeartRate(2020) << endl;
//	return EXIT_SUCCESS;
//}