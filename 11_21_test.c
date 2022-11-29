#include "SList.h"


void TestSList1()
{
	//SLTNode* n1 = BuySLTNode(1);
	//SLTNode* n2 = BuySLTNode(1);
	//SLTNode* n3 = BuySLTNode(1);
	//SLTNode* n4 = BuySLTNode(1);
	//n1->next = n2;
	//n2->next = n3;
	//n3->next = n4;
	//n4->next = NULL;

	//SLTNode* plist = CreateSList(10);
	//SLTPrint(plist);

	SLTNode* plist = NULL;
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	/*SLTPopBack(&plist);
	SLTPrint(plist);*/
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 100);
	SLTPushFront(&plist, 200);
	SLTPushFront(&plist, 300);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	//SLTPopFront(&plist);
	//SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = CreateSList(5);
	SLTPushFront(&plist, 100);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	/*SLTNode* pos = SLTFind(plist, 3);
	SLTPrint(pos);*/

	SLTNode* pos = SLTFind(plist, 3);
	SLTInsertAfter(pos, 300);
	SLTPrint(plist);

	SLTEraseAfter(pos);
	SLTPrint(plist);

	SLTInsertFront(&plist, pos, 1000);
	SLTPrint(plist);

	SLTInsertFront(&plist, SLTFind(plist, 0), 15);
	SLTPrint(plist);

	SLTErase(&plist, SLTFind(plist, 15));
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTErase(&plist, SLTFind(plist, 4));
	SLTPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = CreateSList(5);
	SLTPrint(plist);

	SLTDestroy(&plist);
	SLTPrint(plist);
}
int main()
{
	TestSList3();

	return 0;
}
