#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	
//	//char arr[] = { 'a','b', 'c', 'd','e','f'};
//	//printf("%d\n",sizeof(arr)); //6
//	//	//sizeof（数组名）
//	//	//
//	//printf("%d\n",sizeof(arr + 0));	//4
//	//printf("%d\n",sizeof(*arr));  //1  	 
//	//printf("%d\n",sizeof(arr[1]));	//1	这个是第二个元素B
//	//printf("%d\n",sizeof(&arr));	 //
//	//printf("%d\n",sizeof(&arr + 1));
//	//printf("%d\n",sizeof(&arr[0] + 1));
//	////	
//	//int a[] = { 1,2,3,4 };
//	////printf("%d\n", sizeof(a)); //?  16
//	////printf("%d\n", sizeof(a + 0)); //4
//	////printf("%d\n" sizeof(*a)) //4
//	////printf("%d\n" sizeof(a + 1)) //4 这里是首元素地址+1 是第二个地址
//	////printf("%d\n" sizeof（a[1]))	//4 第二个元素大小
//	////printf("%d\n" sizeof（ & a))	//4
//	////printf("%d\n",sizeof(*&a))	  // 16 *&可以抵消  int(*)[4]是一种数组指针  *&a ----> a &*抵消了
//	////printf("%d\n" sizeof(&a + 1))
//	////printf（"%d\n" sizeof（ & a[θ]))
//	////printf（"%d\n" sizeof(&a[θ] + 1))
//	////returno
//	//printf("%d\n", sizeof(&a));
//	//printf("%d\n", sizeof(&a + 1));
//
//	//char arr[] = "abcdef";
//	////printf("%d\n", strlen(arr));	//随机值
//	////printf("%d\n", strlen(arr + 0));
//	//////printf("%d\n", strlen(*arr));
//	//////printf("%d\n", strlen(arr[1]));
//	//////printf("%d\n", strlen(&arr));
//	////printf("%d\n", strlen(&arr + 1));
//	////printf("%d\n", strlen(&arr[0] + 1));
//	//printf("%d\n", strlen(&arr[0]+1));
//
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(&a[0 + 1]));
//
//	//	printf("%d\n", sizeof(a + 1));
//
//
//
//
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//
//
//	return 0;
//}

//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");
//
//	printf("%s\n", name);
//
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//			  
//
//	}
//	//*dest = *src;
//	return ret;
//}
//char* my_strcat(char* dest, const char* ccc)
//
//{
//	char* ret = dest;
//	assert(dest && ccc);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *ccc++)
//	{
//		;
//	}
//	return 	ret;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);*/
//
//	char arr1[20] = "hello";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//
//	return 0;
// }
// 在一对字符时比的是阿斯克码值

// 比较不修改加上const 不修改传过来的原值
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int my_strcmp1(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//
//}
//
//int main()
//{
//	char arr1[] = "zhangsan";
//	char arr2[] = "zhangshanfeng";
//	int ret = my_strcmp1(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	if (ret == 0)
//		printf("==\n");
//	if (ret > 0)
//		printf(">\n");
//
//
//	return 0;
//}

int main()
{
	char eamil[] = "zawfgffffff.com";
	char substr[] = "fgffffff";
	char* ret = strstr(eamil, substr);
	if (ret == NULL)
	{
		printf("子串不存在\n");

	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}