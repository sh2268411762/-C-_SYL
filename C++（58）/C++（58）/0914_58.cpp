//#include <iostream>
//using namespace std;
//
//
////命名空间（防止命名污染）定义:命名空间可以嵌套——用：：使用命名空间中的变量及函数
//namespace N1  //1、最常见
//{
//	//定义变量，函数
//	int a = 10 ;
//	int b = 20;
//	
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//namespace N2   //2、命名空间可以嵌套
//{
//	int a = 10;
//	int b = 90;
//
//	int sub(int x, int y)
//	{
//		return x - y;
//	}
//	namespace Nn2 //嵌套
//	{
//		int c = 10;
//		int d = 10;
//
//		int mul(int x, int y)
//		{
//			return x * y;
//		}
//	}
//}
//namespace N1  //3、在同一工程中可以定义多个名字相同的命名空间
//{             //编译器会将多个相同名称的命名空间合并成一个
//	int div(int x, int y)
//	{
//		return x / y;
//	}
//}
//
//
//
//
//
////N::a    using N::a   using namespace N
//
//
//int main()
//{
//	int a = N1::a;
//	cout << a << endl;
//	return 0;
//}