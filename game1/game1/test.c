#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include"game.h"

                                        /// @brief �˵���������ʾ��Ϸ�˵�
                                         menu()
                                        {
                                            printf("*************************\n");
                                            printf("*****  1.play 0.exit ****\n");
                                            printf("*************************\n");
                                        }

                                        void game()//��Ϸ�߼�������board����ʹ�С����c�ļ���ʵ���߼�����h�ļ�������
                                        {
                                            int ret = 0;  // ��ʼ��ret���������ڴ洢��Ϸ״̬
                                            char board[ROW][COL] = { 0 };  // �����������飬��С��ͷ�ļ��ж���Ϊ3��3��
                                            // ��ʼ������
                                            InitBoard(board, ROW, COL);  // ��ʼ������
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
                                            srand((unsigned int)time(NULL));  // �������������
                                            int input = 0;
                                            do  // ʹ��do whileѭ��ʵ�ֲ˵��߼�
                                            {
                                                menu();  // ��ʾ�˵�
                                                printf("��ѡ��>");  // ��ʾ�û�ѡ��
                                                scanf("%d", &input);  // ��ȡ�û�����
                                                switch (input)  // �����û�����ѡ�����
                                                {
                                                case 1:  // ѡ��1����ʼ��Ϸ
                                                    game();  // ������Ϸ����
                                                    break;  // ������ǰcase
                                                case 0:
                                                    printf("�˳���Ϸ\n");  // ѡ��0���˳���Ϸ
                                                    break;
                                                default:  // ��������ֵ����ʾѡ�����
                                                    printf("ѡ�����\n");
                                                    break;
                                                }
                                            } while (input);  // ѭ��ֱ���û�ѡ���˳�

                                            return 0;
                                        }
