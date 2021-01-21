//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//
//class Solution {
//public:
//    bool isLongPressedName(string name, string typed) {
//        int i, k;
//        for (i = 0, k = 0; i < name.size() && k < typed.size();) 
//        {
//            if (name[i] != typed[k])
//            {
//                return false;
//            }
//            int j = i, t = k;
//            while (j < name.size() && name[j] == name[i])
//            {
//                j++;
//            }
//            while (t < typed.size() && typed[t] == typed[k])
//            {
//                t++;
//            }
//            if (j - i > t - k)
//            {
//                return false;
//            }
//            i = j, k = t;
//        }
//        return i == name.size() && k == typed.size();
//    }
//};
//
//
//class Solution1
//{
//public:
//    bool containsDuplicate(vector<int>& nums)
//    {
//        unordered_set<int> numSet(nums.begin(), nums.end());
//        return numSet.size() != nums.size();
//    }
//};
//int main()
//{
//
//	return 0;
//}