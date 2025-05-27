 
 				//  game.h
					  #pragma once

#include <stdio.h>
#include<game.h>
#include<time.h>

#define ROW 3
#define COL 3 
// lnitialize the board
void InitBoard(char board[ROW][COL], int row, int col); //初始化棋盘

//  Print chessboard
void DispalyBoard(char board[ROW][COL],int row , int col); //打印棋盘


void playerMove(char board[ROW][COl],int row, int col);    //玩家下棋逻辑   


void ComeputerMove(char borad[ROW][COL], int row ,int col);  //电脑下棋逻辑  


char IsWin(char borad[ROW][COL], int row ,int col)   //胜利时
