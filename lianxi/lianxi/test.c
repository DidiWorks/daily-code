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
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
  }