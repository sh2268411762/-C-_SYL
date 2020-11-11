//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void Test1()
//{
//	string s1("hello world");
//	//size和length都是求字符串有效长度
//	cout << s1.length() << endl;
//	cout << s1.size() << endl;
//	//底层总空间大小
//	cout << s1.capacity() << endl;
//
//
//
//	if (!(s1.empty()))
//	{
//		cout << "非空字符串\n\n" << endl;
//	}
//	else
//	{
//		cout << "空字符串" << endl;
//	}
//
//	//清空字符串，不影响底层容量
//	s1.clear();
//	cout << s1.length() << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	if (!(s1.empty()))
//	{
//		cout << "非空字符串" << endl;
//	}
//	else
//	{
//		cout << "空字符串" << endl;
//	}
//}
//
//void Test2()
//{
//	//resize(size_t newsize [,char c])修改元素个数：将string对象中有效元素调整到newsize个，扩大则用c补充
//	//reserve(size_t newcapacity)，扩容：将底层空间扩容到newcapacity
//
//	//resize 扩容后的空间用 \0  填充，缩容不改变底层容量capacity
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(10, '!');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(15, '$');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(20, '*');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(34, '&');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(30);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(24);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(16);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(15);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.resize(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//}
//
//
//void Test3()
//{
//	//reserve(size_t newcapacity)，扩容：将底层空间扩容到newcapacity
//	//不影响有效元素
//	//缩容<=：newcapacity大于15 编译器直接忽略，不对底层容量做出修改
//	//               小于等于15 底层容量变为15
//	//扩容> ：说明需要扩增newcapacity个，内部有自己的算法
//
//	cout << "string大小：" << sizeof(string) << endl;
//
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(18);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(30);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(50);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(40);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(35);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(16);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(15);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl << endl;
//}
//
//void Test4()
//{
//	//string s("hello,world bit ");
//	////c_str：获取C语言格式的字符串
//	//char* p = (char*)s.c_str();
//	//cout << p << endl;
//
//	string s1;
//	string s2("hello");
//	s1 += s2;
//	s1 += ' ';
//	s1 += "world";
//	s1.push_back('!');
//	cout << s1 << endl;
//
//	//插入
//	size_t index = s1.find('!');
//	if (index != string::npos)
//	{
//		s1.insert(index, " bit");
//	}
//	cout << s1 << endl;
//	s1.insert(s1.begin(), '#');
//	cout << s1 << endl;
//
//	//删除
//	s1.erase(s1.begin());
//	cout << s1 << endl;
//	s1.erase(s1.begin(), s1.begin() + 3);
//	cout << s1 << endl;
//	s1.erase();//清空
//	cout << s1 << endl;
//
//	//交换
//	string s3("rrr");
//	string s4("uuu");
//	swap(s3, s4);
//	cout << s3 << " " << s4 << endl;
//	s3.swap(s4);
//	cout << s3 << " " << s4 << endl;
//
//}
//
//void Test5()
//{
//	string s1("12345");
//	int value1 = atoi(s1.c_str());
//	cout << value1 << endl;
//
//	string s2("http://www.baidu.com");   //提取字符串
//	size_t index = s2.find("www");
//	if (index != string::npos)
//	{
//		string s3 = s2.substr(index);
//		cout << s3 << endl;
//	}
//
//	string s3;
//	while (getline(cin, s3))
//	{
//		index = s3.rfind(' ');
//		if (index != string::npos)
//		{
//			index += 1;
//			cout << s3.substr(index).size() << endl;
//		}
//	}
//
//}
//
//void Test6()
//{
//	string s1("ssss");
//	string s2("oooo");
//	if (s1 > s2)
//	{
//		cout << "s1 > s2" << endl;
//	}
//	else
//	{
//		cout << " s2 >= s1" << endl;
//	}
//}
//
//void TestPush_back()
//{
//	//vs,1.5倍扩容：15 31 47 70 105 157 235 352
//	//linux,2倍   ：
//	string s;
//	size_t sz = s.capacity();
//	cout << "扩容规律：" << endl;
//	cout << sz << endl;
//	for (int i = 0; i < 300; i++)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << sz << endl;
//		}
//	}
//}
////int main()
////{
//////	Test1();
////
//////	Test2();
////
//////	Test3();
////
//////	Test4();
////
//////	Test5();
////
//////	Test6();
////
//////	TestPush_back();
////	return 0;
////}