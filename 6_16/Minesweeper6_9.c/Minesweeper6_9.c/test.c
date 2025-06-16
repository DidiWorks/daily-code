
#include"game.h"

void mun()
{
	printf("********************************\n");
	printf("********************************\n");
	printf("***       1.Game. Exit.      ***\n");
	printf("********************************\n");
	printf("********************************\n");


}
void game()
{
	
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	
	
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL); //´«Öµ11ÓÃ9£¿
	Displayboard(show, ROW, COL);
	Finemine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		mun();
		scanf("%d", &input);
		printf("please select\n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit Game\n");
			printf("\n");
			break;
		default:
			printf("select error please re-enter\n");
			break;
		}
	} while (input);

	return 0;
}