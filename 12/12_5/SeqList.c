#include "SeqList.h"

// 初始化顺序表
void SLInit(SL* ps, size_t elemSize)
{
    assert(ps);
    ps->arr = NULL;
    ps->size = 0;
    ps->capacity = 0;
    ps->elemSize = elemSize; // 记录元素大小，用于后续内存操作
}

// 销毁顺序表
void SLDestroy(SL* ps)
{
    assert(ps);
    if (ps->arr)
    {
        free(ps->arr);
        ps->arr = NULL;
    }
    ps->size = ps->capacity = 0;
}

// 检查并扩容
void SLCheckCapacity(SL* ps)
{
    assert(ps);
    if (ps->size == ps->capacity)
    {
        int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * ps->elemSize);
        if (tmp == NULL)
        {
            perror("realloc fail");
            exit(1);
        }
        ps->arr = tmp;
        ps->capacity = newCapacity;
    }
}

// 尾插
void SLPushBack(SL* ps, SLDataType x)
{
    assert(ps && x);
    SLCheckCapacity(ps);
    // 按元素大小拷贝数据到顺序表末尾
    memcpy((char*)ps->arr + ps->size * ps->elemSize, x, ps->elemSize);
    ps->size++;
}

// 尾删
void SLPopBack(SL* ps)
{
    assert(ps && ps->size > 0);
    ps->size--;
}

// 头插
void SLPushFront(SL* ps, SLDataType x)
{
    assert(ps && x);
    SLCheckCapacity(ps);
    // 从后往前移动数据，腾出头部位置
    memmove((char*)ps->arr + 1 * ps->elemSize,
        (char*)ps->arr + 0 * ps->elemSize,
        ps->size * ps->elemSize);
    // 插入新元素到头部
    memcpy((char*)ps->arr + 0 * ps->elemSize, x, ps->elemSize);
    ps->size++;
}

// 头删
void SLPopFront(SL* ps)
{
    assert(ps && ps->size > 0);
    // 从第二个元素开始往前覆盖
    memmove((char*)ps->arr + 0 * ps->elemSize,
        (char*)ps->arr + 1 * ps->elemSize,
        (ps->size - 1) * ps->elemSize);
    ps->size--;
}

// 指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
    assert(ps && x);
    assert(pos >= 0 && pos <= ps->size);
    SLCheckCapacity(ps);
    // 从pos位置开始往后移动数据
    memmove((char*)ps->arr + (pos + 1) * ps->elemSize,
        (char*)ps->arr + pos * ps->elemSize,
        (ps->size - pos) * ps->elemSize);
    // 插入新元素
    memcpy((char*)ps->arr + pos * ps->elemSize, x, ps->elemSize);
    ps->size++;
}

// 指定位置删除
void SLErase(SL* ps, int pos)
{
    assert(ps);
    assert(pos >= 0 && pos < ps->size);
    // 从pos+1位置开始往前覆盖
    memmove((char*)ps->arr + pos * ps->elemSize,
        (char*)ps->arr + (pos + 1) * ps->elemSize,
        (ps->size - pos - 1) * ps->elemSize);
    ps->size--;
}

// 排序（使用qsort，需传入比较函数）
void SLSort(SL* ps, int (*cmp)(const void*, const void*))
{
    assert(ps && cmp);
    qsort(ps->arr, ps->size, ps->elemSize, cmp);
}

// 获取指定位置元素（返回元素地址）
SLDataType SLGet(SL* ps, int pos)
{
    assert(ps);
    assert(pos >= 0 && pos < ps->size);
    return (char*)ps->arr + pos * ps->elemSize;
}