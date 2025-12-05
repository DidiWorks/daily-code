#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

// 顺序表存储的数据类型（通用指针，支持任意类型）
typedef void* SLDataType;

// 顺序表结构体
typedef struct SeqList
{
    SLDataType* arr;      // 存储数据的数组（void*类型，可存任意数据）
    int size;             // 有效数据个数
    int capacity;         // 容量大小
    size_t elemSize;      // 每个元素的大小（用于内存操作）
} SL;

// 顺序表通用接口
void SLInit(SL* ps, size_t elemSize);                 // 初始化（需指定元素大小）
void SLDestroy(SL* ps);                               // 销毁
void SLCheckCapacity(SL* ps);                         // 检查并扩容
void SLPushBack(SL* ps, SLDataType x);                // 尾插（x是元素地址）
void SLPopBack(SL* ps);                               // 尾删
void SLPushFront(SL* ps, SLDataType x);               // 头插
void SLPopFront(SL* ps);                              // 头删
void SLInsert(SL* ps, int pos, SLDataType x);         // 指定位置插入
void SLErase(SL* ps, int pos);                        // 指定位置删除
void SLSort(SL* ps, int (*cmp)(const void*, const void*)); // 排序（传入比较函数）
SLDataType SLGet(SL* ps, int pos);                    // 获取指定位置元素