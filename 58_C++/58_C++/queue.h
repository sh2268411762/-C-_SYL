#pragma once
#include <iostream>
#include <list>
using namespace std;

//队列
namespace SunHao
{
	template<class T>
	class queue
	{
	public:
		queue() {}

		void push(const T& data)
		{
			_con.push_back(data);
		}

		void pop()
		{
			if (_con.empty())
			{
				return;
			}
			_con.pop_front();  //队列从头部删除
		}

		T& front()
		{
			return _con.front();
		}
		const T& front()const
		{
			return _con.front();
		}
		T& back()
		{
			return _con.back();
		}
		const back()const
		{
			return _con.back();
		}

		size_t size()const
		{
			return _con.size();
		}

		bool empty()
		{
			return _con.empty();
		}

	private:
		list<T> _con;
	};
}