//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void Test1()
//{
//	string s1("hello world");
//	//size��length�������ַ�����Ч����
//	cout << s1.length() << endl;
//	cout << s1.size() << endl;
//	//�ײ��ܿռ��С
//	cout << s1.capacity() << endl;
//
//
//
//	if (!(s1.empty()))
//	{
//		cout << "�ǿ��ַ���\n\n" << endl;
//	}
//	else
//	{
//		cout << "���ַ���" << endl;
//	}
//
//	//����ַ�������Ӱ��ײ�����
//	s1.clear();
//	cout << s1.length() << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	if (!(s1.empty()))
//	{
//		cout << "�ǿ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "���ַ���" << endl;
//	}
//}
//
//void Test2()
//{
//	//resize(size_t newsize [,char c])�޸�Ԫ�ظ�������string��������ЧԪ�ص�����newsize������������c����
//	//reserve(size_t newcapacity)�����ݣ����ײ�ռ����ݵ�newcapacity
//
//	//resize ���ݺ�Ŀռ��� \0  ��䣬���ݲ��ı�ײ�����capacity
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
//	//reserve(size_t newcapacity)�����ݣ����ײ�ռ����ݵ�newcapacity
//	//��Ӱ����ЧԪ��
//	//����<=��newcapacity����15 ������ֱ�Ӻ��ԣ����Եײ����������޸�
//	//               С�ڵ���15 �ײ�������Ϊ15
//	//����> ��˵����Ҫ����newcapacity�����ڲ����Լ����㷨
//
//	cout << "string��С��" << sizeof(string) << endl;
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
//	////c_str����ȡC���Ը�ʽ���ַ���
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
//	//����
//	size_t index = s1.find('!');
//	if (index != string::npos)
//	{
//		s1.insert(index, " bit");
//	}
//	cout << s1 << endl;
//	s1.insert(s1.begin(), '#');
//	cout << s1 << endl;
//
//	//ɾ��
//	s1.erase(s1.begin());
//	cout << s1 << endl;
//	s1.erase(s1.begin(), s1.begin() + 3);
//	cout << s1 << endl;
//	s1.erase();//���
//	cout << s1 << endl;
//
//	//����
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
//	string s2("http://www.baidu.com");   //��ȡ�ַ���
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
//	//vs,1.5�����ݣ�15 31 47 70 105 157 235 352
//	//linux,2��   ��
//	string s;
//	size_t sz = s.capacity();
//	cout << "���ݹ��ɣ�" << endl;
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