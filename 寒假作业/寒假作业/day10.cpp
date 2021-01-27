//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int a, b;
//void test1()
//{
//	a = 100;
//	b = 200;
//}
//struct HAR { int x, y; struct HAR* p; }h[2];
//void test2()
//{
//	h[0].x = 1; h[0].y = 2;
//	h[1].x = 3; h[1].y = 4;
//	h[0].p = &h[1]; h[1].p = h;
//	cout << (h[0].p)->x;//3
//	cout << (h[1].p)->y;//2
//}
//
//class Solution1 
//{
//public:
//	int myAtoi(string s) 
//	{
//		long ret = 0, flag1 = 0, flag2 = 0;
//		while (s[0] == ' ')
//		{
//			//如果字符串第一个是空格，则删除第一个，
//			//直到字符串第一个不再是空格
//			s.erase(0, 1);
//		}
//		if (s[0] == '+')
//		{
//			//字符串第一个为正号，删除并记录
//			flag2 = 1;
//			s.erase(0, 1);
//		}
//		if (flag2 == 0 && s[0] == '-')
//		{
//			//flag2 = 0 说明第一个不为正号
//			//则若其为负号，删除，并记录
//			flag1 = 1;
//			s.erase(0, 1);
//		}
//
//		for (char c : s)//范围for
//		{
//			if (c >= '0' && c <= '9')
//			{
//				//如果字符为'0' - '9' 则进行运算
//				ret = ret * 10 + (c - '0');
//			}
//			else
//			{
//				//否则，跳出循环
//				break;
//			}
//			if (ret > INT_MAX)
//			{
//				//如果结果大于int类型最大值，即INT_MAX
//				//则进行返回，并判断是否有负号
//				return flag1 == 1?INT_MIN : INT_MAX;
//			}
//		}
//		return flag1 == 1 ? -ret : ret;
//	}
//};
//
//class Solution2 
//{
//public:
//	vector<int> searchRange(vector<int>& nums, int target) 
//	{
//		int left = 0, right = nums.size() - 1;
//		vector<int> ret{ -1,-1 };
//		//从前往后寻找，如果找不到则left++，找到则跳出循环
//		while (left < nums.size() && nums[left] != target)
//		{
//			left++;
//		}
//		//从后往前找，如果找不到则right--，找到则跳出循环
//		while (right > 0 && nums[right] != target)
//		{
//			right--;
//		}
//		//如果left <= right，则索引可用，更新ret
//		if (left <= right)
//		{
//			ret[0] = left;
//			ret[1] = right;
//		}
//		return ret;
//	}
//};
//class Solution {
//public:
//	vector<int> searchRange(vector<int>& nums, int target) {
//		vector<int> res(2, -1);
//		if (nums.empty()) return res;
//		int n = nums.size(), l = 0, r = n - 1;
//		while (l < r) {
//			int m = l + (r - l) / 2;
//			if (nums[m] >= target) r = m;
//			else l = m + 1;
//		}
//		if (nums[l] != target) return res;
//		res[0] = l;
//		r = n;
//		while (l < r) {
//			int m = l + (r - l) / 2;
//			if (nums[m] <= target) l = m + 1;
//			else r = m;
//		}
//		res[1] = l - 1;
//		return res;
//	}
//};
//int main()
//
//{
//	//int a = 5, b = 7;
//	//test1();
//	//cout << a << "," << b << endl;
//	//test2();
//	return 0;
//}