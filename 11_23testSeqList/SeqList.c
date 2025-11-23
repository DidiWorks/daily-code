#include"SeqList.h"

void SLInit(SL* ps)
{
    ps->arr = NULL;
    ps->size = ps->capacity = 0;
}

void SLDestroy(SL* ps)
{
    if (ps->arr)
    {
        free(ps->arr);            
    }
    ps->arr = NULL;
    ps->size = ps->capacity = 0;
}
//增容                                          
void  SLCheckCapacity(SL* ps)
{
    //ps->arr[ps->size] = x;
    //++ps->size;
    if (ps->capacity == ps->size)
    {
        int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        SlDataType* tmp = (SlDataType*)realloc(ps->arr, /*ps->capacity * 2*/newCapacity * sizeof(SlDataType));
        if (tmp == NULL)
        {
            perror("realloc faill");
            exit(1);  //直接退出程序
        }
        ps->arr = tmp;
        ps->capacity = newCapacity;
    }
}

//尾插
void SLPushBack(SL* ps, SlDataType x)
{
  /*  if (ps == NULL)
    {
        return;
    }*/
     assert(ps);
     SLCheckCapacity(ps);
    ps->arr[ps->size++] = x;
}

//头插
void SLPushFront(SL* ps, SlDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    for (int i = ps->size; i > 0; i--)
    {
        ps->arr[i] = ps->arr[i - 1];
    }
    ps->arr[0] = x;
    ps->size++;
}
//打印
//void SLPrint(SL s)
//{
//    for (int i = 0; i < s.size; i++)
//    {
//        printf("%d ", s.arr[i]);
//    }
//    printf("\n");
//}
//尾删
void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size);
    --ps->size;
}
//头删
void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size);
    for (int i = 0; i < ps->size - 1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];
    }
    ps->size--;

}
//在指定位置之前插入数据
void SLInsert(SL* ps, int pos, SlDataType x)
{
    assert(ps);
    assert(pos >= 0 && pos <= ps->size);
    SLCheckCapacity(ps);
    for (int i = ps->size; i > pos; i--)
    {
        ps->arr[i] = ps->arr[i - 1];
    }
    ps->arr[pos] = x;
    ps->size++;

}
// 删除指定位置得数据
void SLErase(SL* ps, int pos)
{
    assert(ps);
    assert(pos >= 0 && pos < ps->size);
    for (int i = pos; i < ps->size -1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];
    }
    ps->size--;
}
//int SLFind(SL* ps, SlDataType x)
//{
//    assert(ps);
//    for (int i = 0; i < ps->size; i++)
//    {
//        if (ps->arr[i] == x)
//        {
//            return i;
//        }
//    }
//    return -1;
//}

