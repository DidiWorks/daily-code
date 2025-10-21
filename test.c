#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char eamil[] = "zawfgffffff.com";
//	char substr[] = "fgffffff";
//	char* ret = my_strstr(eamil, substr);
//	if (ret == NULL)
//	{
//		printf("×Ó´®²»´æÔÚ\n");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	 
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		//
//	}
//	return 	0;
//}
//int main()
//{
//	int a = isspace(' ');
//	printf("%d\n", a);
//	int a = isdigit('x');
//	printf("%d\n", a);
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 28);
//
//
//	return 0;
//}