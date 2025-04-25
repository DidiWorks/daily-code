#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

					void InitBoard(char board[ROW][COL], int row, int col)  //准备棋盘数据，让棋盘显示空格
					{
						int i = 0;
						int j = 0;
						for (i = 0; i < row; i++)  //设置i小于row外循环
						{
							for (j = 0; j < col; j++)//设置j小于row内循环
							{
								board[i][j] = ' '; //从[0][0]到[3][3]每个数组中存储一个空格
							}
						}
					}
					// first version
					//void DispalyBoard(char board[ROW][COL], int row, int col)
					//{
					//	int i = 0;
					//	for (i = 0; i < row; i++)
					//	{
					//		//Print data
					//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
					//		//print segmentation information
					//		if(i<row-1)
					//		printf("---|---|---\n");
					//	}
					//}
					void DispalyBoard(char board[ROW][COL], int row, int col) // 显示棋盘，让棋盘内显示‘|’ ‘-’，来充当三子棋盘
					{
						int i = 0;
						for (i = 0; i < row; i++)
						{
							//Print data
							/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
							int j = 0;
							for (j = 0; j < col; j++)
							{
								printf(" %c ", board[i][j]);  //循环数组打印空格，空格在InitBoard里实现，实际存储在数组是打印美化棋盘
								if (j < col - 1)   //因为数组是0-2，但是实际上在打印中是1-3，所以col-1循环并且比j小，如果不-1会多打印
									printf("|"); 
							}
							printf("\n");     //跑完第一行，然后换行
							
							if (i < row - 1)  //打印下一行，让row-1保持0-2棋盘顺序正确
							{
								/*printf("---|---|---\n");*/
								int j = 0;
								for (j = 0; j < col; j++) 
								{
									printf("---");   //先打印---
									if (j < col - 1)     
										printf("|");//后打印|
								}
								printf("\n");
							}
		
						}
					}
					void PlayerMove(char board[ROW][COL], int row, int col)
					{
						int x = 0;
						int y = 0;
						printf("玩家下棋：>\n");
						
					     while (1)
							{
								printf("请输入坐标：>");
								scanf("%d %d", &x, &y);
								if (x >= 1 && x <= row && y >= 1 && y <= col)
								{
									if (board[x - 1][y - 1] == ' ')
									{
										board[x - 1][y - 1] = '*';
										break;
									}
									else
									{
										printf("坐标非法，请重新输入\n");
									}
								}
								else
								{
									printf("坐标非法，请重新输入\n");
								}
						}

					}
					void ComeputerMove(char board[ROW][COL], int row, int col)
					{
						printf("电脑下棋：>\n");

						int x = 0;
						int y = 0;

						while (1)
						{
							x = rand() % row;
							y = rand() % col;
							if (board[x][y] == ' ')
							{
								board[x][y] = '#';
								break;
							}

						}
					}
					int IsFull(char board[ROW][COL], int row, int col)
					{
						int i = 0;
						int j = 0;
						for (i = 0; i < row; i++)
						{
							for (j = 0; j < col; j++)
							{
								if (board[i][j] == ' ')
								{
									return 0;
								}
							}
						}
						return 1;
					}
					char IsWin(char board[ROW][COL], int row, int col)
					{
						int i = 0;
						for (i = 0; i < row; i++)
						{
							if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
							{
								return  board[i][1];
							}
						}
						int j = 0;
						for (j = 0; j < col; j++)
						{
							if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
							{
								return  board[1][j];
							}
						}
						if (board[0][2] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
						{
							return board[1][1];
						}
						if (IsFull(board, row, col))
						{
							return 'Q';
						}
						return 'C';
					}