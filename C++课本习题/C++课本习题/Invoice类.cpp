//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//
//class Invoice
//{
//public:
//	string number;   //�����
//	string type;     //�������
//	int sold;        //����۳��� 
//	int price;       //������� 
//
//	explicit Invoice(string _num, string _type, int _sold, int _pri)
//		:number(_num), type(_type), sold(_sold), price(_pri)
//	{
//		if (_sold < 0)
//		{
//			cout << "�۳���С��0������Ϊ0" << endl;
//			sold = 0;
//		}
//		if (_pri < 0)
//		{
//			cout << "����С��0������Ϊ0" << endl;
//			price = 0;
//		}
//	}
//	void setNumber(string _num)
//	{
//		number = _num;
//		cout << "������ѳɹ��޸ģ�" << endl;
//	}
//	string getNumber()
//	{
//		return number;
//	}
//
//	void setType(string _type)
//	{
//		type = _type;
//		cout << "��������ѳɹ��޸ģ�" << endl;
//	}
//	string getType()
//	{
//		return type;
//	}
//
//	void setSold(int _sold)
//	{
//		sold = _sold;
//		cout << "����۳����ѳɹ��޸ģ�" << endl;
//	}
//	int getSold()
//	{
//		return sold;
//	}
//
//	void setPrice(int _pri)
//	{
//		price = _pri;
//		cout << "��������ѳɹ��޸ģ�" << endl;
//	}
//	int getPrice()
//	{
//		return price;
//	}
//	int getInvoriceAmount()
//	{
//		return price * sold;
//	}
//};
//
//int main()
//{
//	Invoice i1("001", "1�����", 20, 10);
//	Invoice i2("002", "2�����", -10, 10);
//	Invoice i3("003", "3�����", 10, -10);
//	int ret = 0;
//
//	ret = i1.getInvoriceAmount();
//	cout << ret << endl;
//	ret = i2.getInvoriceAmount();
//	cout << ret << endl;
//	ret = i3.getInvoriceAmount();
//	cout << ret << endl;
//	return EXIT_SUCCESS;
//}