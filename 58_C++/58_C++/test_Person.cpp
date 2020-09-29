#include "Person.h"

void Person::InitPerson(string _name,string _sex,int _age)
{
	name = _name;
	sex = _sex;
	age = _age;
}


void Person::Eat()
{
	cout << this << "为当前对象的地址" << endl;
	cout << name << "正在吃饭..." << endl;
}
void Person::Sleep()
{
	cout << this << "为当前对象的地址" << endl;
	cout << name << "正在睡觉..." << endl;
}
void Person::Print()
{
	cout << this << "为当前对象的地址" << endl;
	cout << name << "-" << sex << "-" << age << endl;
}

void Person::setName(string _name)
{
	cout << this << "为当前对象的地址" << endl;
	name = _name;
}

void Person::setSex(string _sex)
{
	cout << this << "为当前对象的地址" << endl;
	sex = _sex;
}

void Person::setAge(int _age)
{
	cout << this << "为当前对象的地址" << endl;
	age = _age;
}

string Person::getName()
{
	cout << this << "为当前对象的地址" << endl;
	return name;
}

string Person::getSex()
{
	cout << this << "为当前对象的地址" << endl;
	return sex;
}

int Person::getAge()
{
	cout << this << "为当前对象的地址" << endl;
	return age;
}