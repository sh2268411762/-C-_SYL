//#include<iostream>
//#include<assert.h>
//using namespace std;
//模板类
//
////typedef int DataType;     //将int重命名为DataType
//
////类模板--------------并不是真正的类
//template<class T>   //泛型类
//class SeqList
//{
//public:
//	SeqList(size_t _capacity = 10)
//		:array(new T[_capacity])
//		,capacity(_capacity)
//		,size(0)
//	{
//		//构造函数
//	}
//
//	SeqList(const SeqList<T>& s)
//	{
//		//拷贝构造
//		this->array = s.array;
//		this->capacity = s.capacity;
//		this->size = s.size;
//	}
//
//	SeqList<T>& operator=(const SeqList<T>& s)
//	{
//		//赋值运算符重载
//		this->array = s.array;
//		this->capacity = s.capacity;
//		this->size = s.size;
//	}
//
//	~SeqList()
//	{
//		if (array)
//		{
//			delete[] array;
//			capacity = 0;
//			size = 0;
//		}
//	}
///////////////////////////////////////////////////////////////////////////////////
//	size_t _size()const       //顺序表元素个数
//	{
//		return size;
//	}
//
//	size_t _capacity()const   //顺序表容量
//	{
//		return capacity;
//	}
//
//	bool empty()const        //顺序表是否为空
//	{
//		return 0 == size;
//	}
//
//	void push_back(const T& data)  //尾插
//	{
//		array[size++] = data;
//	}
//
//	void pop_back()                //尾删
//	{
//		if (empty())
//		{
//			return;
//		}
//		size--;
//	}
///////////////////////////////////////////////////////////////////
//	T& operator[](size_t index)        
//	{
//		assert(index < size);
//		return this->array[index];
//	}
//	const T& operator[](size_t index)const   
//	{
//		assert(index < size);
//		return this->array[index];
//	}
//
//
//
//private:
//	T* array;           //连续空间
//	size_t capacity;    //容量
//	size_t size;        //有效元素
//
//};
//
//
//
//
//int main()
//{
//	SeqList<int> s1;   //10个整型连续空间
//	s1.push_back(10);
//	s1.push_back(2);
//	s1.push_back(3);
//	s1.push_back(4);
//	s1.push_back(5);
//	s1.push_back(6);
//	s1.push_back(7);
//	s1.push_back(8);
//	cout << s1._capacity() << endl;
//	cout << s1._size() << endl;
//	s1.pop_back();
//	cout << s1._capacity() << endl;
//	cout << s1._size() << endl;
//	cout << "s1[0] = " << s1[0] << endl;
//	s1[0] = 1;
//	cout << "s1[0] = " << s1[0] << endl;
//
//
//
//	//SeqList<double> s2;
//	//s2.push_back(1.0);
//	//s2.push_back(2.0);
//	//s2.push_back(3.0);
//	//s2.push_back(4.0);
//	//cout << s2._capacity() << endl;
//	//cout << s2._size() << endl;
//	//s2.pop_back();
//	//cout << s2._capacity() << endl;
//	//cout << s2._size() << endl;
//
//	//const SeqList<int> s3;   //无意义
//	//cout << s3[0] << endl;
//
//	return 0;
//}