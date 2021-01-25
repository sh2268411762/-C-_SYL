//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
////最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
////你可以假设除了整数 0 之外，这个整数不会以零开头
//
//class Solution1 
//{
//public:
//    vector<int> plusOne(vector<int>& digits) 
//    {
//        //注意不能用size_t ，否则无法跳出循环，因为size_t的最小值是0，如果用size_t作为 i 的类型
//        //则会出现异常
//        for (int i = digits.size() - 1; i >= 0; i--)
//        {
//            if (digits[i] != 9)//该位不是9，直接加1
//            {
//                digits[i]++;
//                return digits;
//            }
//            digits[i] = 0;
//        }
//        //跳出循环，则说明数组内都是9
//        digits.insert(digits.begin(), 1);
//        return digits;
//    }
//};
//
//class Solution 
//{
//public:
//    int thirdMax(vector<int>& nums) 
//    {
//        //LONG_MIN = -2147483648
//        long n1 = LONG_MIN, n2 = LONG_MIN, n3 = LONG_MIN;
//        for (auto& num : nums)
//        {
//            if (num > n1)
//            {
//                n3 = n2;
//                n2 = n1;
//                n1 = num;//最大值
//            }
//            else if(num > n2 && num != n1)
//            {
//                n3 = n2;
//                n2 = num;//第二大
//            }
//            else if (num > n3 && num != n1 && num != n2)
//            {
//                n3 = num;//第三大
//            }
//        }
//        //n3 == LONG_MIN 则说明不足三个数或多个数字均为第一大或第二大
//        return n3 == LONG_MIN ? n1 : n3;
//    }
//};
//int main()
//{
//    cout << LONG_MIN << endl;
//	return 0;
//}