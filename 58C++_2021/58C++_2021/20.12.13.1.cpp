//继承
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    void Eat()
    {
        cout << "Eat()" << endl;
    }

    void Sleep()
    {
        cout << "Sleep()" << endl;
    }

private:
    string _name;   //姓名
    string _gender; //性别
    int _age;       //年龄
};

class Student : public Person
{
public:
    void Study()
    {
        cout << "Study()" << endl;
    }

    void Exam()
    {
        cout << "Exam()" << endl;
    }


private:
    int _stuID; //学号
};

int main()
{

    return EXIT_SUCCESS;
}

