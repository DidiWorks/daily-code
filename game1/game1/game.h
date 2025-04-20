#pragma once

#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3 
// lnitialize the board
void InitBoard(char board[ROW][COL], int row, int col);

//  Print chessboard
void DispalyBoard(char board[ROW][COL], int row, int col);

//PlayerMove
void PlayerMove(char board[ROW][COL], int row, int col);

//Computer chess
void ComeputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);