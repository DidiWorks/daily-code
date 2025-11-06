#define _CRT_SECURE_NO_WARNINGS	1

#include <stdio.h> 

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//
//
//
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello word");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
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
//	}
//
//
//
//	return 0;
//}