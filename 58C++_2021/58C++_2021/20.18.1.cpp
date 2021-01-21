//
// Created by AI on 2021/1/21.
//默认函数





#include <iostream>
using namespace std;

//1、如果基类没有显式增加构造函数，则子类也可以不用添加（或这根据子类是否需要选择性的增加）
# if 0
class Base
{
public:
    void setBase(int b)
    {
        _b = b;
    }

public:
    int _b;
};


class Derived: public Base
{
public:
    Derived()
    {
       cout<<"子类::构造 Derived()"<<endl;
    }

    void setDerived(int b,int d)
    {
        _d = d;
        _b = b;
    }

public:
    int _d;
};
#endif

//2、如果基类具有默认或全缺省构造函数，
// 则子类也可以不用添加（或这根据子类是否需要选择性的增加）
# if 0
class Base
{
public:
    Base()
    :_b(0)
    {
        cout<<"基类::构造函数 Base()"<<endl;
    }


    void setBase(int b)
    {
        _b = b;
    }

public:
    int _b;
};


class Derived: public Base
{
public:
    void setDerived(int b,int d)
    {
        _d = d;
        _b = b;
    }

public:
    int _d;
};
#endif


//3、基类具有非全缺省带参构造函数，则子类必须显式定义带参构造函数

class Base
{
public:
    explicit Base(int b)
            :_b(b)
    {
        cout<<"基类::构造函数 Base(b)"<<endl;
    }

    void setBase(int b)
    {
        _b = b;
    }

public:
    int _b;
};


class Derived: public Base
{
public:
    Derived(int d,int b)
    : Base(b)
    ,_d(d)
    {
       cout<<"子类::带参构造 Derived(d,b)"<<endl;
    }

    void setDerived(int b,int d)
    {
        _d = d;
        _b = b;
    }

public:
    int _d;
};