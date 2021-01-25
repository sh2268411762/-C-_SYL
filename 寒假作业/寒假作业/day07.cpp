//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//void test1()
//{
//	const char* p = "abcdefgh", * r;
//	long* q;
//	q = (long*)p;
//	q++;
//	r = (char*)q;
//	cout << r << endl;
//}
//
//void test2()
//{
//	char str[] = "ABCD", * p = str;
//	printf("%d\n", *(p + 4));
//}
//
//float test3(float a, int b)
//{
//	float m = 1, n = 1;
//	int i;
//	for (i = 1; i < b; i++)
//	{
//		m *= a / i;
//		n += m;
//	}
//	return n;
//}
//
////给定一个非负整数数组 A，返回一个数组，在该数组中， 
////A 的所有偶数元素之后跟着所有奇数元素。
//class Solution1 
//{
//public:
//	vector<int> sortArrayByParity(vector<int>& A) 
//	{
//		int left = 0, right = A.size() - 1;
//		while (left < right)
//		{
//			while (A[left] % 2 == 0 && left < A.size() - 1)
//			{
//				left++;
//			}//偶数则移向下一个元素
//			while (A[right] % 2 == 1 && right > 0)
//			{
//				right--;
//			}//奇数则移向前一个元素
//			if (left < right)
//			{
//				swap(A[left], A[right]);
//			}//交换，偶数在前，奇数在后
//		}
//		return A;
//	}
//};
////给定一个整数类型的数组 nums，
////请编写一个能够返回数组 “中心索引” 的方法。
////我们是这样定义数组 中心索引 的：
////数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
////如果数组不存在中心索引，那么我们应该返回 - 1。
////如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。
//class Solution 
//{
//public:
//	int pivotIndex(vector<int>& nums) 
//	{
//		int sum = 0, left = 0, lenght = nums.size();
//		for (size_t i = 0; i < lenght; i++)
//		{
//			sum += nums[i];
//		}
//		for (size_t i = 0; i < lenght; i++)
//		{
//			//左侧数字之和加上中心索引值应该等于数组总和
//			if (left * 2 + nums[i] == sum)
//			{
//				return i;
//			}
//			left += nums[i];
//		}
//		return -1;
//	}
//};
//int main()
//{
//	test1();
//	test2();
//
//
//	return 0;
//}