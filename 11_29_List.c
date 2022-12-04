#include"List.h"

LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	//LTNode* newnode = BuyLTNode(x);
	//
	//newnode->next = phead;
	//newnode->prev = phead->prev;
	//phead->prev->next = newnode;
	//phead->prev = newnode;
	LTInsert(phead,x);
}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead); //判空

	//LTNode* tail = phead->prev;

	//phead->prev = phead->prev->prev;
	//phead->prev->next = phead;
	//free(tail);

	LTErase(phead->prev);
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	//null未 已
	//LTNode* newnode = BuyLTNode(x);
	//newnode->next = phead->next;
	//phead->next->prev = newnode;

	//newnode->prev = phead;
	//phead->next = newnode;

	LTInsert(phead->next, x);
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	//LTNode* first = phead->next;

	//phead->next = phead->next->next;
	//phead->next->next->prev = phead;

	//free(first);

	LTErase(phead->next);
}

void LTPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

LTNode* LTFind(LTNode* phead, LTDataType data)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->val == data)
		{
			return cur;
		}

		cur = cur->next;
	}
	return NULL;
}

void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnode = BuyLTNode(x);
	LTNode* prev = pos->prev;
	
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void LTErase(LTNode* pos)
{
	assert(pos);

	//pos最后一个的情况 未已
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	free(pos);
	prev->next = next;
	next->prev = prev;
}

bool LTEmpty(LTNode* phead)
{
	assert(phead);

	/*if (phead->next == phead)
	{
		return true;
	}
	else
	{
		return false;
	}*/

	return phead->next == phead;
}

size_t LTSize(LTNode* phead)
{
	assert(phead);

	size_t size = 0;
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

void LTDestroy(LTNode* phead)
{
	assert(phead);

	LTNode* next = NULL;
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
