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
// 标记功能
// 
// 格子变成旗帜的状态
// 防止被点开
// 取消标记
// 可选（雷计数显示，如果被标记，雷减1，取消雷返回)

// 扩散功能
// 