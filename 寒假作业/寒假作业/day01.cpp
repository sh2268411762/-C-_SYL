//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//void test1()
//{
//    int num = 7, sum = 7;
//    sum = num++;
//    sum++;
//    ++num;
//    cout << sum << endl;
//}
//void test2()
//{
//    int i = 10, j = 10, k = 3;
//    k *= i + j;
//    cout << k << endl;
//}
//void test3()
//{
//    int i, j, a[2][3];
//    //A
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)//0 1 2
//        {
//            a[i][j] = i * 3 + j + 1;
//        }
//    }
//
//    //B
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 2; j++)
//        {
//            a[j][i] = j * 3 + i + 1;
//        }
//    }
//
//    //C
//    for (i = 0; i < 6; i++)
//    {
//        a[i / 3][i % 3] = i + 1;
//    }
//
//    //D
//    for (i = 1; i <= 6; i++)
//    {
//        a[i][i] = i;
//    }
//}
//
//
////大写字母转小写字母
//class Solution1 
//{
//public:
//    string toLowerCase(string str) 
//    {
//        size_t length = str.size();
//        for (size_t i = 0; i < length; i++)
//        {
//            if (str[i] > 'A' && str[i] < 'Z')
//            {
//                str[i] += 32;
//            }
//        }
//        return str;
//    }
//};
//
//
////旋转数组
//class Solution2   //中间数组
//{
//public:
//    void rotate(vector<int>& nums, int k) 
//    {
//        size_t length = nums.size();
//        k %= length;
//
//        vector<int>num(nums);
//        for (size_t i = 0; i < length; i++)
//        {
//            if (i + k < length)
//            {
//                nums[i + k] = num[i];
//            }
//            else
//            {
//                nums[i + k - length] = num[i];
//            }
//        }
//    }
//};
//
//class Solution    //反转
//{
//public:
//    void rotate(vector<int>& nums, int k) 
//    {
//        size_t length = nums.size();
//        k %= length;
//
//        reverse(nums.begin(), nums.end());
//        reverse(nums.begin(), nums.begin() + k);
//        reverse(nums.begin() + k, nums.end());
//
//    }
//};
//int main()
//{
//    //1
//    test1();
//    test2();
//    test3();
//
//
//    return 0;
//}
