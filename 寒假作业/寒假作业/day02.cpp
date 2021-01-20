//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test1()
//{
//	int a;
//	a = 'A' + 1.6;
//	cout << a << endl;
//}
//void test2()
//{
//	int x = 10;
//	int y = 10;
//	x = y = ++y;
//	cout << x << " " << y << endl;
//}
//
//
//class Solution1 
//{
//public:
//	int removeElement(vector<int>& nums, int val) 
//	{
//		if (nums.empty())    //ÅĞ¿Õ
//		{
//			return 0;
//		}
//		int ret = 0;
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			if (val != nums[i])
//			{
//				nums[ret] = nums[i];
//				ret++;
//			}
//		}
//		return ret;
//	}
//};
//
//class Solution 
//{
//public:
//	//¼Ù¶¨ÎŞÖØ¸´ÇÒÒÑÅÅĞò
//	int searchInsert(vector<int>& nums, int target) 
//	{
//		if (nums.empty())
//		{
//			return -1;
//		}
//		int ret = 0;
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			if (target == nums[i])
//			{
//				ret = i;
//				break;
//			}
//			else if (nums[nums.size() - 1] < target)
//			{
//				ret = nums.size();
//				break;
//			}
//			else if (nums[0] > target)
//			{
//				ret = 0;
//				break;
//			}
//			else if (nums[i] > target)
//			{
//				ret = i;
//				break;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}