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
	IninContact(&con);
	do {
		nemu();
		printf("«Î—°‘Ò£∫\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:


		default:
			printf("—°‘Ò¥ÌŒÛ\n");
			break;
		}

	} while (input);



	return 0;
}