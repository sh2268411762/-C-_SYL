//#include <iostream>
//#include <string>
//#include <assert.h>
//using namespace std;
//
//
//
//void Swap1(int* a, int* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void Swap2(int* a, int* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//void Swap3(int* a, int* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	*b = *b - *a;
//	*a = *b + *a;
//	*b = *a - *b;
//}
//void Swap4(int& x, int& y)
//{
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//}
//
//int main()
//{
//	int a(10);
//	int b(20);
//
//	cout << "before:a = " << a << ",b = " << b << endl;  //10 20
//	Swap1(&a, &b);
//	cout << "after :a = " << a << ",b = " << b << endl;  //20 10
//	Swap2(&a, &b);
//	cout << "after2:a = " << a << ",b = " << b << endl;  //10 20
//	Swap3(&a, &b);
//	cout << "after3:a = " << a << ",b = " << b << endl;  //20 10
//	Swap4(a, b);
//	cout << "after4:a = " << a << ",b = " << b << endl;  //10 20
//
//	return EXIT_SUCCESS;
//}