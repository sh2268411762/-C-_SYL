//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
////void G(char** p)
////{
////	p = (char*)malloc(57);
////}
//void bit_set(unsigned char* p_date, unsigned char p, bool flag)
//{
	//assert(p_pate != NULL || (p >= 1) && (p <= 8));
//	if (flag)
//	{
//		*p_date |= (0x01 << (p - 1));
//		//switch (p)
//		//{
//		//case 1:
//		//	*p_date |= 0x01;
//		//	break;
//		//case 2:
//		//	*p_date |= 0x02;
//		//	break;
//		//case 3:
//		//	*p_date |= 0x04;
//		//	break;
//		//case 4:
//		//	*p_date |= 0x08;
//		//	break;
//		//case 5:
//		//	*p_date |= 0x10;
//		//	break;
//		//case 6:
//		//	*p_date |= 0x20;
//		//	break;
//		//case 7:
//		//	*p_date |= 0x40;
//		//	break;
//		//case 8:
//		//	*p_date |= 0x80;
//		//	break;
//		//}
//	}
//	else
//	{
//		*p_date &= ~(0x01 << (p - 1));
//		//switch (p)
//		//{
//		//case 1:
//		//	*p_date &= ~0x01;
//		//	break;
//		//case 2:
//		//	*p_date &= ~0x02;
//		//	break;
//		//case 3:
//		//	*p_date &= ~0x04;
//		//	break;
//		//case 4:
//		//	*p_date &= ~0x08;
//		//	break;
//		//case 5:
//		//	*p_date &= ~0x10;
//		//	break;
//		//case 6:
//		//	*p_date &= ~0x20;
//		//	break;
//		//case 7:
//		//	*p_date &= ~0x40;
//		//	break;
//		//case 8:
//		//	*p_date &= ~0x80;
//		//	break;
//		//}
//	}
//}
//int main()
//{
//	//char* str = NULL;
//	//G(str);
//	//strcpy(&str, "HelloBit");
//	//printf(str);
//
//
//	unsigned char data = 123; //0-255
//	unsigned char pos = 3;
//	bool flag = true;
//	bit_set(&data, pos, flag);
//	printf("data = %d\n", (int)data);
//	return 0;
//}