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
									printf("���Ӯ\n");
								}
								else if (ret == '#')
								{
									printf("����Ӯ\n");
								}
								else
								{
									printf("ƽ��\n");
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