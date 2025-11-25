


#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//void find_sigle_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else {
//			*pd2 ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_sigle_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d", dog1, dog2);
//	return 0;
//}



//一个数组nums ， 一个值val  原地移除所有val		


//int removeElement(int* nums, int numsSize, int val)
//{
//	int src, dst;
//	src = dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] == val)
//		{
//			src++;
//		}
//		else {
//			nums[dst] = nums[src];
//			dst++;
//			src++;
//		}
//	}
//	return dst;
//
//}
//int main() {
//    // 1. 准备一个测试用例
//    int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 }; // 输入数组
//    int val = 2;                            // 要移除的值
//    int size = sizeof(nums) / sizeof(nums[0]); // 计算数组大小
//
//    // 2. 打印原始数组
//    printf("原始数组: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n要移除的元素: %d\n", val);
//    printf("--------------------------\n");
//
//    // 3. 调用你写的函数
//    int k = removeElement(nums, size, val);
//
//    // 4. 打印结果
//    printf("函数返回的新长度 k = %d\n", k);
//    printf("处理后数组的前 %d 个元素: ", k);
//    for (int i = 0; i < k; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    // 防止窗口一闪而过
//    system("pause");
//    return 0;
//}