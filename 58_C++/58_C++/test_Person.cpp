#include "Person.h"

void Person::InitPerson(string _name,string _sex,int _age)
{
	name = _name;
	sex = _sex;
	age = _age;
}
void Person::Eat()
{
	cout << name << "���ڳԷ�..." << endl;
}
void Person::Sleep()
{
	cout << name << "����˯��..." << endl;
}
void Person::Print()
{
	cout << name << "-" << sex << "-" << age << endl;
}