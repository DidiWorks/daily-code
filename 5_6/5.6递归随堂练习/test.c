#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


//int fan(int i)
//{
//	if (i < 10)  //停止条件
//	{
//		printf("%d", i);  //小于10时候打印
//			return;      
//	}
//	fan(i / 10);    //传递条件,
      //When a funciton is pushed onto the stack, the cuurent 
	  //execution will be suspended,waiting for the child funciton to return,that
	  // is,when calling a function within a fuction, it will be suspended 
//    当函数压栈时，当前执行会被挂起，等待子函数返回，也就是说在函数内部调用函数的时候会被挂起
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
//	int right = es - 2; // ，一共是8个字符，前面还要算上0，所以是0-6，需要减2
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
	char arr[] = "abcdefg";//这里别忘记加[]
	
	revesl(arr);
	printf("%s", arr);
	return 0;
}