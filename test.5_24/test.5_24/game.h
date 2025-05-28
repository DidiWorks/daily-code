#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#include <time.h>


//初始化棋盘，打印棋盘，玩家下棋，电脑下棋，胜负判定


#define ROW  3
#define COL  3

void Inviden(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void playerBoard(char board[ROW][COL], int row, int col);

void ComputerBoard(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);

int Isfull(char board[ROW][COL], int row, int col);


