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
//			cout << "若月薪为负值，则设置为0" << endl;
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
//	e1.setFirstName("杨");//
//	e1.setName("星");
//	e1.setWage(10000.0);
//
//	e2.setFirstName("孙");
//	e2.setName("豪");
//	e2.setWage(100.0);
//
//	cout << e1.getFirstName() << e1.getName() << "的月薪为：" << e1.getWage() << endl;
//	cout << e2.getFirstName() << e2.getName() << "的月薪为：" << e2.getWage() << endl;
//
//	e1.wage = e1.wage * (1.1);
//	e2.wage = e2.wage * (1.1);
//	cout << e1.getFirstName() << e1.getName() << "的月薪为：" << e1.getWage() << endl;
//	cout << e2.getFirstName() << e2.getName() << "的月薪为：" << e2.getWage() << endl;
//	return EXIT_SUCCESS;
//}