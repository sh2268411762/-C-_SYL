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
	String s3(nullptr);   //�����Կ�ָ����д���ͻ����

//	String s4(s2);   //��������
//	//ǳ������ͬһ��ַ����һ�������е�����ԭ�ⲻ���Ŀ�������һ�������С������ֽ���ֱ�ӽ��п���
//	//        ����������漰����Դ�Ĺ�����ô��������ڵײ㹲�õľ���ͬһ����Դ
//	//���  �����������������ʱ��ͬһ����Դ���ͷŶ�δ����쳣

//	//�������ÿ�����󶼶���ӵ���Լ�����Դ���������������������ֵʱ����ÿ�����󶼹����Լ�����Դ����


//	String s5("World");
//	s2 = s4;   //Ҳ��ǳ������ͬһ��ַ��s2ԭ���Ŀռ�й¶��ͬʱָ��s4


	String s6(s2);  //���
	String s7("Hello World");
	s2 = s7;
}

int main()
{
	Test1();
	return 0;
}