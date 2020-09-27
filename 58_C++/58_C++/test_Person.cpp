#include "Person.h"

void Person::InitPerson(string _name,string _sex,int _age)
{
	name = _name;
	sex = _sex;
	age = _age;
}
void Person::Eat()
{
	cout << name << "正在吃饭..." << endl;
}
void Person::Sleep()
{
	cout << name << "正在睡觉..." << endl;
}
void Person::Print()
{
	cout << name << "-" << sex << "-" << age << endl;
}