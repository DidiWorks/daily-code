
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			
			
				board[i][j] = set;
			
		}
	}

}
void DisplayBaord(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------Minesweeper game--------------\n");
	/*for (i = 0; i < row; i++)
	{
		printf("%d", j);
	}*/
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------Minesweeper game--------------\n");
	

}