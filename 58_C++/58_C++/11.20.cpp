//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
////vector 底层  T* start  T* finish  T* end
//
//
//class Date
//{
//public:
//	Date(int year = 1990, int month = 01, int day = 01)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{
//		cout << "Date(int,int,int)" << this << endl;
//	}
//
//	Date(const Date& d)
//		:_year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{
//		cout << "Date(const Date&)" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void Test1()  //构造
//{
//	vector<int> v1;  //空的vector
//	vector<int> v2(10, 5); 
//	vector<int> v3(10);    //内置类型默认值为0
//	vector<Date> v4(10);  //只传入了第一个参数，类类型本身没有无参构造函数或全缺省构造函数
//
//	int array[] = { 1,2,3,4,5 };
//	vector<int> v5(array, array + sizeof(array) / sizeof(array[0]));
//
//	vector<int> v6(v5); //拷贝构造
//	vector<int> v7{ 1, 2, 3, 4, 5 }; //C++11新增
//
//
//	//遍历
//	for (size_t i = 0;i < v2.size(); i++)
//	{
//		cout << v2[i] << " ";
//	}
//	cout << endl;
//
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int>::iterator it = v7.begin();
//	while (it != v7.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//
//void Test2()  //容量操作
//{
//	//empty();  //判空
//	//void resize(size_t n, const T & data = T());
//	////n <= size():将vector中有效元素缩减到n个
//	////n >  size():                  增加到n个，独处的n-size()用data填充
//	////if n > capacity()  ,进行扩容
//
//	//void reserve(size_t newcapacity);  
//	////将vector底层的容量修改到newcapacity
//	////if old >= new  忽略这次扩容
//	////if old <  new  进行扩容
//	////扩容不改变有效元素
//
//
//	vector<int> v1{ 1, 2, 3, 4, 5,6,7,8,9,0 };
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	v1.resize(3);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	v1.resize(8);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	v1.resize(20, 6);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	v1.resize(10);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	cout << endl;
//
//	v1.reserve(10);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//
//	v1.reserve(30);
//	cout << "v1的元素个数：" << v1.size() << endl;
//	cout << "v1的底层空间：" << v1.capacity() << endl;
//}
//
////元素访问
//void Test3()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
//	cout << "第一个元素：" << v.front() << endl;
//	cout << "最后一个元素：" << v.back() << endl;
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << "\t";
//	}
//	cout << endl;
//
//	cout << "修改：" << endl;
//	v.front() = 11;
//	v.back() = 11;
//}
//void Test4()
//{
//	vector<int>v;
//	size_t capacity = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (capacity != v.capacity())
//		{
//			cout << capacity << endl;
//			capacity = v.capacity();
//		}
//	}
//	//若大概已知要加入多少元素，可提前用resever()扩容;
//}
//void TestPushBack()
//{
//	Date d(2020, 11, 20);
//	vector<Date> v;
//
//	v.push_back(d);
//	//push_back  不是将d直接插入到尾部
//	//而是传递的d的拷贝
//}
//
//void TestInsert()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	v.insert(v.begin(), 0);
//
//	v.insert(find(v.begin(), v.end(), 3), 4, 6);  //索引，数量，数值
//
//	v.insert(v.begin() + 1, v.begin(), v.end());  //1   ，区间
//
//
//	//删除
//	v.erase(v.begin());
//	v.erase(v.begin(), v.begin() + 5);   //0,5
////	v.erase(v.begin(), v.end());         //区间
//	v.clear();  //不改变底层容量大小
//}
//
////迭代器失效
//void Test5()
//{
//	vector<int> v{ 1, 2, 3, 4, 5 };
//	cout << "有效元素个数：" << v.size() << endl;
//	cout << "底层容量大小：" << v.capacity() << endl;
//
//	auto it = v.begin();
//
//	// v.assign(10, 5);导致迭代器失效
//	// 在可能导致迭代器失效的位置重新给迭代器赋值
//	//it = v.begin();
//
//	while (it != v.end())
//	{
//		cout << *it << "\t";
//		it++;
//	}
//}
//
////使用迭代器将vector中所有元素删除
//void Test8()
//{
//	vector<int> v{ 1, 2, 3, 4, 5 };
//	cout << "有效元素个数：" << v.size() << endl;
//	cout << "底层容量大小：" << v.capacity() << endl;
//
//	auto it = v.begin();
//	
//	////删除一个之后迭代器失效
//	//while (it != v.end())
//	//{
//	//	v.erase(it);
//	//	++it;
//	//}
//
//	while (it != v.end())
//	{
//		it = v.erase(it);
//	}
//}
//
//void Test5()
//{
//	vector<vector<int>> v;
//	v.resize(5);
//
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		v[i].resize(6);
//	}
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		for (size_t j = 0; j < v[i].size(); j++)
//		{
//			v[i][j] = j + 1;
//		}
//	}
//
//
//
//
//	vector<vector<int>> vv(5, vector<int>{1, 2, 3, 4, 5, 6});
//
//}
//int main()
//{
////	Test1();
////	Test2();
////	Test3();
////	Test4();
//	TestPushBack();
//	return EXIT_SUCCESS;
//}