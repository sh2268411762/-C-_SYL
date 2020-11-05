//#include<iostream>
//#include<string>
//using namespace std;
////STL------六大组件（模块）：容器、算法、迭代器、仿函数（函数对象、lambda、函数指针）、
////                           适配器（配接器->stack和queue（栈和队列））、空间配置器
////standard template library  C++标准模板库
//
////1、采用容器来组织数据
////2、算法分为与数据结构有关：各个容器的接口
////         和与数据结构无关的通用算法
////3、迭代器用来遍历容器内的数据
////4、空间配置器用来进行高效申请和释放空间，以及对这些空间进行管理
//
//
//
////string 字符串类
////1、构造与析构
////2、容量
////3、元素访问
////4、迭代器
////5、修改
////6、特殊操作
//int main()
//{
//	//string构造
//	//string s1;
//	//string s2("hello world!");
//	//string s3(10,'a');
//	//string s4(s2);
//	//string s5(s2, 0, 3);
//	//string s6("World", 4);
//
//	//cout << s1 << endl;
//	//cout << s2 << endl;
//	//cout << s3 << endl;
//	//cout << s4 << endl;
//	//cout << s5 << endl;
//	//cout << s6 << endl;
//
//
//
//
//	////操作
//	//string s("hello world!");
//	//cout << s[0] << endl;
//	//s[0] = 'H';
//	//cout << s << endl;
//	//cout << s.at(6) << endl;
//	//s.at(6) = 'W';
//	//cout << s << endl;
//	////at:内部采用异常机制来检测是否越界
//	////[]:采用assert来检测是否越界
//
//
//	//遍历
//	string s7("Hello World!");
//	for (int i = 0; i < s7.length(); i++)
//	{
//		cout << s7[i];
//	}
//	cout << endl;
//
//	for (auto e : s7)
//	{
//		cout << e;
//	}
//	cout << endl;
//
//	auto it = s7.begin();   //迭代器
//	while (it != s7.end())
//	{
//		cout << *it;
//		it++;
//	}
//	return 0;
//}