//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
////vector �ײ�  T* start  T* finish  T* end
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
//void Test1()  //����
//{
//	vector<int> v1;  //�յ�vector
//	vector<int> v2(10, 5); 
//	vector<int> v3(10);    //��������Ĭ��ֵΪ0
//	vector<Date> v4(10);  //ֻ�����˵�һ�������������ͱ���û���޲ι��캯����ȫȱʡ���캯��
//
//	int array[] = { 1,2,3,4,5 };
//	vector<int> v5(array, array + sizeof(array) / sizeof(array[0]));
//
//	vector<int> v6(v5); //��������
//	vector<int> v7{ 1, 2, 3, 4, 5 }; //C++11����
//
//
//	//����
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
//void Test2()  //��������
//{
//	//empty();  //�п�
//	//void resize(size_t n, const T & data = T());
//	////n <= size():��vector����ЧԪ��������n��
//	////n >  size():                  ���ӵ�n����������n-size()��data���
//	////if n > capacity()  ,��������
//
//	//void reserve(size_t newcapacity);  
//	////��vector�ײ�������޸ĵ�newcapacity
//	////if old >= new  �����������
//	////if old <  new  ��������
//	////���ݲ��ı���ЧԪ��
//
//
//	vector<int> v1{ 1, 2, 3, 4, 5,6,7,8,9,0 };
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	v1.resize(3);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	v1.resize(8);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	v1.resize(20, 6);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	v1.resize(10);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	cout << endl;
//
//	v1.reserve(10);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//
//	v1.reserve(30);
//	cout << "v1��Ԫ�ظ�����" << v1.size() << endl;
//	cout << "v1�ĵײ�ռ䣺" << v1.capacity() << endl;
//}
//
////Ԫ�ط���
//void Test3()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
//	cout << "��һ��Ԫ�أ�" << v.front() << endl;
//	cout << "���һ��Ԫ�أ�" << v.back() << endl;
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << "\t";
//	}
//	cout << endl;
//
//	cout << "�޸ģ�" << endl;
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
//	//�������֪Ҫ�������Ԫ�أ�����ǰ��resever()����;
//}
//void TestPushBack()
//{
//	Date d(2020, 11, 20);
//	vector<Date> v;
//
//	v.push_back(d);
//	//push_back  ���ǽ�dֱ�Ӳ��뵽β��
//	//���Ǵ��ݵ�d�Ŀ���
//}
//
//void TestInsert()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	v.insert(v.begin(), 0);
//
//	v.insert(find(v.begin(), v.end(), 3), 4, 6);  //��������������ֵ
//
//	v.insert(v.begin() + 1, v.begin(), v.end());  //1   ������
//
//
//	//ɾ��
//	v.erase(v.begin());
//	v.erase(v.begin(), v.begin() + 5);   //0,5
////	v.erase(v.begin(), v.end());         //����
//	v.clear();  //���ı�ײ�������С
//}
//
////������ʧЧ
//void Test5()
//{
//	vector<int> v{ 1, 2, 3, 4, 5 };
//	cout << "��ЧԪ�ظ�����" << v.size() << endl;
//	cout << "�ײ�������С��" << v.capacity() << endl;
//
//	auto it = v.begin();
//
//	// v.assign(10, 5);���µ�����ʧЧ
//	// �ڿ��ܵ��µ�����ʧЧ��λ�����¸���������ֵ
//	//it = v.begin();
//
//	while (it != v.end())
//	{
//		cout << *it << "\t";
//		it++;
//	}
//}
//
////ʹ�õ�������vector������Ԫ��ɾ��
//void Test8()
//{
//	vector<int> v{ 1, 2, 3, 4, 5 };
//	cout << "��ЧԪ�ظ�����" << v.size() << endl;
//	cout << "�ײ�������С��" << v.capacity() << endl;
//
//	auto it = v.begin();
//	
//	////ɾ��һ��֮�������ʧЧ
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