//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
////auto
////C++11中，定义变量时可以不用写类型，直接使用auto，让编译器在编译阶段
////根据初始化表达式的类型对auto修饰的变量进行推导,不能作为函数参数的修饰符和定义数组
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = a;
//	auto d = 'c';
//	auto e = 12.22;
//	auto f = Add(3, 4);
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//	cout << typeid(f).name() << endl;
//
//
//
//	//auto与指针一起使用时auto与auto*没有区别
//	int aa = 10;
//	auto* paa1 = &aa;
//	auto paa2 = &aa;
//	cout << typeid(paa1).name() << endl;
//	cout << typeid(paa2).name() << endl;
//
//	//auto 用来定义引用，则必须加 &，否则是定义了一个新的变量
//	int bb = 20;
//	auto rbb1 = bb;
//	auto& rbb2 = bb;
//	rbb2 = 10;
//	cout << typeid(rbb1).name() << endl;
//	cout << typeid(rbb2).name() << endl;
//	cout << rbb1 << "   " << rbb2 << endl;//20   10
//
//	return 0;
//}
//
//////内联函数
//////以inline修饰的函数，编译时C++编译器会在调用内联函数的地方展开，没有函数压栈的开销，提升程序运行效率
//////inline 函数不可以将定义和声明分开，否则会导致链接错误（因为inline会被展开）
////inline int Add(int a, int b)  //比较短小的函数建议写成内联函数
////{
////	return a + b;
////}
////int main()
////{
////	cout << Add(2, 3) << endl;
////	return 0;
////}
//
//
////int main()
////{
////	//C++中为常量，C语言中为不可修改的变量
////	const int a = 10;  //在编译阶段进行宏替换,具有宏替换作用
////	int* pa = (int*)&a;
////	*pa = 100;
////	cout << a << endl;   //10，编译阶段将a替换为10
////	cout << *pa << endl;
////
////
////	return 0;
////}