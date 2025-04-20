#define _CRT_SECURE_NO_WARNINGS

							#include <stdio.h>
							#include<windows.h>
							#include<stdlib.h>
							#include<string.h>
							#include<time.h>
							#include<math.h>
							#include"game.h"

							menu()
							{
								printf("*************************\n");
								printf("*****  1.play 0.exit ****\n");
								printf("*************************\n");
								printf("*************************\n");

							}

							void game()
							{
								int ret = 0;
								char board[ROW][COL] = { 0 };
								//lnitialize the board
								InitBoard(board,ROW,COL);  //checkerboard
								DispalyBoard(board,ROW,COL);
								while (1)
								{
									PlayerMove(board, ROW, COL);
									ret = IsWin(board, ROW, COL);
									{
										if (ret != 'C')
										{
											break;
										}
									}
									DispalyBoard(board, ROW, COL);
									ComeputerMove(board, ROW, COL);
									ret = IsWin(board, ROW, COL);
									if (ret != 'C')
									{
										if (ret != 'C')
										{
											break;
										}
									}
									DispalyBoard(board, ROW, COL);
								}
								if (ret == '*')
								{
									printf("玩家赢\n");
								}
								else if (ret == '#')
								{
									printf("电脑赢\n");
								}
								else
								{
									printf("平局\n");
								}
								DispalyBoard(board, ROW, COL);
							}
							
							int main()
							{ 
								srand((unsigned int)time(NULL));
								int input = 0;
								do
								{
									menu();
									printf("请选择：>");
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