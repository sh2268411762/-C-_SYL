#include <iostream>
#include <string>
#include <cassert>
using namespace std;


namespace bite
{
	class string
	{
	public:
		typedef char* iterator;

	public:
		//构造函数
		string(const char* str = "")
		{
			if (nullptr == _str)
			{
				str = "";
			}
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		string(size_t n, char ch)
			:_str(new char[n+1])
			,_size(n)
			,_capacity(n)
		{
			memset(_str, n, ch);
			_str[_size] = '\0';
		}
		//拷贝构造
		string(const string& s)
			:_str(new char[s._capacity + 1])
			,_size(s._size)
			,_capacity(s._capacity)
		{
			strcpy(_str, s._str);
		}
		template<class Iterator>
		string(Iterator firat, Iterator last)
		{
			auto it = first;
			size_t count = 0;//区间中有多少元素
			while (is != last)
			{
				count++;
				is++;
			}
			it = first;
			_size = _capacity = count;
			_str = new char[_capacity + 1];
			for (size_t i = 0, i < _size; i++)
			{
				_str[i] = *it++;
			}
			_str[_size] = '\0';
		}
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				char* temp = new char[s._capacity + 1];
				strcpy(temp, s._str);
				delete[] _str;
				_str = temp;
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
				_capacity = 0;
				_size = 0;
			}
		}
		////////////////////////////////////////////////
		//迭代器操作
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}

		////////////////////////////////////////////////
		//容量相关
		size_t size()const
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		bool empty()const
		{
			return 0 == _size;
		}

		void resize(size_t newsize, char ch = char())   //char() == 0
		{
			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize > _capacity)
				{
					reserve(newsize);
				}
				memset(_str + _size, ch, newsize - oldsize);
				_size = newsize;
			}
			_str[_size] = '\0';
		}
		void reserve(size_t newcapacity)
		{
			size_t oldcapacity = capacity();
			if (newcapacity > oldcapacity)
			{
				char* temp = new char[newcapacity];
				strcpy(temp, _str);
				delete[] _str;
				_str = temp;
				_capacity = newcapacity;
			}
		}
		//////////////////////////////////////////////////////
		//元素访问
		char& operator[](int index)const
		{
			assert(index < size());
			return _str[index];
		}
		//////////////////////////////////////////////////////////
		//修改
		void push_back(char ch)
		{
			*this += ch;
		}
		string& operator+=(char ch)
		{
			if (size() == capacity())
			{
				reserve(2 * capacity());
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}
		string& operator+=(char* str)
		{
			size_t len = strlen(str);
			char* temp = new char[_size + len + 1];
			strcpy(temp, _str);
			strcat(temp + _size, str);
			delete[] _str;
			_str = temp;
			_size += len;
			_capacity = _size;
			return *this;
		}
		string& operator+=(const string& s)
		{
			*this += s._str;
			return *this;
		}

		string& insert(size_t pos, char ch);
		iterator erase(iterator pos);
		void clear()
		{
			_size = 0;
			_str[0] = '\0';
		}
		/////////////////////////////////////////////////////
		//特殊操作
		const char* c_str()const
		{
			return _str;
		}
		size_t find(char ch, size_t pos = 0)
		{
			while (pos < _size)
			{
				if (_str[pos] == ch)
				{
					return pos;
				}
				pos++;
			}
			return npos;
		}
		size_t rfind(char ch, size_t pos = npos)
		{
			int cur = (pos == npos) ? _size - 1 : pos;
			while (cur >= 0)
			{
				if (_str[cur] == ch)
				{
					return cur;
				}
				cur--;
			}
			return npos;
		}
		size_t substr(size_t pos = 0, size_t n = npos);

		bool operator<(const string& s)const;
		bool operator>(const string& s)const;
		bool operator==(const string& s)const;
		bool operator!=(const string& s)const;

		friend ostream& operator<<(ostream& _cout, const string& s);



	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static size_t npos;
	};
	size_t string::npos = -1;
}
int main()
{

	return 0;
}