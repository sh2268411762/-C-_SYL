#include<iostream>
#include<string>
using namespace std;

class String
{
public:
	String(const char* _str = "")
	{
		if (_str == nullptr)
		{
			_str = "";
			//str = new char[1];
			//*str = '\0';
		}
		str = new char[strlen(_str) + 1];
		strcpy(str, _str);
	}

	~String()
	{
		if (str)
		{
			delete[] str;
			str = nullptr;
		}
	}

	String(const String& s)
		:str(new char[strlen(s.str) + 1])
	{
		strcpy(str, s.str);

		//:str(nullptr)
		//String strTemp(s.str);
		//std::swap(str, strTemp.str);
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			char* temp = new char[strlen(s.str) + 1];
			strcpy(temp, s.str);
			delete[] str;
			str = temp;

			//std::swap(str, s.str);
		}
		return *this;
	}

private:
	char* str;
};

void Test1()
{
	String s1;
	String s2("Hello");
	String s3(nullptr);   //若不对空指针进行处理就会崩溃

//	String s4(s2);   //拷贝构造
//	//浅拷贝：同一地址，将一个对象中的内容原封不动的拷贝到另一个对象中——从字节上直接进行拷贝
//	//        如果对象中涉及到资源的管理，那么多个对象在底层共用的就是同一份资源
//	//后果  ：当多个对象在销毁时，同一份资源被释放多次触发异常

//	//深拷贝：让每个对象都独立拥有自己的资源——即当发生拷贝构造或赋值时，让每个对象都管理自己的资源即可


//	String s5("World");
//	s2 = s4;   //也是浅拷贝，同一地址，s2原来的空间泄露，同时指向s4


	String s6(s2);  //深拷贝
	String s7("Hello World");
	s2 = s7;
}

int main()
{
	Test1();
	return 0;
}