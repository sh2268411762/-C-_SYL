//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int number = 0;
//	double beginBalance = 0;   //�³�Ƿ��
//	double charges = 0;        //���������ܽ��
//	double credit = 0;         //�����ܽ��
//	double creditLimit = 0;    //��������ö��
//	unsigned int count = 0;
//
//	cout << "�������һ���˿��˺ţ�С��0���˳�����";
//	cin >> number;
//
//	while (number >= 0)
//	{
//		cout << "������ù˿��³�Ƿ�";
//		cin >> beginBalance;
//		cout << "�����뱾�¸ù˿͹����ܽ�";
//		cin >> charges;
//		cout << "�����뱾�¸ù˿ʹ�����ܽ�";
//		cin >> credit;
//		cout << "������ù˿���������ö�ȣ�";
//		cin >> creditLimit;
//		double newBalance = beginBalance + charges - credit;
//		count++;
//		if (newBalance > creditLimit)
//		{
//			cout << "�˺�    ��" << number << endl;
//			cout << "���ö�ȣ�" << creditLimit << endl;
//			cout << "�µ�Ƿ�" << newBalance << endl;
//			cout << "Credit Limit Exceeded." << endl;
//		}
//		else
//		{
//			cout << "�˺ţ�" << number << "δ��֧��" << endl;
//		}
//
//		cout << "\n��������һ���˿��˺ţ�С��0���˳�����";
//		cin >> number;
//	}
//
//	if (count != 0)
//	{
//		cout << "��¼��" << count << "���˿���Ϣ\n��ӭ�´�����������" << endl;
//	}
//	else
//	{
//		cout << "δ¼�룬�����˳�������" << endl;
//	}
//	return 0;
//}