#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include<stdio.h>
#include<string.h>

#define ROW 9  //实际棋盘数
#define COL 9

#define ROWS (ROW+2)  // 完整棋盘数
#define COLS (COL+2)

#define EASY_COUNT 10 //简单难度地雷数量

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBaord(char board[ROWS][COLS], int row, int col);
void setMine(char board[ROWS][COLS], int row, int col);