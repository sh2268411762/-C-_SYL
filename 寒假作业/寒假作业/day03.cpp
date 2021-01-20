//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test1()
//{
//	int i = 0, a = 0;
//	while (i < 20)
//	{
//		for (;;)
//		{
//			if ((i % 10) == 0)
//			{
//				break;
//			}
//			else
//			{
//				i--;
//			}
//		}
//		i += 11;
//		a += i;
//	}
//	cout << a << endl;
//}
//
//class Solution1 
//{
//public:
//	bool canConstruct(string ransomNote, string magazine) 
//	{
//		if (magazine.empty() && ransomNote.empty())
//		{
//			return true;
//		}
//		int a[26] = { 0 };
//		for (size_t i = 0; i < magazine.size(); i++)
//		{
//			//magazine[i]为字母，减去'a'为索引
//			a[magazine[i] - 'a'] += 1;
//		}
//		for (size_t i = 0; i < ransomNote.size(); i++)
//		{
//			a[ransomNote[i] - 'a'] -= 1;
//			if (a[ransomNote[i] - 'a'] < 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//class Solution 
//{
//public:
//	bool isPalindrome(int x) 
//	{
//		if(x < 0)
//		{
//			return false;
//		}
//		long sum = 0;
//		int y = x;
//		while (x != 0)
//		{
//			sum *= 10;
//			sum += (x % 10);
//			x /= 10;
//		}
//		if (y == sum)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//int main()
//{
//	Solution s1;
//	cout << s1.isPalindrome(1234567899) << endl;
//	return 0;
//}