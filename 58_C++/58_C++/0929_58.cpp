#include <iostream>
#include <string>
#include "Person.h"
using namespace std;



int main()
{
	Person p1("ZhangSan", "Nan", 19);
	cout << "p1�ĵ�ַ��" << &p1 << endl;
	p1.Print();
	p1.Eat();
	p1.Sleep();
	p1.InitPerson("���", "��", 21);
	p1.Print();
	p1.Eat();
	p1.Sleep();
	cout << endl;

	Person p2("����","Ů");
	cout << "p2�ĵ�ַ��" << &p2 << endl;
	p2.Print();
	p2.setAge(1769);
	p2.Print();
	cout << endl;

	Person p3;
	cout << "p3�ĵ�ַ��" << &p3 << endl;
	p3.Print();
	cout << endl;

	Person* p4 = new Person();
	cout << "p4�ĵ�ַ��" << &p4 << endl;
	p4->Print();
	p4->InitPerson("����", "��", 1766);
	p4->Print();
	cout << endl;



	//cout << sizeof(p1) << endl;
	//cout << sizeof(Person) << endl;
	//cout << sizeof(p1.getName()) << endl;
	//cout << sizeof(p1.name) << endl;
	//cout << sizeof(p1.getSex()) << endl;
	//cout << sizeof(p1.sex) << endl;
	//cout << sizeof(p1.getAge()) << endl;
	//cout << sizeof(p1.age) << endl;
	//cout << sizeof(p3.getName()) << endl;
	//cout << sizeof(p3.name) << endl;
	//cout << sizeof(p3.getSex()) << endl;
	//cout << sizeof(p3.sex) << endl;
	//cout << sizeof(p3.getAge()) << endl;
	//cout << sizeof(p3.age) << endl;

	return 0;
}