#pragma once

#include <iostream>
#include <vector>
using namespace std;

//ջ
namespace SunHao
{
	template<class T>
	class stack
	{
	public:
		stack() {}

		void push(const T& data)
		{
			Con.push_back(data);
		}

		void pop()
		{
			if (Con.empty())
			{
				return;
			}
			Con.pop_back();
		}

		T& top()
		{
			return Con.back();
		}
		
		const top() const
		{
			return Con.back();
		}

		size_t size()
		{
			return Con.size();
		}

		bool empty() const
		{
			return Con.empty();
		}



	private:
		vector<T> Con;
	};
}

