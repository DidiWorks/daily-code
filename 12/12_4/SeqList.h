#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Contact.h"
#include<string.h>
#include<errno.h>
#include"Contact.h"

typedef peoInfo  SLDataType;

typedef struct Seqlist
{
	SLDataType* arr;
	int size;  //有效数据个数
	int capacity;  // 空间大小
}SL;



//初始化
void SLInit(SL* ps);
//销毁
void SLDestroy(SL* ps);
//增容
void SLCheckCapacity(SL* ps);
////加载
//void SLLoad(SL* ps);

//尾插
void SLPushBack(SL* ps, SLDataType x);
//头插
void SLPushFront(SL* ps, SLDataType x);
//打印
void SLPrint(SL ps);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);
//在指定位置之前插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
//指定位置删除
void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);


