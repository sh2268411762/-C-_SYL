//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//
//class Solution1 
//{
//public:
//	vector<int> sortedSquares(vector<int>& nums) 
//	{
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			nums[i] *= nums[i];
//		}
//		sort(nums.begin(),nums.end());
//		return nums;
//	}
//};
//
//class Solution 
//{
//public:
//	string reverseOnlyLetters(string S) 
//	{
//		if (S.empty())
//		{
//			return S;
//		}
//		int left = 0, right = S.size() - 1;
//		while (left < right)
//		{
//			while (!isalpha(S[left]) && left < S.size())
//			{
//				left++;
//			}
//			while (!isalpha(S[right]) && right > 0)
//			{
//				right--;
//			}
//			if (left < right)
//			{
//				swap(S[left++], S[right--]);
//			}
//		}
//		return S;
//	}
//};
//void test1()
//{
//	int n = 2;
//	n += n -= n * n;
//	cout << n << endl;
//}
//int main()
//{
////	test1();
//	vector<int> num = { -4,-1,0,3,10 };
//	return EXIT_SUCCESS;
//}