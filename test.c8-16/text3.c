#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	if (money > 0)
//		printf("%d\n", 2 * money - 1);
//	else
//		printf("%d\n", 0);
//
//	return 0;
// }

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//
//	return 0;
//}


//int main()
//{
//	int(*pf)(int, int) = Add;
//	int(*arr[4])(int, int) = { Add, Sub, Mul,Div }
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//
//	return 0;
//}



//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//	
//	
//}
//void test1()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*bubble_sort(arr, sz);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//
//}
//cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangshan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//
//}
//void test3()
//{
//	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };*/
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*bubble_sort(arr, sz);*/
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test4()
//{
//	struct Stu s[] = { {"zhangshan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//
//}
//int main()
//{
//	//test1();
//	/*test2();*/
//	//test3();
//	test4();
//	return 0;
//
//  }

