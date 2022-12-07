#include "Stack.h"

void StackInit(ST* ps)
{
	assert(ps);

	//初始化1
	//ps->a = NULL;
	//ps->top = 0;
	//ps->capacity = 0;

	//初始化2
	ps->a = (STDataType*)malloc(4 * sizeof(STDataType));
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;

	//top也可初始化为-1
}

void StackDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	// 扩容
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	//assert(ps->top > 0);
	assert(!StackEmpty(ps));

	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	//assert(ps->top > 0);
	assert(!StackEmpty(ps));

	return ps->a[ps->top-1];
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	//if (ps->top == 0)
	//{
	//	return true;
	//}
	//else
	//{
	//	return false;
	//}

	return ps->top == 0;
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}
