//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	double miles;
//	double gallons;
//
//	//explicit Car(double _miles, double _gallons)
//	//	:miles(_miles), gallons(_gallons)
//	//{
//	//	//���캯��
//	//}
//	void setMiles(double _miles) //����Ӣ��
//	{
//		miles = _miles;
//	}
//	double getMiles()
//	{
//		return miles;
//	}
//	void setGallons(double _gallons)
//	{
//		gallons = _gallons;
//	}
//	double getGallons()
//	{
//		return gallons;
//	}
//	double getMpg(double mpg,double &t)
//	{
//		if (t == 0)
//		{
//			return mpg;
//		}
//		else
//		{
//			t = (t + mpg) / 2;
//			return t;
//		}
//	}
//};
//
//int main()
//{
//	Car c1;
//	double total = 0;  //��MPG
//	c1.miles = 0;
//	cout << "��������ʻӢ����������С��0���˳�����";
//	cin >> c1.miles;
//	c1.setGallons(0);
//	double t = 0;
//
//	while (c1.miles >= 0)
//	{
//		if (c1.miles == 0)
//		{
//			cout << "�����˳���" << endl;
//			break;
//		}
//		else
//		{
//			cout << "��������ʻ" << c1.miles << "Ӣ������������";
//			cin >> c1.gallons;
//			if (c1.gallons <= 0)
//			{
//				cout << "���������룺";
//				cin >> c1.gallons;
//			}
////			c1.setMiles(select);
////			c1.setGallons(trip);
//			t = c1.getMiles() / c1.getGallons();
//			total = c1.getMpg(t, total);
//			cout << "�����г�ÿ����Ӣ������" << t << endl;
//			cout << "���г�ÿ����Ӣ����  ��" << total << endl;
//
//			cout << "��������ʻӢ����������С��0���˳�����";
//			cin >> c1.miles;
//		}
//	}
//	return 0;
//}