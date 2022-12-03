//链表分割
//现有一链表的头指针 ListNode* pHead
//给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，且不能改变原来的数据顺序
//返回重新排列后的链表的头指针
struct ListNode
{
	int val;
	struct ListNode *next;
};
//struct ListNode* partition(struct ListNode* pHead, int x)
//{
//	if (pHead == NULL || pHead->next == NULL)//至少有两个结点
//		return pHead;
//	struct ListNode* slow = NULL, *fast = NULL;
//	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	//struct ListNode* guard;//err
//	guard->next = pHead;
//	slow = guard;
//	while ((slow->next) && (slow->next->val < x))//边缘未y
//	{
//		slow = slow->next;
//	}
//	if (slow->next == NULL)//找不到大于等于x的
//	{
//		return pHead;
//	}
//	else
//	{
//		fast = slow->next;
//	}
//	//fast遇到val值小于x的结点，插入到前面；遇到大于x的跳过
//	struct ListNode* rem_f = fast;
//	while (fast)
//	{
//		if(fast->val >= x)
//		{
//			rem_f = fast;
//			fast = fast->next;
//		}
//		else
//		{
//			rem_f->next = fast->next;
//			fast->next = slow->next;
//			slow->next = fast;
//
//			slow = slow->next;
//			fast = rem_f->next;
//		}
//	}
//	return guard->next;
//}
//struct ListNode* CreateList(int* a, int n)
//{
//	struct ListNode* phead = NULL, *ptail = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		//创建新结点
//		struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//		if (newnode == NULL)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//		else
//		{
//			newnode->val = a[i];
//			newnode->next = NULL;
//		}
//		//链接
//		if (phead == NULL)
//		{
//			ptail = phead = newnode;
//		}
//		else
//		{
//			ptail->next = newnode;
//			ptail = newnode;
//		}
//	}
//
//	return phead;
//}
//int main()
//{
//	int a[] = { 1,4,5,2,1,1 };//输入单链表的元素
//	struct ListNode* plist = CreateList(a, sizeof(a) / sizeof(int));
//	partition(plist, 3);
//
//	return 0;
//}


//ListNode* partition(ListNode* pHead, int x) {
//	struct ListNode* cur = pHead;
//	struct ListNode* guard1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* guard2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	guard1->next = guard2->next = NULL;
//	struct ListNode* tail1 = guard1;
//	struct ListNode* tail2 = guard2;
//	while (cur)
//	{
//		if (cur->val < x)
//		{
//			tail1->next = cur;
//			tail1 = tail1->next;
//		}
//		if (cur->val >= x)
//		{
//			tail2->next = cur;
//			tail2 = tail2->next;
//		}
//		cur = cur->next;
//	}
//	tail2->next = NULL;
//	tail1->next = guard2->next;
//	return guard1->next;
//}


//链表的回文结构
//对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构
//保证链表长度小于等于900
//int chkPalindrome(struct ListNode* A) 
//{
//	struct ListNode* plist1 = A;
//	struct ListNode* plist2 = NULL;
//	//快慢指针
//	struct ListNode* slow = A, *fast = A, *rem_slow = NULL;
//	//边缘w y
//	if (A == NULL || A->next == NULL)
//		return 1;
//	while (fast && fast->next)//奇数个或偶数个 快慢指针找中间结点
//	{
//		rem_slow = slow;//记住中间结点的前一个 之后需要把他的next置空
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	rem_slow->next = NULL;
//	struct ListNode* slow_next;
//	while (slow)
//	{
//		slow_next = slow->next;
//		slow->next = plist2;
//		plist2 = slow;
//		slow = slow_next;
//	}
//	//比较
//	while (plist1 && plist2)
//	{
//		if (plist1->val != plist2->val)
//		{
//			return 0;
//		}
//		plist1 = plist1->next;
//		plist2 = plist2->next;
//	}
//	return 1;//返回1表示是回文结构
//}
