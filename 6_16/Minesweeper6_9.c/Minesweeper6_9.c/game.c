
#include"game.h"

	void initboard(char board[ROWS][COLS], int rows, int cols, char set)
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
	void Displayboard(char board[ROWS][COLS], int row, int col)
	{
		int i = 0;
		int j = 0;
		printf("-----------------Minesweeper-----------------\n");
		for (j = 0; j <=col; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d ", i);
			for (j = 1; j <= col; j++)
			{
				printf("%c ", board[i][j]);
			}
			printf("\n");
		}
		printf("-----------------Minesweeper-----------------\n");

	}
	void Setmine(char board[ROWS][COLS], int row, int col) 
	{
		int x = 0;
		int y = 0;
		int count = EAZY_MODE;
		while (count)
		{
			x = rand() % row + 1; //����Ҳ��һ��ʵ���ϴ�����11����Ҫ��ǰ��+1����9
			y = rand() % col + 1;
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		}

	}
	int in_my_board(char board[ROWS][COLS], int x, int y) //����һ��[x][y]
	{
		return (
			board[x - 1][y] +
			board[x - 1][y - 1] +
			board[x][y - 1] +
			board[x + 1][y - 1] +
			board[x + 1][y] +
			board[x + 1][y + 1] +
			board[x][y + 1] +
			board[x - 1][y + 1] - 8 * '0');
	}


	void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) //����ΪʲôҪ��11*11
	{
		int x = 0;
		int y = 0;
		int win = 0;
		while (win < row * col - EAZY_MODE)
		{
			int j = 0;
			printf("1.�ڿ�����==>\n");
			printf("2.��������==>\n");
			printf("3.ȡ������==>\n");
			scanf("%d", &j);
			
			switch (j)
			{
			case 1:
				printf("please input coordinates����������====>\n");
				scanf("%d %d", &x, &y);
				break;
			case 2:
				if (Flagshow(show, ROW, COL) == 1)
				{
					printf("�������óɹ�\n");
					printf("\n");
				}
				else
				{
					printf("���������ظ�����������\n");			
					printf("\n");
				}
				continue;
			case 3:
				if (Cancelcoordinates(show, ROW, COL) == 1)
				{
					printf("��������ȡ���ɹ�");
					printf("\n");
				}
				else
				{
					printf("����ȡ�������ظ�����������\n");
					printf("\n");
				}
				continue;
			default:
				printf("ѡ�����������ѡ��\n");
				printf("\n");

			}
			
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("please re-enter if the input is repeated\n");//��BUGֱ������ȥ��
					//���ﲻ�ܼ�break �������if��ֱ������else ִ��������߼�
				}
				else
				{
					if (mine[x][y] == '1')
					{
						printf("You were blown to death�㱻ը����\n");
						Displayboard(mine, ROW, COL);
						break;
					}
					else
					{
						win++;
						/*int count = in_my_board(mine, x, y);
						show[x][y] = count + '0';*/
						diffusion(show, mine, x, y);
						Displayboard(show, ROW, COL);
					}
				}
				

			}
			else
			{
				printf("The input coordinates are out of range,please try again\n");
				break;
			}
		}
		if (win == row * col - EAZY_MODE)
		{
			printf("\n");
			printf("\n");
			printf("                 You Win!!!               \n");
			printf("\n");
			printf("\n");
			Displayboard(mine, ROW, COL);

		}
	}
	int  Flagshow(char show[ROWS][COLS], int row, int col) 
	{
		int  x = 0;
		int  y = 0;
		printf("��������������_ _\n");
		scanf("%d %d", &x, &y);
		
		

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				Displayboard(show, ROW, COL);
				printf("������������Ϊ==>[%d][%d]\n", x, y);

				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			printf("�����������곬����Χ\n");
				return 0;
		}
	
	}
	int Cancelcoordinates(char show[ROWS][COLS], int row, int col)
	{
		int  x = 0;
		int  y = 0;
		printf("����ȡ������������_ _\n");
		scanf("%d %d", &x, &y);
		
		

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '#')
			{
				show[x][y] = '*';
				Displayboard(show, ROW, COL);
				printf("����ȡ����������Ϊ==>[%d][%d]\n", x, y);
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			printf("�����������곬����Χ\n");
			return 0;
		}

	}
	//void diffusion(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y) //ֱ���ֶ�չ��
	//{
	//	if (x<1 || x>ROW || y<1 || y>COL)
	//		return;
	//	if (show[x][y] != '*')
	//		return;
	//	int count = in_my_board(mine, x, y);
	//	show[x][y] = count+'0';
	//	if (count== 0)
	//	{
	//	/*	diffusion(show, mine,  x - 1, y - 1);
	//		diffusion(show, mine,  x - 1, y);
	//		diffusion(show, mine,   x - 1, y + 1);
	//		diffusion(show, mine,  x , y - 1);
	//		diffusion(show, mine,  x , y + 1);
	//		diffusion(show, mine,  x + 1, y - 1);
	//		diffusion(show, mine,  x + 1, y );
	//		diffusion(show, mine,  x + 1, y + 1);*/
	//		// �ȴ����ĸ�ֱ�����ڵķ���
	//		diffusion(show, mine, x - 1, y);    // ��
	//		diffusion(show, mine, x + 1, y);    // ��
	//		diffusion(show, mine, x, y - 1);    // ��
	//		diffusion(show, mine, x, y + 1);    // ��

	//		/* �ٴ����ĸ��ԽǷ���*/
	//		diffusion(show, mine, x - 1, y - 1);  // ����
	//		diffusion(show, mine, x - 1, y + 1);  // ����
	//		diffusion(show, mine, x + 1, y - 1);  // ����
	//		diffusion(show, mine, x + 1, y + 1);  // ����
	//	}
	//		
	//	
	//	
	//}
	
	void  diffusion(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y) //ѭ������չ��
	{
		if (x<1 || x>ROW || y<1 || y>COL)
			return;
		if (show[x][y] != '*')
			return;
		int count = in_my_board(mine, x, y);
		show[x][y] = count + '0';
			if (count == 0)
			{
				for (int i = -1; i <=1; i++)
				{
					for (int j = -1; j <=1; j++)
					{
						if (i == 0 && j == 0)
							continue;
						int _nex = x + i;
						int _ney = y + j;
						if (_nex >= 1 && _nex <= ROW && _ney >= 1 & _ney < COL && show[_nex][_ney] == '*')
						{
							diffusion(show, mine, _nex, _ney);
							Displayboard(show, ROW, COL);
						}
					}
				}
			}

	}