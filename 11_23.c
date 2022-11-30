
//反转链表
//法1 取原结点头插
//SLTNode* reverseList(SLTNode* head)
//{
//	SLTNode* cur = head;
//	SLTNode* rhead = NULL;
//	while (cur)
//	{
//		SLTNode* next = cur->next;
//		//头插
//		cur->next = rhead;
//		rhead = cur;
//
//		cur = next;
//	}
//	return rhead;
//}
//
////w法2 改变指针指向 三个指针翻转
////考虑避免对NULL解引用(NULL,1个结点，2个结点，考虑这些情况)
//SLTNode* reverseList2(SLTNode* head) {
//	if (head == NULL)
//		return head;
//	SLTNode* cur = head->next;
//	SLTNode* prev = head;
//	SLTNode* next = NULL;
//	while (cur)
//	{
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	head->next = NULL;
//	return prev;
//}
//
//int main()
//{
//	SLTNode* p = CreateSList(5);
//	SLTPrint(p);
//	SLTNode* p1 = reverseList(p);
//	SLTPrint(p1);
//	return 0;
//}


//野指针的访问 测试
//int main()
//{
//	int* p = (int*)malloc(4);
//	free(p);
//	printf("%d", *p);//不报错
//	*p = 1;//不报错
//
//	SLTNode* p1 = (SLTNode*)malloc(sizeof(SLTNode));
//	free(p1);
//	p1->data = 3;//不报错
//	p1->next->next = NULL;//报错
//	return 0;
//}


//移除链表元素
//struct ListNode 
//{
//    int val;
//    struct ListNode *next;
//};
//w思路1：删除
////Definition for singly - linked list.
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	if (head == NULL)//单独处理空链表
//		return NULL;
//	while (head->val == val)//处理头结点就是val的情况
//	{
//		struct ListNode* prev = head;
//		head = head->next;
//		free(prev);
//		if (head == NULL)
//		{
//			return NULL;
//		}
//	}
//	//头结点以后是val的情况
//	struct ListNode* cur = head->next;
//	struct ListNode* prev = head;
//	// struct ListNode* next = NULL;
//	while (cur)//cur==NULL未考虑 已
//	{
//		// next = cur->next;
//		if (cur->val == val)
//		{
//			prev->next = cur->next;
//			free(cur);
//			cur = prev->next;
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}

//a思路2：不是val的尾插，是val的删掉
//（不带哨兵位的头结点）
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* cur = head;
//	struct ListNode* newhead = NULL, *tail = NULL;
//	while (cur)
//	{
//		if (cur->val != val)
//		{
//			if (newhead == NULL)
//			{
//				tail = newhead = cur;
//			}
//			else
//			{
//				tail->next = cur;
//				tail = cur;
//			}
//			cur = cur->next;
//		}
//		else
//		{
//			struct ListNode* next = cur->next;
//			free(cur);
//			cur = next;
//		}
//	}
//	if (tail)
//		tail->next = NULL;
//	return newhead;
//}
//（带哨兵位的头结点）
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	guard->next = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* tail = guard;
//	while (cur)
//	{
//		if (cur->val != val)
//		{
//			tail->next = cur;
//			tail = cur;
//			cur = cur->next;
//		}
//		else
//		{
//			struct ListNode* next = cur->next;
//			free(cur);
//			cur = next;
//		}
//	}
//	tail->next = NULL;
//	struct ListNode* newhead = guard->next;
//	free(guard);
//	return newhead;
//}
