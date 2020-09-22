//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//
//class Invoice
//{
//public:
//	string number;   //零件号
//	string type;     //零件描述
//	int sold;        //零件售出量 
//	int price;       //零件单价 
//
//	explicit Invoice(string _num, string _type, int _sold, int _pri)
//		:number(_num), type(_type), sold(_sold), price(_pri)
//	{
//		if (_sold < 0)
//		{
//			cout << "售出量小于0则设置为0" << endl;
//			sold = 0;
//		}
//		if (_pri < 0)
//		{
//			cout << "单价小于0则设置为0" << endl;
//			price = 0;
//		}
//	}
//	void setNumber(string _num)
//	{
//		number = _num;
//		cout << "零件号已成功修改！" << endl;
//	}
//	string getNumber()
//	{
//		return number;
//	}
//
//	void setType(string _type)
//	{
//		type = _type;
//		cout << "零件描述已成功修改！" << endl;
//	}
//	string getType()
//	{
//		return type;
//	}
//
//	void setSold(int _sold)
//	{
//		sold = _sold;
//		cout << "零件售出量已成功修改！" << endl;
//	}
//	int getSold()
//	{
//		return sold;
//	}
//
//	void setPrice(int _pri)
//	{
//		price = _pri;
//		cout << "零件单价已成功修改！" << endl;
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
//	Invoice i1("001", "1号零件", 20, 10);
//	Invoice i2("002", "2号零件", -10, 10);
//	Invoice i3("003", "3号零件", 10, -10);
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