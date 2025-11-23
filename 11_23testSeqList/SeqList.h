#pragma once	 //方式重复包含
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Contact.h"
//定义顺序表得结构

//typedef int SlDataType;
typedef peoInfo SlDataType;

typedef struct SeqList
{
	SlDataType* arr;
	int size;	 // 有效数据个数
	int capacity; // 空间大小
}SL;

// 初始化
void SLInit(SL*ps);
// 销毁
void SLDestroy(SL* ps);
 //打印
void SLPrint(SL s);
// 头部插入删除 / 尾部插入删除
// 尾插
void SLPushBack(SL* ps, SlDataType x);

// 头插
void SLPushFront(SL* ps, SlDataType x);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);


// 指定位置之前插入数据
void SLInsert(SL* ps, int pos, SlDataType x);
// 指定位置删除数据
void SLErase(SL* ps, int pos);

//  查找数据
int SLFind(SL* ps, SlDataType x);