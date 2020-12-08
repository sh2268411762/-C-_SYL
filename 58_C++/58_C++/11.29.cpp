#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;


//stack和queue  栈和队列
//栈：特性线性表（后进先出）
//	栈顶：只能在这一端进行数据插入和删除操作
//	栈底：另一端即为栈底
//	应用场景：选择器：括号的匹配、RPN求值、回溯法（迷宫）、将递归转换为循环

//push()/pop()/top  -->O(1)
//getMin            -->O(1)  获取最小值


//队列：线性结构（先进先出）
//	队头：进行删除操作
//	队尾：进行插入操作
//	应用场景：广度优先遍历-->层序遍历

//堆-->优先级队列（priority_queue）
//	将集合中的数组放置在一维数组中（完全二叉树）
//		满足数中任意节点比其孩子结点小-->小堆，堆顶元素一定最小，从堆顶到任意叶子路径中结点为升序
//		反之为大堆，堆顶元素一定最大，从堆顶到任意叶子路径中结点为降序
//	应用场景：top_k   堆排序
//	默认大堆，元素存储在vector中
//	用户自己传递参数改变大小堆（less、greater）<functional>

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