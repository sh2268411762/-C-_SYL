//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
////���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
////����Լ���������� 0 ֮�⣬��������������㿪ͷ
//
//class Solution1 
//{
//public:
//    vector<int> plusOne(vector<int>& digits) 
//    {
//        //ע�ⲻ����size_t �������޷�����ѭ������Ϊsize_t����Сֵ��0�������size_t��Ϊ i ������
//        //�������쳣
//        for (int i = digits.size() - 1; i >= 0; i--)
//        {
//            if (digits[i] != 9)//��λ����9��ֱ�Ӽ�1
//            {
//                digits[i]++;
//                return digits;
//            }
//            digits[i] = 0;
//        }
//        //����ѭ������˵�������ڶ���9
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
//                n1 = num;//���ֵ
//            }
//            else if(num > n2 && num != n1)
//            {
//                n3 = n2;
//                n2 = num;//�ڶ���
//            }
//            else if (num > n3 && num != n1 && num != n2)
//            {
//                n3 = num;//������
//            }
//        }
//        //n3 == LONG_MIN ��˵�������������������־�Ϊ��һ���ڶ���
//        return n3 == LONG_MIN ? n1 : n3;
//    }
//};
//int main()
//{
//    cout << LONG_MIN << endl;
//	return 0;
//}