//#include<iostream>
//using namespace std;
//
//
//
////int main()
////{
////	void* p = new char[0xfffffffful];
////	cout << "new:" << p << endl;
////	return 0;
////}
//
//
////ģ�庯��
//template<typename T>
//void swap(T& t1, T& t2)
//{
//	T temp = t1;
//	t1 = t2;
//	t2 = temp;
//}
//
//template<typename T>
//T add(const T& t1, const T& t2)
//{
//	return t1 + t2;
//}
//int main()
//{
//	cout << add(2, 3) << endl;       //��ʽʹ��ģ��
//	cout << add(2.4, 3.5) << endl;
//
//	cout << add<int>(2, 3) << endl;  //��ʽʹ��ģ��
//	cout << add<double>(12.34, 5) << endl;
//	cout << add<double>(12.9, 67.8) << endl;
//	return 0;
//}