#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


//int fan(int i)
//{
//	if (i < 10)  //ֹͣ����
//	{
//		printf("%d", i);  //С��10ʱ���ӡ
//			return;      
//	}
//	fan(i / 10);    //��������,
      //When a funciton is pushed onto the stack, the cuurent 
	  //execution will be suspended,waiting for the child funciton to return,that
	  // is,when calling a function within a fuction, it will be suspended 
//    ������ѹջʱ����ǰִ�лᱻ���𣬵ȴ��Ӻ������أ�Ҳ����˵�ں����ڲ����ú�����ʱ��ᱻ����
//	printf("%d", i % 10);
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	fan(i);
//
//	return 0;
// }

//
//int main()
//{
//	char arr[] = "abcdefg"; //0-6
//	int es = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = es - 2; // ��һ����8���ַ���ǰ�滹Ҫ����0��������0-6����Ҫ��2
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//practise

//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

//Functional method
void revesl(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	
}


int main()
{
	char arr[] = "abcdefg";//��������Ǽ�[]
	
	revesl(arr);
	printf("%s", arr);
	return 0;
}