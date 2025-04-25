
//game.c
							
							#define _CRT_SECURE_NO_WARNINGS
                           #include"game.h"

					void InitBoard(char board[ROW][COL], int row, int col)   //初始化棋盘
					{
						int i = 0;
						int j = 0;
						for (i = 0; i < row; i++)     //外循环行
						{
							for (j = 0; j < col; j++)    //内循环列
							{
								board[i][j] = ' ';    //后再数组中存储入空格
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
					void DispalyBoard(char board[ROW][COL], int row, int col)  //打印棋盘
					{
						int i = 0;
						for (i = 0; i < row; i++)    //循环行
						{
							//Print data
							/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
							int j = 0;
							for (j = 0; j < col; j++) //循环列
							{
								printf(" %c ", board[i][j]);    //当开始循环时，根据数组的循环对应打印空格
								if (j < col - 1)              // 因为数组的起始点是0-2，按数组循环打印是1-3所以col-1
									printf("|");            //打印|
							}
							printf("\n");                 //当完成一行后，换行
							//print segmentation information
							if (i < row - 1)            //我们要打印一个井字型的棋盘，第二行要让行-1
							{
								/*printf("---|---|---\n");*/
								int j = 0;
								for (j = 0; j < col; j++)    //列正常循环
								{
									printf("---");  
									if (j < col - 1) 
										printf("|");
								}
								printf("\n");
							}
		
						}
					}
					void playerMove(char board[ROW][COl],int row, int col)  //玩家下棋逻辑
					{
						 int x = 0;
						 int y =0;
						 printf("玩家下棋：>\n");  
						 while(1)   
						 {
							 printf("请输入坐标：>");
							 scanf("%d %d,&x,&y);      //这里存入x，y
							 if(x>=1 && x<=row && y>1 && y<=col)  //确定数组越界，防止选择棋盘意外区域
							 {
								 if(board[x-1][y-1]==' ')   //这里的逻辑跟打印棋盘不同，要注意是实际上输入的二维数组为0-2，但是实际在棋盘上打印范围为1-3所以xy-1
								 {
									 board[x-1][y-1]='*';  // 如果这里为空格那么输入*保存并返回
									 break;
								 }
								 else
								 {
									 printf("坐标非法，请重新输入\n"); //如果这里不是空格，那么坐标非法
								 }
							 }
							 else{
								 printf("坐标非法，请重新输入\n");   //如果输入的数组越界，坐标非法
							 }
						 }
				    void ComeputerMove(char borad[ROW][COL], int row ,int col)  //电脑下棋逻辑
					{
						printf("电脑下棋：>\n");
						int x=0;
						int y =0 ;
						while (1)
						{
							x=rand()%row;  //这里电脑生成的随机已经是0-2，不需要照顾到玩家输入方式不用-1
							y=rand()%col;
							if(board[x][y]==' ') 
							{
								board[x][y]== '#'; //如果不是空格打印#正确，不用做保护
								break;
							}
						}
					}
					int IsFull(char board[ROW][COL],int row, int col) 
					{
						int i=0;
						int j=0;
						for(i=0;i<row;i++)
						{
							for(j=0;j<row;j++) //双重循环历变整个数组
							{
								if(board[i][j]==' ') //如果在任何位置找到空格，就立即返回0
								{
									return 0;  //表示棋盘还未满。
								}
							}
						}
						return 1;//如果返回1就表示棋盘已满
					}
					char IsWin(char board[ROW][COL],int row ,int col) //胜利条件
					{
						int i =0;
						for(i=0;i<row;i++)
						{
							if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')  //当1-0==1-1 && 1-1==1-2 && 1-1不等于空格时
							{
								return board[i][1]; //返回1-1内的符号
							}
						}
						int j=0;
						for(j=0;j<col;j++)
						{
							if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j] !=' ') //当0-1==1-0 && 1-0==2-0 && 1-0不等于空格时
							{
								return board[1][j];//返回1-0内的符号
						    }
						}
						if(board[0][2]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1] !=' ')//当0-2==1-1 && 1-1==2-2 && 1-1 不等于空格时
						{
							return board[1][1]; //返回1-1；
						}
						if(IsFull(board, row ,col)) //判断平局
						{
							return 'Q'; //返回Q表示平局
						}
						return 'C';  //返回C表示胜利
						
					}
						