#include <iostream>
using namespace std;


void Test()
{
	int* ptr4 = new int;
	//��̬����һ��int���͵Ŀռ�
	int* ptr5 = new int(10);
	//��̬����һ��int���͵Ŀռ䲢��ʼ��Ϊ10
	int* ptr6 = new int[10];
	//��̬����һ��10��int���͵Ŀռ�

	delete ptr4;
	delete ptr5;
	delete[] ptr6;
}