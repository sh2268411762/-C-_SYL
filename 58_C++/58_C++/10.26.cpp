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
////placement-new--->定位new表达式
//int main() //先创建的后释放
//{
//	Test t1(100);
//	//new在底层运用void* operator new（size_t size）申请空间malloc
//	Test* pt1 = new Test(100);  //new：先申请空间，再调用构造函数
//	Test* pt2 = new Test[10];   //申请空间（void* operatornew[](size_t size)），多次调用构造函数进行初始化
//
//
//
//
//
//
//	////可用来申请内置类型空间，不能申请对象
//	//Test* pt = (Test*)malloc(sizeof(Test));  //可以在堆上申请空间，但不能称之为对象，因为没有调用构造函数和析构函数
//	//free(pt);
//	delete pt1;   //delete：先调用析构函数清理对象中的资源，然后调用void operator delete(void *p)释放--->free
//	delete[] pt2; //delete[]：多次析构，然后调用void operator delete[](void* p)释放
//				  
//				  
//	//Windows提供的一个api函数，用来进行简单地内存泄漏检测，放在要检测的代码块之后
//	_CrtDumpMemoryLeaks();
//	return 0;
//}
