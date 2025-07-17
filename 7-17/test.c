#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//复习
//int main()
//{
//	int n = 0;
//	if (n < 0 || n>50)
//	{
//		return 1;
//	}
//	scanf("%d", &n);
//	int arr[50];      //为什么要出初始化数组呢
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)  // err 如果写==，只保留我想删除的部分，原题是把删除的留下，跟输入删除相同的保留
//		{
//			arr[j] = arr[i];   //这里是输入进去没打印出来
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)   //这里是输入进去的小于j的值输出数来，j也就是抛出删除的数字
//	{
//		printf("%d ", arr[i]);   
//	}
//	
//
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)  //大写A-Z到小写a-z的差值为32，另外这个位置是如果我写入的值是为真的话，那么它就一直循环
//	{
//		if (ch >= 'a' && ch <= 'z')
//		
//			printf("%c\n", ch - 32);  //如果输入小写，那么我让输出的小写值减32就等于大写的位置
//		
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c",&ch) == 1) {
//
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//
//			printf("%c yes\n", ch);
//		else
//			printf("%c is not\n", ch);
//		//getchar();    //为什么要加/n
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr = 0;
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr);    //为什么存入arr[i]不可呢？好像不是数组的原因
//		if (arr > max)
//		{
//			max = arr;
//		}
//	}
//	printf("%d", max);
//}

int main()
{
	int i = 0;
	for (i = 10000; i < 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 1; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / 10);
		}
		if (sum == i)
			printf("%d", i);
	}

	return 0;
}