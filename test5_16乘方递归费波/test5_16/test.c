#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include<stdio.h>
#include<string.h>

////�õĵݹ�ķ�ʽ��K��N�η�
//double fan(int i, int k)
//{
//	if (k > 0)            //�ôη�>0
//		return i * fan(i, k - 1);   
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / fan(i, -k); //�����-k�ǰѸ�����Ϊ����,ǰ���1.0/�������Ѿ���-k���������ֳ�����
//		 
//
//}
//
//int main()
//{
//	int  i = 0;
//	int  k = 0;
//	scanf("%d %d", &i, &k);
//	double ret = fan(i, k);
//	printf("%lf\n", ret);
//	return 0;
//}


 //����쳲����������õݹ�ͷǵݹ�ķ�ʽʵ��
//int fan(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fan(n - 1) + fan(n - 2);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=fan(n);
//	printf("%d", ret);
//
//	return 0;
//}
 

int fan(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		int a = 1;
		int b = 1;
		int c = 1;
		while (n >= 3)
		{
			a = b;
			b = c;
			c = a + b;
			n--;
		}
		return c;
	}
	/*int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;

	}
	return c;*/
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret=fan(n);
	printf("%d", ret);
	return 0;
}