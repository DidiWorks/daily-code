#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}

//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);		 //长度
//	for (i = 0; i < k; i++)	     //输入几次循环几次
//	{
//		char tmp = arr[0];				  //等于首字符串首地址  提出来等于tmp
//		int j = 0;
//		for (j = 0; j < len - 1; j++)		//然后让长度减-1 
//		{
//			arr[j] = arr[j + 1];		//然后在让长度提上去+1
//		}
//		arr[len - 1] = tmp;			   //最后长度的位置等于tmp 实现交换
//	}
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	
//	return 0;
//}




//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);	   //整个字符串长度
//	k% = len;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = arr[0];		 //首地址，也就是让它等于首个元素
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//
//	}
//
//}
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}
}


void left_rotate(char arr[], int k)
{
	int len = strlen(arr);
	k %=len;
	reverse(arr,arr+k-1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr,k);
	printf("%s\n", arr);

   


	return 0;
}