#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	
	php->a = NULL;
	php->capacity = php->size = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);

	free(php->a);
	php->a = NULL;
	php->capacity = php->size = 0;
}

void HeapPrint(HP * php)
{
	assert(php);

	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustUp(HPDataType* a, int child)
{
	assert(a);

	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);

	//扩容
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType)*newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newcapacity;
	}
	
	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}

void AdjustDown(HPDataType* a, int size, int parent)
{
	int child = parent * 2 + 1;//假设左孩子大
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])
		{
			child = child + 1;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	return php->a[0];
}

int HeapSize(HP* php)
{
	assert(php);

	return php->size;
}

void HeapCreate(HP* php, HPDataType* a, int n)
{
	assert(php);
	assert(a);

	php->a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	if (php->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType)*n);
	php->capacity = php->size = n;

	//建堆算法 
	//向下调整建堆 O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n,i);
	}

	//向上调整建堆 O(N*logN)
	//for (int i = 1; i < n; i++)
	//{
	//	adjustup(php->a, i);
	//}
}
