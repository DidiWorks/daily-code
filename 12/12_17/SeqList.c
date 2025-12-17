#include "SeqList.h"

void SeqListInit(SL ps)
{
	ps.a = NULL;
	ps.size = ps.capacity = 0;

}

void SeqListPushFront(SL* ps, SLDataType x)
{
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
