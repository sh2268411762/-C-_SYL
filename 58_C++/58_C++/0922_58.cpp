//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
////auto
////C++11�У��������ʱ���Բ���д���ͣ�ֱ��ʹ��auto���ñ������ڱ���׶�
////���ݳ�ʼ�����ʽ�����Ͷ�auto���εı��������Ƶ�,������Ϊ�������������η��Ͷ�������
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = a;
//	auto d = 'c';
//	auto e = 12.22;
//	auto f = Add(3, 4);
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//	cout << typeid(f).name() << endl;
//
//
//
//	//auto��ָ��һ��ʹ��ʱauto��auto*û������
//	int aa = 10;
//	auto* paa1 = &aa;
//	auto paa2 = &aa;
//	cout << typeid(paa1).name() << endl;
//	cout << typeid(paa2).name() << endl;
//
//	//auto �����������ã������� &�������Ƕ�����һ���µı���
//	int bb = 20;
//	auto rbb1 = bb;
//	auto& rbb2 = bb;
//	rbb2 = 10;
//	cout << typeid(rbb1).name() << endl;
//	cout << typeid(rbb2).name() << endl;
//	cout << rbb1 << "   " << rbb2 << endl;//20   10
//
//	return 0;
//}
//
//////��������
//////��inline���εĺ���������ʱC++���������ڵ������������ĵط�չ����û�к���ѹջ�Ŀ�����������������Ч��
//////inline ���������Խ�����������ֿ�������ᵼ�����Ӵ�����Ϊinline�ᱻչ����
////inline int Add(int a, int b)  //�Ƚ϶�С�ĺ�������д����������
////{
////	return a + b;
////}
////int main()
////{
////	cout << Add(2, 3) << endl;
////	return 0;
////}
//
//
////int main()
////{
////	//C++��Ϊ������C������Ϊ�����޸ĵı���
////	const int a = 10;  //�ڱ���׶ν��к��滻,���к��滻����
////	int* pa = (int*)&a;
////	*pa = 100;
////	cout << a << endl;   //10������׶ν�a�滻Ϊ10
////	cout << *pa << endl;
////
////
////	return 0;
////}