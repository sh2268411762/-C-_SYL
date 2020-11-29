//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//void Test1()  //��Ա����
//{
//	//���캯��
//	// constructors used in the same order as described above:
//	vector<int> first;                                // empty vector of ints
//	vector<int> second(4, 100);                       // four ints with value 100
//	vector<int> third(second.begin(), second.end());  // iterating through second
//	vector<int> fourth(third);                       // a copy of third
//
//	// the iterator constructor can also be used to construct from arrays:
//	int myints[] = { 16,2,77,29 };
//	vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
//
//	cout << "The contents of fifth are:";
//	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//		cout << ' ' << *it;
//	cout << endl;
//
//
//	//��ֵ���������
//	vector<int> f(3, 0);
//	vector<int> b(5, 0);
//
//	b = f;
//	f = std::vector<int>();
//
//	cout << "Size of foo: " << int(f.size()) << endl;
//	cout << "Size of bar: " << int(b.size()) << endl;
//}
//
//void Test2()
//{
//	vector<int> v;
//	for (int i = 1; i <= 5; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v contains:";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << ' ' << *it;
//	}
//	cout << endl;
//	
//
//	int i = 0;
//
//	vector<int>::reverse_iterator rit = v.rbegin();
//	for (; rit != v.rend(); ++rit)
//		*rit = ++i;
//
//	cout << "myvector contains:";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		cout << ' ' << *it;
//	cout << endl;
//	//cbegin,cend,crbegin,crend����C++11ת��
//}
//
//void Test3()
//{
//	vector<int> v;
//	for (int i = 1; i <= 5; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v.size():" << v.size() << endl;
//	cout << "v.capacity():" << v.capacity() << endl;
//	cout << "v.max_size():" << v.max_size() << endl;
//
//	v.resize(10);
//	//�޸�v����ЧԪ�ظ����������С��ԭsize�򣬽�ȡԭ��v��ǰ��θ������ڿ���ָ���ַ��������
//	v.reserve(10);
//	//�޸�v�ĵײ�ռ䣬���ı���ЧԪ��
//	v.empty();
//	//�ж�v�Ƿ�Ϊ��
//}
//
//void Test4()
//{
//	vector<int> v;
//	for (int i = 1; i <= 5; i++)
//	{
//		v.push_back(i);
//	}
//	//push_back����v��β�����в���
//
//	v.pop_back();
//	//��v��β��ɾ��һ��Ԫ��
//
//	auto it = v.begin();
//	v.insert(it, 2, 4);
//	//����Ԫ��
//
//	v.erase(it);
//	//ɾ��Ԫ��
//
//	vector<int> v2{ 7,6,5,4,3 };
//	swap(v, v2);
//	//��������vector����
//
//	v.clear();
//	//���vector����
//}
//
//void Test5()
//{
//	vector<int> v{ 1,2,3,4,5,6,7 };
//	//�����[]
//	cout << v[3] << endl;
//	//at����
//	cout << v.at(3) << endl;
//	//����[]��at��˵��
//	//[]��ͨ��assert���ж�Խ�����
//	//at���ڲ�ͨ���쳣����������Ƿ�Խ��
//
//	//front����һ��Ԫ��
//	cout << v.front() << endl;
//
//	//back�����һ��Ԫ��
//	cout << v.back() << endl;
//
//	//data������һ��ָ���ڲ�ʹ�õ��ڴ������ֱ��ָ��
//	//C++11ר��
//	cout << v.data() << endl;
//}
//int main()
//{
//	Test5();
//	return 0;
//}