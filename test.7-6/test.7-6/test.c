
#include<stdio.h>





int main()
{
    int arr[] = { 3,4,9,7,6,8,5,2,1 };
    int se = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < se - 1; i++)
    {
        for (int j = 0; j < se - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])             //如果当前元素比下一个元素大
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < se; i++)
    {
        printf("%d", arr[i]);
    }



    return 0;
}