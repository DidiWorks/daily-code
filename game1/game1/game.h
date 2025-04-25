#pragma once

#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3   //定义数组行为3
#define COL 3   //定义数组列为3

void InitBoard(char board[ROW][COL], int row, int col); 
// 棋盘数据准备//不返回初始化棋盘board二维数组传入，棋盘的行，列范围3，行的类型
// 准备一个3*3的空格，先占满棋盘为后续做准备


void DispalyBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);


void ComeputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);