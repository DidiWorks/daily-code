
#include<stdio.h>


int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}

	return 0;
}	   