#include"List.h"

void TestLT1()
{
	LTNode* phead = LTInit();
	LTPushBack(phead,1);
	LTPushBack(phead,2);
	LTPushBack(phead,3);
	LTPrint(phead);

	LTNode* pos = LTFind(phead, 3);
	if (pos)
	{
		pos->val *= 100;
	}
	LTPrint(phead);

	LTPopBack(phead);
	LTPrint(phead);

	LTPushFront(phead, 3);
	LTPrint(phead);

	LTPopFront(phead);
	LTPrint(phead);

	LTPopFront(phead);
	LTPopFront(phead);
	LTPrint(phead);

	//LTPopFront(phead);
}

void TestLT2()
{
	LTNode* phead = LTInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPrint(phead);

	LTPushFront(phead, 100);
	LTPushFront(phead, 200);
	LTPushFront(phead, 300);
	LTPrint(phead);

	LTNode* pos = LTFind(phead, 300);
	LTInsert(pos, 400);
	LTPrint(phead);
}

void TestLT3()
{
	LTNode* phead = LTInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPushBack(phead, 5);
	LTPrint(phead);

	LTNode* pos = LTFind(phead, 2);
	LTErase(pos);
	LTPrint(phead);

	LTPopFront(phead);
	LTPrint(phead);

	LTPopBack(phead);
	LTPrint(phead);

	size_t size = LTSize(phead);
	printf("size = %d", size);

	LTDestroy(phead);
	phead = NULL;//手动置空
}

int main()
{
	TestLT3();
	return 0;
}
