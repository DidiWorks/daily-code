


	//game 1
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

							void game()   // 游戏逻辑
							{
								int ret =0;   
								char board[ROW][COL] = { 0 };  //初始化数组
								//lnitialize the board
								InitBoard(board,ROW,COL);  // 初始化棋盘
								DispalyBoard(board,ROW,COL); //打印棋盘
								while(1)
								{
									playerMove(board,ROW,COL); // 玩家下棋
									ret=IsWin(board,ROW,COL); //胜利条件
									{
									     if(ret!='C')  //当代码不等于C时跳出，也就是代码当前一直在执行C
										 {
											 break;
										 }
									}
									DispalyBoard(board, ROW,COL); //打印棋盘
									ComeputerMove(board,ROW,COL);  //电脑下棋逻辑
									ret =IsWin(board,ROW,COL);  
									if(ret !='C')       //
									{
										break;  
									}
									Dispalyboard(board,ROW,COL);  //最后打印棋盘
								}
								if(ret == '*')       //在这里判断谁赢的条件 如果不等于c也就是没下完才跳到这里
								{
									printf("玩家赢\n");
								}
								else if(ret =='#')
								{
									printf("电脑赢\n");
								else
								{
								    printf("平局\n");
								}
                                DispalyBoard(board,ROW,COL);				 										
							}
							int main()
							{ 
							   stand((unsigned int)time(NULL));   //在主函数中设置随机值让电脑下棋逻辑生成随机值
								int input = 0;      
								do                //这里用do while 循环的逻辑是因为，我们需要直接看到菜单选择并且无线循环下去
								{
									menu();    //菜单
									printf("请选择：>");  //选择游戏
									scanf("%d", &input); //取地址
									switch (input)       //选择选项 
									{
									case 1:       //进入游戏
										game();
										break;
									case 0:     //退出游戏
										printf("退出游戏\n");
										break;
									default:   // 其他选择，选择错误返回
										printf("选择错误\n");
										break;
									}
								} while (input);  // while 无线循环input


								return 0;
							}