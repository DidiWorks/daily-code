#pragma once
#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//
//int main()
//{
//	/*int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int min = n < m ? n : m;
//		int max = n < m ? n : m;
//		int i = min;
//		int j = max;
//		while (1)
//		{
//			if (n % i == 0 && m % i == 0)
//			{
//				break;
//
//			}
//			i--;
//		}
//		while (1)
//		{
//			if (j % n == 0 && j % m == 0)
//			{
//				break;
//			}
//			j++;
//
//		}
//		printf("%d\n", i + j);
//	}*/
//	long n = 0;
//	long m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		long i = n;
//		long j = m;
//		long r = 0;
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//
//		}
//		printf("%ld\n", m * n / j + j);
//	}
//
//
//
//	return 0;
//}

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;

}


