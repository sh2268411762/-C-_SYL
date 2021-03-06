//#include <iostream>
//#include <string>
//
//using namespace std;
////继承
//
//class Person
//{
//public:
//    void setPerson(const string &name, const string &gender, int age)
//    {
//        _name = name;
//        _gender = gender;
//        _age = age;
//    }
//
//    void printPerson() const
//    {
//        cout << _name << " " << _gender << " " << _age << endl;
//    }
//
//    void Eat()
//    {
//        cout << "Eat()" << endl;
//    }
//
//    void Sleep()
//    {
//        cout << "Sleep()" << endl;
//    }
//
//
//protected:
//    string _name;   //姓名
//    string _gender; //性别
//    int _age;       //年龄
//};
//
//class Student : public Person
//{
//public:
//    void setStudent(const string &name, const string &gender, int age, int stuId, const string &major)
//    {
//        setPerson(name, gender, age);
//        _stuID = stuId;
//        _major = major;
//    }
//
//    void printStudent() const
//    {
//        cout << _name << " " << _gender << " " << _age << " " << _stuID << " " << _major << endl;
//    }
//
//    void Study()
//    {
//        cout << "Study()" << endl;
//    }
//
//    void Exam()
//    {
//        cout << "Exam()" << endl;
//    }
//
//
//    int _stuID;
//protected:
//    //学号
//    string _major; //专业
//};
//
//class Teacher : public Person
//{
//public:
//    void setTeacher(const string &name, const string &gender, int age, int jobid)
//    {
//        setPerson(name, gender, age);
//        _jobid = jobid;
//    }
//
//    void printTeacher() const
//    {
//        cout << _name << " " << _gender << " " << _age << " " << _jobid << endl;
//    }
//
//    void Tea()
//    {
//        cout << "Tea()" << endl;
//    }
//
//
//protected:
//    int _jobid; // 工号
//};
//
//
//void test1()
//{
//    Teacher t1;
//    t1.Tea();
//    t1.Eat();
//    t1.Sleep();
//
//    Student s1;
//    s1.Exam();
//    s1.Study();
//    s1.Sleep();
//    s1.Eat();
//
//
//}
//
//void test2()
//{
//    Person p;
//    Student s;
//
//    //一、子类对象可以赋值给父类对象/指针/引用
//    p = s; //子类（派生类）可以赋值给父类（基类）
//    Person *pp = &s;
//    Person &rp = s;
//
//    //二、父类对象不能赋值给子类对象
////  s = p; //父类（基类）不可以赋值给子类（派生类）
//
//    p.setPerson("张三", "男", 34);
//    p.printPerson();
//
//    s.setStudent("小李", "男", 19, 1831050199, "计算机");
//    s.printStudent();
//
//    p = s;
//    p.printPerson();
//
//    //三、基类的指针可以通过强制类型转换赋值给派生类的指针
//    pp = &s;
//    Student *ps1 = (Student *) pp; // 这种情况转换时可以的。
//    ps1->_stuID = 10;
//
//    pp = &p;
//    Student *ps2 = (Student *) pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
////    ps2->_stuID = 10;
//}
//
//
//int main()
//{
//    test1();
//    test2();
//    return EXIT_SUCCESS;
//}
//
