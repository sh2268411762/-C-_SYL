#include "Person.h"

void Person::InitPerson(string _name,string _sex,int _age)
{
	name = _name;
	sex = _sex;
	age = _age;
}


void Person::Eat()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	cout << name << "���ڳԷ�..." << endl;
}
void Person::Sleep()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	cout << name << "����˯��..." << endl;
}
void Person::Print()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	cout << name << "-" << sex << "-" << age << endl;
}

void Person::setName(string _name)
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	name = _name;
}

void Person::setSex(string _sex)
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	sex = _sex;
}

void Person::setAge(int _age)
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	age = _age;
}

string Person::getName()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	return name;
}

string Person::getSex()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	return sex;
}

int Person::getAge()
{
	cout << this << "Ϊ��ǰ����ĵ�ַ" << endl;
	return age;
}