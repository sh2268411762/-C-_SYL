#pragma once

#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name = "0";
	string sex = "0";
	int age = 0;

	explicit Person(string _name, string _sex, int _age)
		:name(_name),sex(_sex),age(_age)
	{
		cout << "¹¹Ôìº¯Êý" << endl;
	}

	explicit Person()
	{

	}

	explicit Person(string _name, string _sex)
		:name(_name),sex(_sex)
	{
		age = 100000;
	}

	void InitPerson(string _name, string _sex, int _age);
	void Eat();
	void Sleep();
	void Print();
	void setName(string _name);
	void setSex(string _sex);
	void setAge(int _age);
	string getName();
	string getSex();
	int getAge();


};