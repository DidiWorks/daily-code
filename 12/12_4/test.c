#include"SeqList.h"




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
void menu()
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
	ContactInit(&con);
	do {
		menu();
		printf("请选择：》\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ContactADD(&con);
			break;
		case DEL:
			ContactDel(&con);
			break;
		case SEARCH:
			ContactFind(&con);
			break;
		case MODIFY:
			ContactModify(&con);
			break;
		case SHOW:
			ContactShow(&con);
			break;
		case SORT:
			ContactSort(&con);
			break;
		case EXIT:
			ContactSave(&con);
			ContactDesTroy(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);



	return 0;
}