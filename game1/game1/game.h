#pragma once

#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3   //����������Ϊ3
#define COL 3   //����������Ϊ3

void InitBoard(char board[ROW][COL], int row, int col); 
// ��������׼��//�����س�ʼ������board��ά���鴫�룬���̵��У��з�Χ3���е�����
// ׼��һ��3*3�Ŀո���ռ������Ϊ������׼��


void DispalyBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);


void ComeputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);