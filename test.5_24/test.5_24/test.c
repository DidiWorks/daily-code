#define  _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>
#include"game.h"
#include<stdlib.h>
#include <time.h>


void mun()
{
	printf("*************************\n");
	printf("***** 1.play 0.Exit *****\n");
	printf("*************************\n");
	printf("*************************\n");

}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Inviden(board, ROW, COL);    //intboard
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		playerBoard(board, ROW, COL);
		 ret = IsWin(board, ROW, COL);
		{
			if (ret != 'C')
			{
				break;
			}
		}
		DisplayBoard(board, ROW, COL);
		ComputerBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		{
			if (ret != 'C')
			{
				break;
			}
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		DisplayBoard(board, ROW, COL);
		printf("player Win!\n");
		printf("\n");
		printf("\n");
		printf("\n");
	}
	else if (ret == '#')
	{
		DisplayBoard(board, ROW, COL);
		printf("Computer Win!\n");
		printf("\n");
		printf("\n");
		printf("\n");
	}
	else
	{
		DisplayBoard(board, ROW, COL);
		printf("Full\n");
		printf("\n");
		printf("\n");
		printf("\n");
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	
	int input = 0;
	
	do {
		mun();
		printf("please select===>");
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
			printf("Please re-enter if input in incorrect\n");
			break;
		
		}

	} while (input);

	return 0;
}