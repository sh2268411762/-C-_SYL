//#include <iostream>
//#include <list>
//#include <vector>
//using namespace std;
//
////List:带有头节点的双向循环链表
////查找：find(F.begin(),F.end(),data)，时间复杂度为O(N)
//
//void Test1()
//{
//	list<int> L1;
//	list<int> L2(10, 5);
//
//	vector<int> v{ 1,2,3,4,5 };
//	list<int> L3(v.begin(), v.end());
//	list<int> L4(L3);
//	list<int> L5{ 1,2,3,4,5,6,7 };
//
//
//	//遍历
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//list<int>::iterator it = L3.begin();
//	auto it = L3.begin();
//	while (it != L3.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	auto rit = L4.rbegin();  //反向迭代器，反向查看list
//	while (rit != L4.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//}
//
//void Test2()
//{
//	list<int> L;
//	//尾插
//	L.push_back(1);
//	L.push_back(2);
//	L.push_back(3);
//	L.push_back(4);
//	L.push_back(5);
//	cout << L.size() << endl;
//	auto it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//头插
//	L.push_front(0);
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//尾删
//	L.pop_back();
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//头删
//	L.pop_front();
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//insert插入
//	L.insert(find(L.begin(), L.end(), 3), 6);
//	L.insert(find(L.begin(), L.end(), 7), 6);  //没有7就相当于尾插
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//erase删除：传递区间，则删除区间内的所有元素
//	L.erase(find(L.begin(), L.end(), 6));
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	L.erase(L.begin(), L.end());//clear()，清空
//
//}
//
////特殊操作
//bool isOdd(int data)
//{
//	return data & 0x01;
//}
//void Test3()
//{
//	list<int> L{ 1,2,3,4,5,5,4,3,2,1 };
//	L.remove(5);   //删除所有值为5
//	L.sort();     //升序
//	L.unique();  //去重，相邻两个来进行判断去重，所以需要先排序后去重
//	L.reverse();   //逆置
//
//	list<int> L1{ 1,2,3,4,5,5,4,3,2,1 };
//	L1.remove_if(isOdd);//删除所有奇数
//}
//
//void Test4()
//{
//	//迭代器失效，只存在于删除
//	list<int> L{ 1,2,3,4,5 };
//	auto it = L.begin();
//	while (it != L.end())
//	{
//		it = L.erase(it);
//		//++it;
//	}
//
//}
//int main()
//{
////	Test1();
//
////	Test2();
//
////	Test3();
//	return 0;
//}