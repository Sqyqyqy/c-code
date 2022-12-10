//设计循环队列
//w
typedef int CQDataType;
typedef struct CircularQueueNode
{
	CQDataType data;
	struct CircularQueueNode* next;
}CQNode;

typedef struct {
	CQNode* head;
	CQNode* tail;
	int size;
	int capacity;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->capacity = k;
	obj->size = 0;

	//创建循环链表 单向不带头循环
	obj->head = obj->tail = (CQNode*)malloc(sizeof(CQNode));
	k--;
	while (k--)
	{
		CQNode* newnode = (CQNode*)malloc(sizeof(CQNode));
		obj->tail->next = newnode;
		obj->tail = newnode;
	}
	obj->tail->next = obj->head;
	obj->tail = obj->head;

	return obj;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	assert(obj);

	if (obj->size < obj->capacity)
	{
		if (myCircularQueueIsEmpty(obj))
		{
			obj->tail->data = value;
			obj->size++;
		}
		else
		{
			obj->tail = obj->tail->next;
			obj->tail->data = value;
			obj->size++;
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	assert(obj);
	// assert(!myCircularQueueIsEmpty(obj));
	if (myCircularQueueIsEmpty(obj))
	{
		return false;
	}
	else
	{
		if (obj->size == 1)
		{
			obj->size--;
		}
		else
		{
			obj->head = obj->head->next;
			obj->size--;
		}

		return true;
	}
}

int myCircularQueueFront(MyCircularQueue* obj) {
	assert(obj);
	// assert(!myCircularQueueIsEmpty(obj));

	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}
	return obj->head->data;
}

int myCircularQueueRear(MyCircularQueue* obj) {
	assert(obj);
	// assert(!myCircularQueueIsEmpty(obj));

	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}
	return obj->tail->data;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	assert(obj);

	return obj->size == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
	assert(obj);

	return obj->size == obj->capacity;
}

void myCircularQueueFree(MyCircularQueue* obj) {
	assert(obj);

	CQNode* cur = obj->head;
	int capacity = obj->capacity;
	while (capacity--)
	{
		CQNode* del = cur;
		cur = cur->next;
		free(del);
	}

	free(obj);
}

//a 数组实现
//typedef struct {
//	int front;
//	int rear;
//	int* a;
//	int k;
//} MyCircularQueue;
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->front = obj->rear = 0;
//	obj->a = (int*)malloc(sizeof(int)*(k + 1));
//	obj->k = k;
//	return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	assert(obj);
//
//	return obj->rear == obj->front;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	assert(obj);
//
//	return (obj->rear + 1) % (obj->k + 1) == obj->front;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	assert(obj);
//
//	if (myCircularQueueIsFull(obj))
//		return false;
//	obj->a[obj->rear] = value;
//	obj->rear = (obj->rear + 1) % (obj->k + 1);
//	return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	assert(obj);
//
//	if (myCircularQueueIsEmpty(obj))
//		return false;
//	obj->front = (obj->front + 1) % (obj->k + 1);
//	return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	assert(obj);
//
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->a[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	assert(obj);
//
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->a[(obj->rear - 1 + obj->k + 1) % (obj->k + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	assert(obj);
//
//	free(obj->a);
//	free(obj);
//}


//对输入的6个字符串按从小到大的顺序排序，用指针方法输出6行6个字符串
//数据保证字符串仅由小写字母组成，且字符串长度小于105
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int compare(const void* a, const void* b)
//{
//	return strcmp(*((char**)a), *((char**)b));
//}
//
//int main()
//{
//	char* arr[6] = { 0 };
//	for (int i = 0; i < 6; i++)
//	{
//		char* a = (char*)malloc(105);
//		scanf("%s", a);
//		arr[i] = a;
//	}
//	qsort(arr, 6, sizeof(char*), compare);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
