#include "SeqList.h"


void SLInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)
{
	//扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, sizeof(SLDateType)*newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SLPushBack(SL* ps,SLDateType x)
{
	//assert(ps);
	//SLCheckCapacity(ps);

	//ps->a[ps->size] = x;
	//ps->size++;

	SLInsert(ps, ps->size, x);//复用
}

void SLDestory(SL* ps)
{
	assert(ps);

	//if(ps->a != NULL)
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->capacity = 0;
		ps->size = 0;
	}
}

void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");

}

void SLPopBack(SL* ps)
{
	//assert(ps);
	////温柔的检查
	///*if (ps->size == 0)
	//{
	//	return;
	//}*/

	////暴力的检查
	//assert(ps->size > 0);

	//ps->size--;

	SLErase(ps, ps->size - 1);//复用
}

void SLPushFront(SL* ps, SLDateType x)
{
	//assert(ps);
	//SLCheckCapacity(ps);

	////挪动数据
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	end--;
	//}
	//
	//ps->a[0] = x;
	//ps->size++;

	SLInsert(ps, 0, x);//复用
}

void SLPopFront(SL* ps)
{
	//assert(ps);
	//assert(ps->size > 0);//易忽略

	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	begin++;
	//}

	//ps->size--;

	SLErase(ps, 0);//复用
}

void SLInsert(SL* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->size);

	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->size - 1);
	//assert(ps->size > 0);

	//挪动数据
	int begin = pos;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}

	ps->size--;
}

int SLFind(SL* ps, SLDateType x)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

int SLFind2(SL* ps, SLDateType x, int begin)//SLFind改进
{
	assert(ps);

	for (int i = begin; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
