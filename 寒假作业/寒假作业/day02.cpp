#include <iostream>
using namespace std;

void test1()
{
	int a;
	a = 'A' + 1.6;
	cout << a << endl;
}
void test2()
{
	int x = 10;
	int y = 10;
	x = y = ++y;
	cout << x << " " << y << endl;
}

int main()
{
	test1();
	test2();

	return 0;
}