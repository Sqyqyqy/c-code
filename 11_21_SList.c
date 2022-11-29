#include "SList.h"


SLTNode* BuySLTNode(SLTDatatype x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, *ptail = NULL;
	for (int i = 0; i < n; i++)
	{
		SLTNode* newnode = BuySLTNode(i);
		if (phead == NULL)
		{
			ptail = phead = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}
	return phead;
}

//w
//SLTNode* CreateSList(int n)
//{
//	int i = 0;
//	SLTNode* phead = BuySLTNode(i);
//	SLTNode* ptail = phead;
//	for (i = 1; i < n; i++)
//	{
//		SLTNode* newnode = BuySLTNode(i);
//		ptail->next = newnode;
//		ptail = newnode;
//	}
//	return phead;
//}

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDatatype x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		//找尾
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPopBack2(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)//最后一个结点的删除，需要单独处理
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		prev->next = NULL;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDatatype x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SLTFind(SLTNode* phead, SLTDatatype x)
{
	//NULL暂未考虑(已)
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SLTInsertAfter(SLTNode* pos, SLTDatatype x)
{
	assert(pos);

	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDatatype x)
{
	assert(pos);
	assert(*pphead);//1
	//第一个是pos
	if (*pphead == pos)
	{
		SLTNode* newnode = BuySLTNode(x);
		newnode->next = *pphead;
		*pphead = newnode;
		return;//易忽略 不加return会对下面产生影响（或写成if else结构）
	}
	//第2个或之后是pos
	SLTNode* cur = *pphead;
	while (cur)//2
	{
		if (cur->next == pos)
		{
			cur->next = BuySLTNode(x);
			cur->next->next = pos;
			return;
		}
		cur = cur->next;
	}
	assert(0);//找不到pos位置 //2
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	//pos是最后一个结点
	//assert(pos->next);
	if (pos->next == NULL)
	{
		return;
	}
	else
	{
		SLTNode* next = pos->next->next;
		free(pos->next);
		pos->next = next;
	}
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pos);
	assert(*pphead);
	//第1个是pos 头删(可以直接复用头删的函数)
	if (*pphead == pos)
	{
		*pphead = (*pphead)->next;
		free(pos);//为把pos置空，传pos的二级指针，也可以；或调用完函数后手动置空
		return;//或写成if else
	}
	//第2个或之后是pos
	SLTNode* cur = *pphead;
	while (cur)
	{
		if (cur->next == pos)
		{
			cur->next = cur->next->next;
			free(pos);
			return;
		}
		cur = cur->next;
	}
	assert(0);//找不到pos位置
}

void SLTDestroy(SLTNode** pphead)
{
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;//记前记后都可以
		free(cur);
		cur = next;
	}
	*pphead = NULL;//易忽略
}
