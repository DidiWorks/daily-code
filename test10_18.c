#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//void* my_memcoy(void* dest, const void* src, size_t num)
//{
//
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//
//	}
//	return 	ret;
//}
//
//int test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//
//
//	
//}
//
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src=(char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//
//}
//int test2()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };	
//	my_memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//
//
//
//}
//int main()
//{
//	test2();
//	return 0;
//
//}

//int main()
//{
//	int input = 0;
//	int sum = 0;
//	scanf("%d", &input);
//	int i = 0;
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			sum += 1 * pow(10, i);
//			i++;
//		}
//		else
//		{
//			sum += 0 * pow(10, i);
//			i++;
//		}
//		
//		input /= 10;
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j < num; j++)
//			{
//				if (i + j < num - 1)
//				{
//					printf(" ");
//				}
//				else
//				{
//					printf("*");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}