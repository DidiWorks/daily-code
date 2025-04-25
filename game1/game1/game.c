#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

					void InitBoard(char board[ROW][COL], int row, int col)  //׼���������ݣ���������ʾ�ո�
					{
						int i = 0;
						int j = 0;
						for (i = 0; i < row; i++)  //����iС��row��ѭ��
						{
							for (j = 0; j < col; j++)//����jС��row��ѭ��
							{
								board[i][j] = ' '; //��[0][0]��[3][3]ÿ�������д洢һ���ո�
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
					void DispalyBoard(char board[ROW][COL], int row, int col) // ��ʾ���̣�����������ʾ��|�� ��-�������䵱��������
					{
						int i = 0;
						for (i = 0; i < row; i++)
						{
							//Print data
							/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
							int j = 0;
							for (j = 0; j < col; j++)
							{
								printf(" %c ", board[i][j]);  //ѭ�������ӡ�ո񣬿ո���InitBoard��ʵ�֣�ʵ�ʴ洢�������Ǵ�ӡ��������
								if (j < col - 1)   //��Ϊ������0-2������ʵ�����ڴ�ӡ����1-3������col-1ѭ�����ұ�jС�������-1����ӡ
									printf("|"); 
							}
							printf("\n");     //�����һ�У�Ȼ����
							
							if (i < row - 1)  //��ӡ��һ�У���row-1����0-2����˳����ȷ
							{
								/*printf("---|---|---\n");*/
								int j = 0;
								for (j = 0; j < col; j++) 
								{
									printf("---");   //�ȴ�ӡ---
									if (j < col - 1)     
										printf("|");//���ӡ|
								}
								printf("\n");
							}
		
						}
					}
					void PlayerMove(char board[ROW][COL], int row, int col)
					{
						int x = 0;
						int y = 0;
						printf("������壺>\n");
						
					     while (1)
							{
								printf("���������꣺>");
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
										printf("����Ƿ�������������\n");
									}
								}
								else
								{
									printf("����Ƿ�������������\n");
								}
						}

					}
					void ComeputerMove(char board[ROW][COL], int row, int col)
					{
						printf("�������壺>\n");

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