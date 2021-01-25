//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int test1(int n)
//{
//	if (n)
//	{
//		return test1(n - 1) + n;
//	}
//	else
//	{
//		return n;
//	}
//}
//int test2(int x, int y)
//{
//	if (x == y)
//	{
//		return (x);
//	}
//	else
//	{
//		return ((x + y) / 2);
//	}
//}
//void test3()
//{
//	int a = 5;
//	a <<= 1;
//	cout << a << endl;
//}
//
//class Solution1
//{
//public:
//	vector<int> twoSum(vector<int>& nums, int target)
//	{
//		vector<int> temp = { -1,-1 };
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			for (size_t j = i + 1; j < nums.size(); j++)
//			{
//				if (target - nums[j] == nums[i])
//				{
//					temp[0] = i;
//					temp[1] = j;
//				}
//			}
//		}
//		return temp;
//	}
//};
//
//class Solution 
//{
//public:
//	string addBinary(string a, string b) 
//	{
//		if (a.empty())
//		{
//			return b;
//		}
//		if (b.empty())
//		{
//			return a;
//		}
//
//		string ret = "";
//		int i = a.size() - 1;
//		int j = b.size() - 1;
//		int c = 0;
//		while (i >= 0 || j >= 0 || c != 0)
//		{
//			int m = i > -1 ? a[i] - '0' : 0;
//			int n = j > -1 ? b[j] - '0' : 0;
//			int temp = m + n + c;
//			ret += '0' + temp % 2;
//			c = temp / 2;
//			i--, j--;
//		}
//		reverse(ret.begin(), ret.end());
//		return ret;
//	}
//};
//int main()
//{
//	cout << test1(4) << endl;
//	int a = 4, b = 5, c = 6;
//	cout << test2(2 * a, test2(b, c)) << endl;
//	test3();
//	return 0;
//}