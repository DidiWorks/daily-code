
#include<string.h>
#include<stdio.h>


������A�����ݺ�����B�е����ݽ��н���������һ���󣩣��������ڲ���Χ���пɿؽ���
int fan(char arr1[], char arr2[], int left, int right)
{
	while (left < right) {
		char tmp = arr1[left];
		arr1[left] = arr2[left];
		arr2[left] = tmp;
		char amp = arr1[right];
		arr1[right] = arr2[right];
		arr2[right] = amp;
		left++;
		right--;
		
	}

}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "ghijkl";
	int left = 0;
	int se1 = sizeof(arr1) / sizeof(arr1[0]);	
	int right = se1 - 2;
	fan(arr1,arr2, left, right);
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	return 0;
}

int my_strlen(char* str)  //strlen����ʵ��
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}


void print(int arr[], int se)
{
	for (int i = 0; i < se; i++)
	{
		printf("%d ", arr[i]);
	}
	
}

void reverse(int arr[], int left, int right)
{
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void init(int arr[],int se)
{
	for (int i = 0; i < se; i++)
	{
		arr[i] = 0;   //��ʼ������Ϊ0
	}
}

int main()
{
	int arr[10] = { 0 };
	int left = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	int right = se - 2;
	
	init(arr,se);
	reverse(arr, left, right);
	print(arr, se);
	return 0;
}


int main()
{
	int arr1[] = { 1,2,4,5,6,7 };
	int arr2[] = { 2,4,6,7,8,10 };
	int se = sizeof(arr1) / sizeof(arr1[0]);  //Ԫ�ظ���=�ܴ�С/��һ��Ԫ�صĴ�С
	int i = 0;
	for (  i = 0; i < se; i++);   //����������н���
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;

	}
	for (i = 0; i < se; i++)
	{
		printf("%d", arr1[i]);
		
	}
	printf("\n");
	for (i = 0; i < se; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	return 0;
 }


int main()
{   
	int i = 0;
	int arr[] = { 7,3,4,5,6,9 };
	int se = sizeof(arr) / sizeof(arr[0]);//��������
	for ( i = 0; i < se-1; i++)   //�ⲿѭ��Ϊi--0-6��Ҳ����˵�ⲿһ�ξ�����һ����
	{
		for (int j = 0; j < se - i - 1; j++)  //Ȼ�����ⲿѭ��ÿ��ѭ�������ֵ�ŵ�����
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}
	for (i = 0; i < se; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");


	return 0;
}

void reverse(int arr[], int left, int right)
{
	while (left > right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void print(int arr[], int se)
{
	for (int i = 0; i < se; i++)
	{
		printf("%d", arr[i]);
	}
}


void init(int arr[], int se)
{
	for (int i = 0; i < se; i++)
	{
		arr[i] = 0;
	}
}
int main()
{ 
	int arr[10] = { 0 };
	int left = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	int right = se - 2;
	
	init(arr, se);
	print(arr, se);
	reverse(arr, left, right);

	return 0;
}
