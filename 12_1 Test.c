#include"Stack.h"


void TestStack()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);

	printf("StackSize: %d\n", StackSize(&st));
	printf("StackTop: %d\n", StackTop(&st));

	if (StackEmpty(&st))
	{
		printf("空\n");
	}
	else
	{
		printf("非空\n");
	}

	StackDestroy(&st);
}

int main()
{
	TestStack();

	return 0;
}
