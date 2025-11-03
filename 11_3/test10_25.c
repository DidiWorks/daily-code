#define _CRT_SECURE_NO_WARNINGS	1
//#include<stdio.h>
//#include<math.h>
//#include<assert.h>
//#include<string.h>
//#include<stdlib.h>
//#include<errno.h>
//#include<ctype.h>

#include"contact.h"

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT

};


void nemu()
{
	printf("*****    1.add                  2.del           ****\n");
	printf("*****    3.search               4.modify        ****\n");
	printf("*****    5.show                 6.sort          ****\n");
	printf("*****    0.exit                                 ****\n");
	printf("*****                                           ****\n");

	
}
int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		nemu();
		printf("请选择：》");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;

		case DEL:
			DelContact(&con);
			break;

		case SEARCH:
			SearchContact(&con);
			break;

		case MODIFY:
			ModifyContact(&con);
			break;

		case SHOW:
			ShowContact(&con);
			break;

		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("退出通讯录\n");
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);


	return 0;
 }