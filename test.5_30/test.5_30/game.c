
#include"game.h"
void mun()
{
	printf("****************************\n");
	printf("******  1.game 0.Exit ******\n");
	printf("****************************\n");
	printf("****************************\n");
 }

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//SetMine(mine, ROW, COL);
	DisplayBaord(mine, ROW, COL);
	DisplayBaord(show, ROW, COL);
}

int main()
{
	int input;
	do {
		mun();
		printf("please select\n");
		scanf("%d", &input);
		switch (input)
		{
		  case 1:
			  game();
			  break;
		  case 0:
			  printf("Exit Game\n");
			  break;
		  default:
			  printf("Wrong selection,please select again\n");
			  break;

		}

	} while (input);


	return 0;
}