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
//			//����ַ�����һ���ǿո���ɾ����һ����
//			//ֱ���ַ�����һ�������ǿո�
//			s.erase(0, 1);
//		}
//		if (s[0] == '+')
//		{
//			//�ַ�����һ��Ϊ���ţ�ɾ������¼
//			flag2 = 1;
//			s.erase(0, 1);
//		}
//		if (flag2 == 0 && s[0] == '-')
//		{
//			//flag2 = 0 ˵����һ����Ϊ����
//			//������Ϊ���ţ�ɾ��������¼
//			flag1 = 1;
//			s.erase(0, 1);
//		}
//
//		for (char c : s)//��Χfor
//		{
//			if (c >= '0' && c <= '9')
//			{
//				//����ַ�Ϊ'0' - '9' ���������
//				ret = ret * 10 + (c - '0');
//			}
//			else
//			{
//				//��������ѭ��
//				break;
//			}
//			if (ret > INT_MAX)
//			{
//				//����������int�������ֵ����INT_MAX
//				//����з��أ����ж��Ƿ��и���
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
//		//��ǰ����Ѱ�ң�����Ҳ�����left++���ҵ�������ѭ��
//		while (left < nums.size() && nums[left] != target)
//		{
//			left++;
//		}
//		//�Ӻ���ǰ�ң�����Ҳ�����right--���ҵ�������ѭ��
//		while (right > 0 && nums[right] != target)
//		{
//			right--;
//		}
//		//���left <= right�����������ã�����ret
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