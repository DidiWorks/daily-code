#pragma once	 //方式重复包含

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//定义顺序表得结构

typedef int SlDataType;

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
void SLPushBack(SL* ps, SlDataType x);

void SLPushFront(SL* ps, SlDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);