#pragma once

#include <assert.h>
namespace bite
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

	public:
		vector()
			:start(nullptr)
			, finish(nullptr)
			, end_of_stroage(nullptr)
		{
			//	���캯��
		}

		vector(int n, const T& data = T())
			:start(new T(n))
			, finish(start + n)
			, end_of_stroage(finish)
		{
			//memset(start,data,n);   ȫ������Ϊ0���ԣ��ú���ʹ���ֽ�����ʼ��
			for (int i = 0; i < n; i++)
			{
				start[i] = data;
			}
		}

		template<class Iterator>
		vector(Iterator first, Iterator last)   //���乹��
		{
//			distance(first, last);  //����������֮��ľ��룬������˶��ٸ�Ԫ��
			auto it = first;
			size_t count = 0;
			while (it != last)
			{
				count++;
				it++;
			}
			start = new T[count];
			finish = start;
			end_of_stroage = start + count;
			it = first;
			while (it != last)
			{
				*finish++ = *it++;
			}
		}

		vector(const vector<T>& v)  //��������
		{
			start = new T[v.capacity()];
			finish = start + v.size();
			end_of_stroage = start + v.capacity();
			for (size_t i = 0; i < v.size(); i++)
			{
				start[i] = v[i];
			}
		}

		////////////////////////////////////////////////////
		//������
		iterator begin()
		{
			return start;
		}

		iterator end()
		{
			return finish;
		}

		iterator rbegin()
		{
			return end();
		}

		iterator rend()
		{
			return begin();
		}

		//////////////////////////////////////////////////
		//����
		size_t size()const
		{
			return finish - start;
		}

		size_t capacity()const
		{
			return end_of_stroage - start;
		}

		bool empty()const
		{
			return start == finish;
		}

		void resize(size_t newsize, const T& data = T())
		{
			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize > capacity())
				{
					reserve(newsize);
				}
				for (size_t i = oldsize; i < newsize; i++)
				{
					start[i] = data;
				}
			}
			finish = start + newsize;
		}

		void reserve(size_t newcapacity)
		{
			size_t oldcapacity = capacity();
			if (newcapacity > oldcapacity)
			{
				T* temp = new T[newcapacity];
				memcpy(temp, start, sizeof(T) * oldcapacity);
				delete[] start;
				size_t count = size();
				start = temp;
				finish = start + count;
				end_of_stroage = start + newcapacity;
			}
		}

		//////////////////////////////////////////////
		//Ԫ�ط���
		T& operator[](size_t index)
		{
			assert(index < size());
			return start[index];
		}

		const T& operator[](size_t index)const
		{
			assert(index < size());
			return start[index];
		}

		T& front()
		{
			return *start;
		}

		T& front()const
		{
			return *start;
		}

		T& back()
		{
			return *(finish - 1);
		}

		T& back()const
		{
			return *(finish - 1);
		}

		///////////////////////////////
		//Ԫ���޸�
		void push_back(const T& data)
		{
			if (size() != 0 && size() == capacity())
			{
				reserve(capacity() * 2);
			}

			*finish++ = data;
		}

		void pop_back()
		{
			if (empty())
			{
				return;
			}
			--finish;
		}

		iterator insert(iterator pos, const T& data)
		{}
		iterator erase(iterator pos)
		{
			auto posnext = pos + 1;
			auto ret = pos;
			while (posnext != finish)
			{
				*pos++ = *posnext++;
			}
			finish--;
			return ret;
		}
		iterator erase(iterator first, iterator last)
		{
			finish = start; //����
		}
		void clear()
		{
			erase(begin(), end());
		}

		//void swap(vector<T>& v)
		//{
		//	std::swap(start, v.start);
		//	std::swap(finish, v.finish);
		//	std::swap(end_of_stroage, v.end_of_stroage);
		//}


	private:
		iterator start;
		iterator finish;
		iterator end_of_stroage;
	};
}

#include <iostream>
using namespace std;
void Test1()
{
	bite::vector<int> v1;        //�յ�
	bite::vector<int> v2(10, 5); //10��ֵΪ5��Ԫ��

	int array[] = { 1,2,3,4,5 };
//	bite::vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));
	bite::vector<int> v4(v2);

	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;

	auto it = v2.begin();
	while (it != v2.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}