#pragma once

#include<stdio.h>
#include<stdlib.h>

#define N 1000



typedef int SLDataType;

typedef struct SeqList
{
	SLDataType *a;
	int size;
	int capacity;
}SL;

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPushFront(SL* ps, SLDataType x);
