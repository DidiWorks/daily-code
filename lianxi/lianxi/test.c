#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include"game.h"

menu() {

	printf("*****************************\n");
	printf("****     1.play 0.Exit.   ***\n");
	printf("*****************************\n");
	

}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DispalyBoard(board, ROW, COL);


}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
  }