#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

//print every num

//void fan(int i)
//{
//	if (i < 10)
//	{
//		printf("%d", i);
//		return;
//	}
//	fan(i / 10);    //�����λҲ���ǿ����ұߵ���
//	printf("%d", i % 10);  // �����λҲ���ǿ�����ߵ���
//
//}
//
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//   fan(i);
//	
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	/*int es = sizeof(arr) / sizeof(arr[0]);*/
//	/*int right = es - 2;*/
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//			str++;
//	}
//	return count;
//}
//
//
//void fan(char* str)
//{
//	char tmp = *str;       //���λ��*str�����ַ���ֵ��tmp
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)  //����������󳤶�>2
//		fan(str + 1);      //�����ڲ�+1,��ǰƫ��
//	*(str + len - 1) = tmp;  //�����tmp=
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	fan(arr);
//	printf("%s\n", arr);
//
//
//	return 0;
//}

//void fan(char str[], int left, int right)
//{
//	int tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//	{
//		fan(str, left + 1, right - 1);
//	}
//}
//
//
//int main()
//{
//	char str[] = "abcdefg";
//	int left = 0;
//	int right = strlen(str) - 1;
//	int ret=fan(str, left, right);  //���ﲻ����fan����ret
//
//	printf("%s", ret);
//	return 0;
//}


// print the sum of each digit of a number
// ��һ������ÿһλ���
//  fan(n/10)
//  123124
//  12312
//  1231
//  123
//  12
//  1
// fan()+n%10
// 1+2
// 1+2+3
//...

//int fan(unsigned int n)
//{
//	if (n > 9)
//	{
//		return fan(n / 10) + n % 10;
//	}
//	return n;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret=fan(n);
//	printf("%d", ret);
//	return 0;
//}
