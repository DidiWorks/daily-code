#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>


//编写代码实现，求一个整数存储在内存中的二进制中1的个数
//求补码中二进制中1的个数
//int main()
//{
//	int num = 10;
//	int count = 0;
//	for (int i = 31; i >= 0; i--)
//	{
//		
//			count = (num >> i) & 1;
//			if (count == 1)
//				printf("%d", count);
//		
//	}
//
//	return 0;
//}

//&& ||判断真假
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//
//
//	return 0;
//}

//三目操作符
//int main()
//{
//
//	int a = 3;
//	int b = 0;
//	int max = (a > b ? a : b);
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : 3);
//	return 0;
//
//}

//操作符[]
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	7[arr] = 9;
//
//
//	return 0;
//}



// 结构体
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
//void set_stu(struct Stu* ps)
//{
//	/*strcpy((*ps).name, "zhangshan");
//	(*ps).age = 20;
//	(*ps).score = 100.0;*/
//	strcpy(ps->name, "zhangshan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score);
//}
//
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//
//	return 0;
//}

//比特选择题
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;    //1+5=6
//	b = ++c, c++, ++a, a++;   //6,6,6,6  8 8 8 8
//	b += a++ +c;    
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//
//	return 0;
//}

// 二进制奇数位偶数位打印
//int main()
//{
//	int num = 5;
//	for (int i = 31; i >= 0; i--)
//	{
//		int ret = (num >> i) & 1;
//		if (i % 2 == 0)
//		{			
//			printf("%d", ret);			
//		}				
//	}
//	printf("\n");
//	for (int i = 31; i >= 0; i--)
//	{
//		int ret = (num >> i) & 1;
//		if (i % 2 != 0)
//		{
//			printf("%d", ret);
//		}
//	}
//	printf("\n");
//	return 0;
// }


//二进制中1的个数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d",&n);
//	for (int i = 31; i >= 0; i--)
//	{
//		
//			int ret = (n >> i) & 1;
//			if (ret == 1)
//			{
//				count++;
//			}	
//	}
//	printf("%d", count);
//
//	return 0;
//}

int main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	for (int i = 31; i >= 0; i--)
	{
		int ret = ((m ^ n)>>i)&1;
		 
		if (ret == 1)
		{
			count++;
		}
		
	}
	printf("%d", count);
	return 0;
}