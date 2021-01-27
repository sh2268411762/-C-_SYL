//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution 
//{
//public:
//    int compress(vector<char>& chars) 
//    {
//        int len = 0;
//        for (size_t i = 0, j = 0; i < chars.size(); i++, j++)
//        {
//            if (i + 1 == chars.size() || chars[i] != chars[i + 1])
//            {
//                chars[len++] = chars[i];
//                if (j > 1)
//                {
//                    for (char c : to_string(j))
//                    {
//                        chars[len++] = c;
//                    }
//                }
//            }
//            j = 0;
//        }
//        return len;
//    }
//};
//class Solution1 
//{
//public:
//    bool isPalindrome(string s) 
//    {
//        if (s.empty())
//        {
//            return true;
//        }
//        int left = 0, right = s.size() - 1;
//        while (left < right)
//        {
//            while (left < s.size() && !(isalpha(s[left])) && !(isalnum(s[left])))
//            {
//                left++;
//            }
//            while (right > 0 && !(isalpha(s[right])) && !(isalnum(s[right])))
//            {
//                right--;
//            }
//            if (left < right)
//            {
//                if (s[left] >= 'a' && s[left] <= 'z')
//                {
//                    s[left] = s[left] - 32;
//                }
//                if (s[right] >= 'a' && s[right] <= 'z')
//                {
//                    s[right] = s[right] - 32;
//                }
//                if (s[left] != s[right])
//                {
//                    return false;
//                }
//                left++, right--;
//            }
//        }
//        return true;
//    }
//};
//int main()
//{
//    Solution1 s;
//    cout << s.isPalindrome("0P");
//	return EXIT_SUCCESS;
//}