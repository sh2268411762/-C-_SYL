//#include <iostream>
//#include <string>
//#include "Person.h"
//using namespace std;
//
//
//
//int main()
//{
//	Person p1;
//	p1.Print();
//	p1.InitPerson("ËïºÀ", "ÄÐ", 21);
//	p1.Print();
//	p1.Eat();
//	p1.Sleep();
//	return 0;
//}
//
////struct student
////{
////	char name[16];
////	char sex[16];
////	int age;
////
////	void InitStudent(const char _name[], const char _sex[], int _age)
////	{
////		strcpy(name, _name);
////		strcpy(sex, _sex);
////		age = _age;
////	}
////
////	void PrintStudent()
////	{
////		cout << name << "-" << sex << "-" << age << endl;
////	}
////
////	void SetAge(int _age)
////	{
////		age = _age;
////	}
////
////	void SetName(char s[])
////	{
////		for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
////		{
////			name[i] = s[i];
////		}
////	}
////
////};
////int main()
////{
////	student s1;
////	s1.SetAge(21);
////	s1.InitStudent("ÕÅÈý", "ÄÐ", 21);
////	s1.PrintStudent();
////
////	struct student s2;
////	s2.age = 20;
////	char n[] = { 'L','i','s','i','\0' };
////	const char *str = "Lisiii";
////	s2.SetName(n);
////	cout << s2.name << endl;
////	strcpy(s2.name, str);
////	cout << s2.name << endl;
////	strcpy(s2.name, "uuu");
////	cout << s2.name << endl;
////
////	return 0;
////}