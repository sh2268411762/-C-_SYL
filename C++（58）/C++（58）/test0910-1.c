//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#pragma pack(4)
//typedef union unRec
//{
//	unsigned long ullndex;
//	unsigned short usLevel[7];
//	unsigned char ucPos;
//}REC_S;
//REC_S stMax, * pstMax;
//unsigned short* sum(unsigned char a, unsigned char b)
//{
//	unsigned short s = 0;
//	s = a + b;
//	return &s;
//}
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//void example(char acHello[])
//{
//	printf("%d", sizeof(acHello));
//	return;
//} 
//void example1()
//{
//	int i;
//	char acNew[20];
//	for (i = 0; i < 5; i++)
//	{
//		acNew[i] = '0';
//	}
//	printf("%d\n", strlen(acNew));
//	printf("%d\n", sizeof(acNew));
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//#define N 4
//#define Y(n) ((N+2)*n)
//int main()
//{
//	////1
//	//char acX[] = "abcdef";
//	//char acY[] = { 'a','b','c','d','e','f' };
//	//int x = strlen(acX);//6
//	//int y = strlen(acY);//Ëæ»ú
//	//printf("x = %d,y = %d", x, y);
//
//
//	////2
//	//char acHello[] = "hello,Bit";
//	//example(acHello);
//
//
//	////4
//	//unsigned long p[] = { 6,7,8,9,10 };
//	//unsigned long* pul;
//	//pul = p;
//	//*(pul + 3) += 3;
//	//printf("%d,%d\n", *pul, *(pul + 3));
//	
//	
//	////5
//	//example1();
//
//
//	////7
//	//struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	//fun(students + 1);
//
//
//
//	////8
//	//union
//	//{
//	//	short k;
//	//	char i[2];
//	//}*s, a;
//	//s = &a;
//	//s->i[0] = 0x39;
//	//s->i[1] = 0x38;
//	//printf("%x\n",a.k);
//
//
////	//9
////	char* p1 = "abcd";
////	char p2[] = "abcd";
////	char p3[4] = "abcd";
//////	char p4[] = 'abcd';
////	char p6[] = { 'a','b','c','d','\0' };
//	
//	
//	////10
//	//int z = 2 * (N + Y(5 + 1));
//	//printf("%d\n", z);
//
//
//
//	////12
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d,%d\n", a + b, c);//300,44
//
//
//	////13
//	//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
//	//(sizeof(struct _Record_Struct) * 2 + 3);
//
//
//	////14
//	//char c;
//	//unsigned char uc;
//	//unsigned short us;
//	//c = 128;//0 1000 0000
//	//uc = 128;// 1000 0000
//	//us = c + uc;//1 0000 0000
//	//printf("0x%x\n", us);//0
//	//us = (unsigned char)c + uc;//100
//	//printf("0x%x\n", us);
//	//us = c + (char)uc;//ff00
//	//printf("0x%x\n", us);
//
//	////15
//	//unsigned short* p = NULL;
//	//unsigned char a = 1, b = 2;
//	//p = sum(a, b);
//	//printf("%u + %u", a, b);
//	//printf("= %u\n", *p);
//
//
//	////1
//	//char* pC = "CS0FTX3000";
//	//char aC[] = "CS0FTX3000";
//	//printf("%d\n", strlen(pC));//10
//	//printf("%d\n", strlen(aC));//Ëæ»ú
//	//printf("%d\n", sizeof(pC));//4
//	//printf("%d\n", sizeof(aC));//11
//
//
//	////2
//	//unsigned short* pucCharArray[10][10];
//	//printf("%d\n", sizeof(pucCharArray));//400
//	//printf("%d\n", sizeof(stMax));//16
//	//printf("%d\n", sizeof(pstMax));//4
//	//printf("%d\n", sizeof(*pstMax));//16
//
//	////3
//	//unsigned char puc[4];
//	//struct tagPIM
//	//{
//	//	unsigned char ucPim1;
//	//	unsigned char ucData0 : 1;
//	//	unsigned char ucData1 : 2;
//	//	unsigned char ucData2 : 3;
//	//}*pstPimData;
//	//pstPimData = (struct tagPIM*)puc;
//	//memset(puc, 0, 4);
//	//pstPimData->ucPim1 = 2;
//	//pstPimData->ucData0 = 3;
//	//pstPimData->ucData1 = 4;
//	//pstPimData->ucData2 = 5;
//	//printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//
//
//	return EXIT_SUCCESS;
//}