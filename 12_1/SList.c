
#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

//增容
SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;

}

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = SLTBuyNode(x);
	//空链表和非空链表
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else 
	{
		
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}

}
