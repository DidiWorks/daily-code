#define  _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>


//有范围的逆序字符串求值
int my_strlen(char* str)  //库函数strlen实现
{
	int count = 0;
	while (*str != '\0')   //如果str等于\0返回
	{
		count++;    //每读取一个数记录
		str++;
	}
	return count;

}

void fan(char* str)
{
	char temp = *str;         //取值为第一个值
	int len = my_strlen(str);    //整个字符串长度
	*str = *(str + len - 1);  //把字符串长度中的地址取出来也就是0-7，那么len-1就是数字6，那么它对应的内存地址就是g
	                          //为什么呢，因为在内存地址中有下标'\0'，0-6正好是g的位置，那么这时候首字符进行偏移这里的+不是+，而是偏移量
	                          //也就是a往右移了6个，str+6变成了gbcdefg.
	                                                               
	*(str + len - 1) = '\0';   //让'\0'等于g，也就是g=0被切掉了，变成了gbcdef
	if (my_strlen(str + 1) >= 2)  //str+1从字符串第二个字符开始，strlen(str+1)计算从第二个字符串开始，剩余的长度，>=2判断剩下的字符是否至少两个
		fan(str + 1);          //fan(str + 1)如果满足，就把从第二个字符开始的字符串作为参数传给fan函数
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
 

//无范围求逆序字符串
int main()
{
	char arr[] = "abcdefg"; 
	int left = 0;
	int right = my_strlen(arr)-1;  //等于总字符串-1,为何要-1总长为7，但是内存地址里面有'\0'，所以最右端-1才是g
	reverse(arr, left, right);   
	printf("%s\n", arr);
	return 0;
}

 // 求一个数字的每个位数相加
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
	unsigned int n = 0;   //无符号整形，也就是非负数
	scanf("%d", &n);
	int sum = DigitSum(n); 
	printf("%d\n", sum);
	return 0;
 }

2 一共3种情况 如果>0的情况 实现i*i的k-1次方，等于=0，和小于0
double Pow(int i, int k)
{
	if (k > 0)          //结束条件
		return i * Pow(i, k - 1);  //k-1是为了让结束条件走向k==0
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(i, -k); //负幂转正幂，在取倒数
}
//幂运算
//1正常传参
int main()
{
	int i = 0;
	int k = 0;
	scanf("%d%d", &i, &k);
	double ret = Pow(i, k);
	printf("%lf\n", ret);
	return 0;

}

//数组作业
int main()
{
	int arr[] = { 1,2,(3,4),5 }; //逗号表达式,是按顺序执行这个表达式里的内容，输出最后结果
	printf("%d\n",sizeof(arr));

	return 0;
}

