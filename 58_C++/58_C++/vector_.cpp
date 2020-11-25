#include <iostream>
#include <vector>
using namespace std;


void Test1()  //成员函数
{
	//构造函数
	// constructors used in the same order as described above:
	vector<int> first;                                // empty vector of ints
	vector<int> second(4, 100);                       // four ints with value 100
	vector<int> third(second.begin(), second.end());  // iterating through second
	vector<int> fourth(third);                       // a copy of third

	// the iterator constructor can also be used to construct from arrays:
	int myints[] = { 16,2,77,29 };
	vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

	cout << "The contents of fifth are:";
	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
		cout << ' ' << *it;
	cout << endl;


	//赋值运算符重载
	vector<int> f(3, 0);
	vector<int> b(5, 0);

	b = f;
	f = std::vector<int>();

	cout << "Size of foo: " << int(f.size()) << endl;
	cout << "Size of bar: " << int(b.size()) << endl;
}

void Test2()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
	{
		v.push_back(i);
	}

	cout << "v contains:";
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << ' ' << *it;
	}
	cout << endl;
	

	int i = 0;

	vector<int>::reverse_iterator rit = v.rbegin();
	for (; rit != v.rend(); ++rit)
		*rit = ++i;

	cout << "myvector contains:";
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << ' ' << *it;
	cout << endl;
	//cbegin,cend,crbegin,crend属于C++11转悠
}

void Test3()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
	{
		v.push_back(i);
	}

	cout << "v.size():" << v.size() << endl;
	cout << "v.capacity():" << v.capacity() << endl;
	cout << "v.max_size():" << v.max_size() << endl;

	v.resize(10);
	//修改v的有效元素个数，若入参小于原size则，截取原来v的前入参个，大于可用指定字符进行填充
	v.reserve(10);
	//修改v的底层空间，不改变有效元素
	v.empty();
	//判断v是否为空
}

void Test4()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
	{
		v.push_back(i);
	}
	//push_back：在v的尾部进行插入

	v.pop_back();
	//在v的尾部删除一个元素

	auto it = v.begin();
	v.insert(it, 2, 4);
	//插入元素

	v.erase(it);
	//删除元素

	vector<int> v2{ 7,6,5,4,3 };
	swap(v, v2);
	//交换两个vector对象

	v.clear();
	//情况vector对象
}

void Test5()
{
	vector<int> v{ 1,2,3,4,5,6,7 };
	//运算符[]
	cout << v[3] << endl;
	//at函数
	cout << v.at(3) << endl;
	//对于[]和at来说：
	//[]：通过assert来判断越界错误
	//at：内部通过异常机制来检测是否越界

	//front：第一个元素
	cout << v.front() << endl;

	//back：最后一个元素
	cout << v.back() << endl;

	//data：返回一个指向内部使用的内存数组的直接指针
	//C++11专用
	cout << v.data() << endl;
}
int main()
{
	Test5();
	return 0;
}