#include <iostream>
using namespace std;


void Test()
{
	int* ptr4 = new int;
	//动态申请一个int类型的空间
	int* ptr5 = new int(10);
	//动态申请一个int类型的空间并初始化为10
	int* ptr6 = new int[10];
	//动态申请一个10个int类型的空间
	int* ptr7 = new int[3]{ 1,2,3 };
	//动态申请一个连续空间，并赋值

	delete ptr4;
	delete ptr5;
	delete[] ptr6;
	delete[] ptr7;
}