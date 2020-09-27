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

	void InitPerson(string _name, string _sex, int _age);
	void Eat();
	void Sleep();
	void Print();
};