#include"Heap.h"

void TestHeap1()
{
	int arr[] = { 23,10,13,43,94,25,49,65,19,12 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		HeapPush(&hp, arr[i]);
	}
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	//topk
	int k = 3;
	while (k--)
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	printf("\n");

	HeapDestroy(&hp);

	//初步排序
	int arr1[] = { 23,10,13,43,94,25,49,65,19,12 };
	HP hp1;
	HeapInit(&hp1);
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{
		HeapPush(&hp1, arr1[i]);
	}

	while (!HeapEmpty(&hp1))
	{
		printf("%d ", HeapTop(&hp1));
		HeapPop(&hp1);
	}

	HeapDestroy(&hp1);
}

void TestHeap2()
{
	int arr[] = { 23,10,13,43,94,25,49,65,19,12 };
	HP hp;
	//建堆算法
	HeapCreate(&hp, arr, sizeof(arr) / sizeof(int));
	HeapPrint(&hp);

	HeapDestroy(&hp);
}

int main()
{
	TestHeap1();

	TestHeap2();

	return 0;
}
