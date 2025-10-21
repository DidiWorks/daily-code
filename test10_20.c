#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

int main()
{
	int input = 0;
	int sum = 0;
	scanf("%d", &input);
	int i = 0;
	while (input)
	{
		
		int bit = input % 10;
		if (bit % 2 == 1)
		{
			sum += 1 * pow(10, i);
			i++;
		}
		else {
			sum += 0 * pow(10, i);
			i++;
		}
		input /= 10;
	}
	printf("%d", sum);

	return 0;

}