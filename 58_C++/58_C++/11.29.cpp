#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;


//stack��queue  ջ�Ͷ���
//ջ���������Ա�����ȳ���
//	ջ����ֻ������һ�˽������ݲ����ɾ������
//	ջ�ף���һ�˼�Ϊջ��
//	Ӧ�ó�����ѡ���������ŵ�ƥ�䡢RPN��ֵ�����ݷ����Թ��������ݹ�ת��Ϊѭ��

//push()/pop()/top  -->O(1)
//getMin            -->O(1)  ��ȡ��Сֵ


//���У����Խṹ���Ƚ��ȳ���
//	��ͷ������ɾ������
//	��β�����в������
//	Ӧ�ó�����������ȱ���-->�������

//��-->���ȼ����У�priority_queue��
//	�������е����������һά�����У���ȫ��������
//		������������ڵ���亢�ӽ��С-->С�ѣ��Ѷ�Ԫ��һ����С���ӶѶ�������Ҷ��·���н��Ϊ����
//		��֮Ϊ��ѣ��Ѷ�Ԫ��һ����󣬴ӶѶ�������Ҷ��·���н��Ϊ����
//	Ӧ�ó�����top_k   ������
//	Ĭ�ϴ�ѣ�Ԫ�ش洢��vector��
//	�û��Լ����ݲ����ı��С�ѣ�less��greater��<functional>

void Testpriority_queue()
{
	priority_queue<int> p;
	p.push(5);
	p.push(3);
	p.push(4);
	p.push(1);
	p.push(6);
	p.push(3);
	cout << p.top() << endl;
}
int main()
{
	Testpriority_queue();
	return 0;
}