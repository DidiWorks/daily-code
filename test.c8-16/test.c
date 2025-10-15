#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//
//			}
//			printf("\n");
//		}
//
//
//	}
//
//
//	return 0;
//}




///求出0～100000之间的所有“水仙花数”并输出。

///“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		while (tmp)
//		{
//			sum += pow(tmp / 10, n);
//			tmp /= 10;
//				
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//
//
//
//
//	return 0;
//}



  
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//
//
//	return 0;
//}

//void move_old_even(int arr[], int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	move_old_even(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return  0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	 
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr1[1000];
//	int arr2[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//
//	}
//	if (i < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d", arr1[j]);
//
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d", arr2[k]);
//		}
//	}
//
//	
//	
//
//
//	return 0;
//}