#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{	
//	int (*pf)(int,int) = &Add;
//
//	int sum=(*pf)(2, 3);
//	int sum = Add(2, 3);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n" ,sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(* a));
//	printf("%d\n" ,sizeof(a + 1));
//	printf("%d\n" ,sizeof(a[1]));
//	printf("%d\n" ,sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n" ,sizeof(&a[0]));
//	printf("%d\n" ,sizeof(& a[0] + 1));
//
//	return 0;
//}

//小端拿出得顺序是相反得
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//
//	return 0;
//}