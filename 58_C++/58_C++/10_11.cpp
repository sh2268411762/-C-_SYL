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
//		cout << "�����������������أ��޲Σ��޷���ֵ" << endl;
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
//	Date d1(2019,9,10);  //�вι��캯��
//	d1.printDate();
//	Date d2; //�޲ι��캯��
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
////	//����.��Ա����ʱ��this����Ϊ��
////	//p->��Ա������pΪnullptr����thisΪnullptr
////	return 0;
////}