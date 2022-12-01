//合并两个有序链表
//将两个升序链表合并为一个新的 升序 链表并返回
//新链表是通过拼接给定的两个链表的所有节点组成的
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//	//都非空 1空 
//	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	guard->next = NULL;
//	struct ListNode* tail = guard;
//	while (list1 && list2)
//	{
//		if (list1->val <= list2->val)
//		{
//			tail->next = list1;
//			tail = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			tail->next = list2;
//			tail = list2;
//			list2 = list2->next;
//		}
//	}
//	if (list1 == NULL)
//	{
//		tail->next = list2;
//	}
//	else
//	{
//		tail->next = list1;
//	}
//
//	struct ListNode* newhead = guard->next;
//	free(guard);
//	return newhead;
//}


//链表的中间结点
//给定一个头结点为 head 的非空单链表，返回链表的中间结点。如果有两个中间结点，则返回第二个中间结点
//struct ListNode* middleNode(struct ListNode* head)
//{
//	//边缘情况未 已
//	struct ListNode* cur = head;
//	int count = 0;
//	while (cur)
//	{
//		cur = cur->next;
//		count++;
//	}
//	int mid = count / 2 + 1;
//	cur = head;
//	for (int i = 0; i < mid - 1; i++)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}


//输出链表中倒数第k个结点
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//方法1：转换成求正数第多少个
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//	//边缘情况未 已
//	//k<=0的情况未 已 k>0且NULL的情况，k>0且count<k的情况 未 已
//	if (k <= 0 || !pListHead)
//		return NULL;
//	struct ListNode* cur = pListHead;
//	int count = 0;
//	while (cur)
//	{
//		cur = cur->next;
//		count++;
//	}
//	if (k > count)
//	{
//		return NULL;
//	}
//	count = count - k;
//	cur = pListHead;
//	while (count--)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}
//方法2：快慢指针
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//	if (k <= 0 || !pListHead)
//		return NULL;
//	//k>count未 已
//	//边缘未
//	struct ListNode* fast = pListHead;
//	struct ListNode* slow = pListHead;
//	int count = 0;
//	//fast先走k步
//	while (fast && count < k)
//	{
//		fast = fast->next;
//		count++;
//	}
//	if (count != k)//链表没有k步长 
//	{
//		return NULL;  
//	}
//
//	while (fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}
