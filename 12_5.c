//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效
bool isValid(char * s)
{
	ST st;
	StackInit(&st);
	while (*s)
	{
		if (*s == '(' || *s == '{' || *s == '[')
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			if (StackEmpty(&st))
			{
				StackDestroy(&st);
				return false;
			}

			char tmp = StackTop(&st);
			StackPop(&st);
			if ((*s == ']' && tmp != '[')
				|| (*s == '}' && tmp != '{')
				|| (*s == ')' && tmp != '('))
			{
				StackDestroy(&st);
				return false;
			}
			else
			{
				s++;
			}
		}
	}
	bool ret = StackEmpty(&st);
	StackDestroy(&st);
	return ret;
}


//用队列实现栈
typedef struct {
	Queue q1;
	Queue q2;
} MyStack;

bool myStackEmpty(MyStack* obj);

MyStack* myStackCreate() {
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&obj->q1);
	QueueInit(&obj->q2);
	return obj;
}

void myStackPush(MyStack* obj, int x) {
	assert(obj);
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	assert(obj);
	//空未
	assert(!myStackEmpty(obj));

	Queue* nullp = &obj->q1;
	Queue* notnullp = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		nullp = &obj->q2;
		notnullp = &obj->q1;
	}
	//倒数据
	while (QueueSize(notnullp) > 1)
	{
		QueuePush(nullp, QueueFront(notnullp));
		QueuePop(notnullp);
	}

	QDataType top = QueueFront(notnullp);
	QueuePop(notnullp);
	return top;
}

// int myStackTop(MyStack* obj) {
//     assert(obj);
//     //空未
//     assert(!myStackEmpty(obj));

//     Queue* nullp = &obj->q1;
//     Queue* notnullp = &obj->q2;
//     if(!QueueEmpty(&obj->q1))
//     {
//         nullp = &obj->q2;
//         notnullp = &obj->q1;
//     }
//     //倒数据
//     while(QueueSize(notnullp)>1)
//     {
//         QueuePush(nullp,QueueFront(notnullp));
//         QueuePop(notnullp);
//     }

//     QDataType top = QueueFront(notnullp);
//     QueuePush(nullp,top);
//     QueuePop(notnullp);
//     return top;
// }

int myStackTop(MyStack* obj)
{
	assert(obj);
	assert(!myStackEmpty(obj));

	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}


bool myStackEmpty(MyStack* obj) {
	assert(obj);

	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	assert(obj);

	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);

	free(obj);
}


//用栈实现队列
typedef struct {
	ST pushst;
	ST popst;
} MyQueue;

bool myQueueEmpty(MyQueue* obj);

MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&obj->popst);
	StackInit(&obj->pushst);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	assert(obj);

	StackPush(&obj->pushst, x);
}

int myQueuePeek(MyQueue* obj);

int myQueuePop(MyQueue* obj) {
	assert(obj);
	//空未
	assert(!myQueueEmpty(obj));

	STDataType peek = myQueuePeek(obj);
	StackPop(&obj->popst);
	return peek;
}

int myQueuePeek(MyQueue* obj) {
	assert(obj);
	assert(!myQueueEmpty(obj));

	//倒数据
	if (StackEmpty(&obj->popst))
	{
		while (!StackEmpty(&obj->pushst))
		{
			StackPush(&obj->popst, StackTop(&obj->pushst));
			StackPop(&obj->pushst);
		}
	}

	return StackTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj) {
	assert(obj);

	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj) {
	assert(obj);

	StackDestroy(&obj->pushst);
	StackDestroy(&obj->popst);

	free(obj);
}
