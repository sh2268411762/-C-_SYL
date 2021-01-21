////
//// Created by AI on 2021/1/21.
////作用域
////基类和子类具有不同的作用域
//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//    void fun()
//    {
//        cout << "Base::fun()" << endl;
//    }
//
//    int _b;
//};
//
//
//class Derived : public Base
//{
//public:
//    void fun(int a)
//    {
//        cout << "Derived::fun()" << endl;
//    }
//
//public:
//    int _d;
//};
//
//int main()
//{
//    Derived d;
//    d.fun(9);
//    //子类可以访问自己重写的fun()函数
//    //d.fun();  //错误
//    //不能访问从父类继承下来的fun()函数
//    //子类和父类有同名函数则父类函数会被同名隐藏
//    d.Base::fun();
//    return EXIT_SUCCESS;
//}