//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee
//{
//public:
//	string name;
//	string firstName;
//	double wage = 0.0;
//
//	void setName(string _name)
//	{
//		name = _name;
//	}
//	string getName()
//	{
//		return name;
//	}
//	void setFirstName(string _firstName)
//	{
//		firstName = _firstName;
//	}
//	string getFirstName()
//	{
//		return firstName;
//	}
//	void setWage(double _wage)
//	{
//		if (_wage < 0)
//		{
//			cout << "����нΪ��ֵ��������Ϊ0" << endl;
//			wage = 0;
//		}
//		wage = _wage;
//	}
//	double getWage()
//	{
//		return wage;
//	}
//};
//
//
//int main()
//{
//	Employee e1;
//	Employee e2;
//	e1.setFirstName("��");//
//	e1.setName("��");
//	e1.setWage(10000.0);
//
//	e2.setFirstName("��");
//	e2.setName("��");
//	e2.setWage(100.0);
//
//	cout << e1.getFirstName() << e1.getName() << "����нΪ��" << e1.getWage() << endl;
//	cout << e2.getFirstName() << e2.getName() << "����нΪ��" << e2.getWage() << endl;
//
//	e1.wage = e1.wage * (1.1);
//	e2.wage = e2.wage * (1.1);
//	cout << e1.getFirstName() << e1.getName() << "����нΪ��" << e1.getWage() << endl;
//	cout << e2.getFirstName() << e2.getName() << "����нΪ��" << e2.getWage() << endl;
//	return EXIT_SUCCESS;
//}