
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>




int add(int n)
{
	if (n <= 2)
		return n;
	else
		return add(n - 1) + add(n - 2);


}

int main()    // 主函数打错了
{
	int n = 0;
	scanf("%d",&n);
	int ret = add(n);
	printf("%d\n", ret);

	return 0;
}

int main()
{
	int n = 0;
	if (n < 0 || n>50)
	{
		return 1;
	}
	scanf("%d",&n);

	int arr[50];
	
	int i = 0;
	for (i = 0; i < n; i++)   //err 直接输入arr[50],cor 应该用最历变的值去比较输入的值
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;     //输入消除值
	scanf("%d",&del);
	int j = 0;             //err
	for ( i = 0; i < n; i++)  //ERR 直接input arr[50]
	{
		if (arr[i] != del)       //err 用n!del
		{
			arr[j] = arr[i]; //把arr[i]的值保存在j++里面，让j向后移
          j++;
		}
	}
	for (i = 0; i < j; i++)    //err
	{
		printf("%d", arr[i]);
	}

	return 0;
}


int  main()
{
	int n = 0;
	scanf("%d", &n);
	if (n < 0 || n>50)
	{
		return 1;
	}
	int arr[50];
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);     //err 输入空格，导致空白处一直运行
		/*break;*/
	}
	int max = 0;
	 max = arr[0];	   //err 没有意识到把最大值加入进数组内
	for (i = 0; i < n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];	
		}
	}
	int small = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < small)
		{
			small = arr[i];
		}
	}
	int fangcha=max - small;
	printf("%d", fangcha);
	return 0;
 }




