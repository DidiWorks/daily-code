#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS (ROW+2)
#define COLS (COL+2)

#define EAZY_MODE 10


void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS],  int row, int col);
int  Flagshow(char show[ROWS][COLS], int row, int col);
int Cancelcoordinates(char show[ROWS][COLS], int row, int col);
void  diffusion(char show[ROWS][COLS],char mine[ROWS][COLS],  int x, int y);
// ��ǹ���
// 
// ���ӱ�����ĵ�״̬
// ��ֹ���㿪
// ȡ�����
// ��ѡ���׼�����ʾ���������ǣ��׼�1��ȡ���׷���)

// ��ɢ����
// 