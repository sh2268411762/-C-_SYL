//#include<iostream>
//using namespace std;
//
//class Test
//{
//public:
//	Test(int _t = 0)
//		:t(_t)
//		,p(new int)
//	{
//		cout << "Test(int):" << this << endl;
//	}
//
//	~Test()
//	{
//		delete p;
//		cout << "~Test(int)" << this << endl;
//	}
//
//private:
//	int t;
//	int* p;
//};
//
////void* operator new(size_t size,char* filename,char* funcname,size_t LineNo)
////{
////	cout << filename << "-" << funcname << "-" << LineNo << ":" << size << endl;
////	return malloc(size);
////}
////#define new new(__FILE__,__FUNCDNAME__,__LINE__)
////placement-new--->��λnew���ʽ
//int main() //�ȴ����ĺ��ͷ�
//{
//	Test t1(100);
//	//new�ڵײ�����void* operator new��size_t size������ռ�malloc
//	Test* pt1 = new Test(100);  //new��������ռ䣬�ٵ��ù��캯��
//	Test* pt2 = new Test[10];   //����ռ䣨void* operatornew[](size_t size)������ε��ù��캯�����г�ʼ��
//
//
//
//
//
//
//	////�����������������Ϳռ䣬�����������
//	//Test* pt = (Test*)malloc(sizeof(Test));  //�����ڶ�������ռ䣬�����ܳ�֮Ϊ������Ϊû�е��ù��캯������������
//	//free(pt);
//	delete pt1;   //delete���ȵ�������������������е���Դ��Ȼ�����void operator delete(void *p)�ͷ�--->free
//	delete[] pt2; //delete[]�����������Ȼ�����void operator delete[](void* p)�ͷ�
//				  
//				  
//	//Windows�ṩ��һ��api�������������м򵥵��ڴ�й©��⣬����Ҫ���Ĵ����֮��
//	_CrtDumpMemoryLeaks();
//	return 0;
//}
