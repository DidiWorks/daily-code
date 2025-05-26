#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include"game.h"

                                        /// @brief 菜单函数，显示游戏菜单
                                         menu()
                                        {
                                            printf("*************************\n");
                                            printf("*****  1.play 0.exit ****\n");
                                            printf("*************************\n");
                                        }

                                        void game()//游戏逻辑，传入board数组和大小，在c文件中实现逻辑，在h文件中声明
                                        {
                                            int ret = 0;  // 初始化ret变量，用于存储游戏状态
                                            char board[ROW][COL] = { 0 };  // 创建棋盘数组，大小在头文件中定义为3行3列
                                            // 初始化棋盘
                                            InitBoard(board, ROW, COL);  // 初始化棋盘
                                            DispalyBoard(board, ROW, COL);
                                            while (1)
                                            {
                                                PlayerMove(board, ROW, COL);  
                                                ret = IsWin(board, ROW, COL);  
                                                if (ret != 'C')  
                                                {
                                                    break;  
                                                }
                                                DispalyBoard(board, ROW, COL);  
                                                ComeputerMove(board, ROW, COL);  
                                                ret = IsWin(board, ROW, COL);  
                                                if (ret != 'C')  
                                                {
                                                    break;  
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
                                            srand((unsigned int)time(NULL));  // 设置随机数种子
                                            int input = 0;
                                            do  // 使用do while循环实现菜单逻辑
                                            {
                                                menu();  // 显示菜单
                                                printf("请选择>");  // 提示用户选择
                                                scanf("%d", &input);  // 读取用户输入
                                                switch (input)  // 根据用户输入选择操作
                                                {
                                                case 1:  // 选择1，开始游戏
                                                    game();  // 调用游戏函数
                                                    break;  // 结束当前case
                                                case 0:
                                                    printf("退出游戏\n");  // 选择0，退出游戏
                                                    break;
                                                default:  // 输入其他值，提示选择错误
                                                    printf("选择错误\n");
                                                    break;
                                                }
                                            } while (input);  // 循环直到用户选择退出

                                            return 0;
                                        }
