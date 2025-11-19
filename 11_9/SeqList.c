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
void SLPrint(SL s)
{
    for (int i = 0; i < s.size; i++)
    {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}
//尾删
void SLPopBack(SL* ps)
{

}


