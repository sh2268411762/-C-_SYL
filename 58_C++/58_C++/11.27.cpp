//#include <iostream>
//#include <list>
//#include <vector>
//using namespace std;
//
////List:����ͷ�ڵ��˫��ѭ������
////���ң�find(F.begin(),F.end(),data)��ʱ�临�Ӷ�ΪO(N)
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
//	//����
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
//	auto rit = L4.rbegin();  //���������������鿴list
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
//	//β��
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
//	//ͷ��
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
//	//βɾ
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
//	//ͷɾ
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
//	//insert����
//	L.insert(find(L.begin(), L.end(), 3), 6);
//	L.insert(find(L.begin(), L.end(), 7), 6);  //û��7���൱��β��
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//eraseɾ�����������䣬��ɾ�������ڵ�����Ԫ��
//	L.erase(find(L.begin(), L.end(), 6));
//	cout << L.size() << endl;
//	it = L.begin();
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	L.erase(L.begin(), L.end());//clear()�����
//
//}
//
////�������
//bool isOdd(int data)
//{
//	return data & 0x01;
//}
//void Test3()
//{
//	list<int> L{ 1,2,3,4,5,5,4,3,2,1 };
//	L.remove(5);   //ɾ������ֵΪ5
//	L.sort();     //����
//	L.unique();  //ȥ�أ����������������ж�ȥ�أ�������Ҫ�������ȥ��
//	L.reverse();   //����
//
//	list<int> L1{ 1,2,3,4,5,5,4,3,2,1 };
//	L1.remove_if(isOdd);//ɾ����������
//}
//
//void Test4()
//{
//	//������ʧЧ��ֻ������ɾ��
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