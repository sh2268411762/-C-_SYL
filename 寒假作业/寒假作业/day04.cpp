//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//#define N 2
//#define M N+1
//#define NUM (M+1)*M/2
//void test1()
//{
//	cout << NUM << endl;
//}
//
//class Solution 
//{
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//	{
//		int end = m + n - 1;	//最后一个数字的下标
//		while (n)//用nums2确定循环此时
//		{
//			if (m == 0 || nums1[m - 1] <= nums2[n - 1])
//			{
//				nums1[end--] = nums2[--n];
//			}
//			else
//			{
//				nums1[end--] = nums1[--m];
//			}
//		}
//	}
//};
//
//class Solution1 
//{
//public:
//	int lengthOfLastWord(string s) 
//	{
//		while (isspace(s[s.size() - 1]))
//		{
//			s.pop_back();
//			if (s.empty())
//			{
//				return 0;
//			}
//		}
//		int ret = 0;
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (!isspace(s[i]))
//			{
//				ret++;
//			}
//			else
//			{
//				ret = 0;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
////	test1();
//
//	string str = "Hello World";
//	Solution1 s;
//	int ret = s.lengthOfLastWord(str);
//	cout << ret << endl;
//	return 0;
//}