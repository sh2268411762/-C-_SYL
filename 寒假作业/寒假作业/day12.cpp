//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//
//int func(int i, int j)
//{
//	if (i <= 0 || j <= 0)
//	return 1;
//	return 2 * func(i - 3, j / 2);
//}
//void test1()
//{
//	cout << func(15, 20) << endl;
//}
//void test2()
//{
//	int a[] = { 2,4,6,8 }, * p = a, i;
//	for (i = 0; i < 4; i++)
//	{
//		a[i] = *p++;
//	}
//	cout << a[2] << endl;
//}
//void test3()
//{
//	int a = 1, b = 2;
//	for (; a < 8; a++)
//	{
//		b += a;
//		a += 2;
//	}
//	cout << a << " " << b << endl;
//}
//
//class Solution 
//{
//public:
//	int findUnsortedSubarray(vector<int>& nums) 
//	{
//		int left = 0, num = nums.size();
//		while (left + 1 < num && nums[left + 1] >= nums[left])
//		{
//			left++;
//		}
//		left++;
//		int right = num - 1;
//		while (right - 1 >= 0 && nums[right - 1] <= nums[right])
//		{
//			right--;
//		}
//		right--;
//
//		if (left == num && right == -1)
//		{
//			return 0;
//		}
//
//		int MAX = -1e9;
//		for (int i = 0; i <= right; i++)
//		{
//			MAX = max(MAX, nums[i]);
//		}
//		int MIN = 1e9;
//		for (int i = left; i < num; i++)
//		{
//			MIN = min(MIN, nums[i]);
//		}
//
//		int i = 0;
//		while (i < left && nums[i] <= MIN)
//		{
//			i++;
//		}
//		left = i;
//		i = num - 1;
//		while (i > right && nums[i] >= MAX)
//		{
//			i--;
//		}
//		right = i;
//		return (1 + right - left);
//	}
//
//	int evalRPN(vector<string>& tokens) {
//		stack<int> numbers;
//		for (int i = 0; i < tokens.size(); ++i) {
//			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
//				int res;
//				int n2 = numbers.top();
//				numbers.pop();
//				int n1 = numbers.top();
//				numbers.pop();
//
//				if (tokens[i] == "+")
//					res = n1 + n2;
//				else if (tokens[i] == "-")
//					res = n1 - n2;
//				else if (tokens[i] == "/")
//					res = n1 / n2;
//				else
//					res = n1 * n2;
//				numbers.push(res);
//			}
//			else {
//				numbers.push(stoi(tokens[i]));
//			}
//		}
//		return numbers.top();
//	}
//};
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}