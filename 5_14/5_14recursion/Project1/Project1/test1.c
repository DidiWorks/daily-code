#define  _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>


//�з�Χ�������ַ�����ֵ
int my_strlen(char* str)  //�⺯��strlenʵ��
{
	int count = 0;
	while (*str != '\0')   //���str����\0����
	{
		count++;    //ÿ��ȡһ������¼
		str++;
	}
	return count;

}

void fan(char* str)
{
	char temp = *str;         //ȡֵΪ��һ��ֵ
	int len = my_strlen(str);    //�����ַ�������
	*str = *(str + len - 1);  //���ַ��������еĵ�ַȡ����Ҳ����0-7����ôlen-1��������6����ô����Ӧ���ڴ��ַ����g
	                          //Ϊʲô�أ���Ϊ���ڴ��ַ�����±�'\0'��0-6������g��λ�ã���ô��ʱ�����ַ�����ƫ�������+����+������ƫ����
	                          //Ҳ����a��������6����str+6�����gbcdefg.
	                                                               
	*(str + len - 1) = '\0';   //��'\0'����g��Ҳ����g=0���е��ˣ������gbcdef
	if (my_strlen(str + 1) >= 2)  //str+1���ַ����ڶ����ַ���ʼ��strlen(str+1)����ӵڶ����ַ�����ʼ��ʣ��ĳ��ȣ�>=2�ж�ʣ�µ��ַ��Ƿ���������
		fan(str + 1);          //fan(str + 1)������㣬�ͰѴӵڶ����ַ���ʼ���ַ�����Ϊ��������fan����
	*(str+len - 1) = temp;
}

int main()
{
	char arr[] = "abcdefg";
	fan(arr);
	printf("%s\n", arr);
	return 0;
}



int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


void reverse(char arr[], int left, int right)
{
	char tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	while (left > right)
	{
		reverse(arr, left + 1, right - 1);
	}
}
 

//�޷�Χ�������ַ���
int main()
{
	char arr[] = "abcdefg"; 
	int left = 0;
	int right = my_strlen(arr)-1;  //�������ַ���-1,Ϊ��Ҫ-1�ܳ�Ϊ7�������ڴ��ַ������'\0'���������Ҷ�-1����g
	reverse(arr, left, right);   
	printf("%s\n", arr);
	return 0;
}

 // ��һ�����ֵ�ÿ��λ�����
int DigitSum(unsigned int n)
{
	if (n > 9)    
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
		return n;
}

int main()
{
	unsigned int n = 0;   //�޷������Σ�Ҳ���ǷǸ���
	scanf("%d", &n);
	int sum = DigitSum(n); 
	printf("%d\n", sum);
	return 0;
 }

2 һ��3����� ���>0����� ʵ��i*i��k-1�η�������=0����С��0
double Pow(int i, int k)
{
	if (k > 0)          //��������
		return i * Pow(i, k - 1);  //k-1��Ϊ���ý�����������k==0
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(i, -k); //����ת���ݣ���ȡ����
}
//������
//1��������
int main()
{
	int i = 0;
	int k = 0;
	scanf("%d%d", &i, &k);
	double ret = Pow(i, k);
	printf("%lf\n", ret);
	return 0;

}

//������ҵ
int main()
{
	int arr[] = { 1,2,(3,4),5 }; //���ű��ʽ,�ǰ�˳��ִ��������ʽ������ݣ���������
	printf("%d\n",sizeof(arr));

	return 0;
}

