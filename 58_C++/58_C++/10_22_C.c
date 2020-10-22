#include <stdio.h>
#include <stdlib.h>


int gvl = 1;
static int staticGvl = 1;
void Test()
{
	static int staticVal = 1;
	int localVal = 1;

	int num1[10] = { 1,2,3,4 };
	char char2[] = "abcd";
	char* pchar3 = "abcd";
	int* ptr1 = (int*)malloc(sizeof(int) * 4);
	int* ptr2 = (int*)calloc(4, sizeof(int));
	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 1);
	free(ptr1);
	free(ptr3);
}

int main()
{
	Test();
	return 0;
}