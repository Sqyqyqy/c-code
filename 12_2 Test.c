#include"Queue.h"


void TestQueue()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);

	//QueuePop(&q);
	//QueuePop(&q);
	QueuePop(&q);
	//QueuePop(&q);

	printf("QueueFront: %d\n",QueueFront(&q));
	printf("QueueBack: %d\n",QueueBack(&q));
	printf("QueueSize: %d\n", QueueSize(&q));

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");
	
	QueueDestroy(&q);
}

int main()
{
	TestQueue();
  
	return 0;
}
