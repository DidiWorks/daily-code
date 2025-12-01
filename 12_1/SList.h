#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// 定义节点结构
typedef int SLTDataType;

typedef struct SListNode {
	int data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);

// 尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
// 头插
void SLTPushFront(SLTNode** pphead, SLTDataType x);
