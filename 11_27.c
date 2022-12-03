//相交链表
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点
//如果两个链表不存在相交节点，返回 null
//注意，函数返回结果后，链表必须 保持其原始结构
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
//{
//	//空链表
//	if (headA == NULL || headB == NULL)
//		return NULL;
//	struct ListNode* pa = headA;
//	struct ListNode* pb = headB;
//	//不考虑边缘
//	while (pa && pb)
//	{
//		if (pa == pb)//长度相等找到相交结点
//			return pa;
//		pa = pa->next;
//		pb = pb->next;
//	}
//	if (pa == NULL && pb == NULL)//长度相等找不到相交界点
//		return NULL;
//	struct ListNode* p = (pa == NULL) ? (pb) : (pa);//长度不相等
//	while (p)
//	{
//		p = p->next;
//		if (pb == NULL)
//			headA = headA->next;
//		else
//			headB = headB->next;
//	}
//	while (headA && headB)
//	{
//		if (headA == headB)
//			return headA;
//		headA = headA->next;
//		headB = headB->next;
//	}
//	return NULL;
//}


//环形链表
//判断链表中是否有环
//w
//bool hasCycle(struct ListNode *head) {
//	if (head == NULL)
//		return false;
//	//边缘未
//	struct ListNode* next = head;
//	next->val = 1000000;
//	while (next)
//	{
//		if (next->next != NULL && next->next->val == 1000000)
//			return true;
//		next->val = 1000000;
//		next = next->next;
//	}
//	return false;
//}
////a
//bool hasCycle(struct ListNode *head)
//{
//	if (head == NULL)
//		return false;
//	struct ListNode* slow = head, *fast = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//			return true;
//	}
//	// if(fast == NULL || fast->next == NULL)
//	return false;
//}


//环形链表II
//a思路1
//struct ListNode *detectCycle(struct ListNode *head)
//{
//	struct ListNode* slow = head, *fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//
//		if (slow == fast)
//		{
//			while (head != slow)
//			{
//				head = head->next;
//				slow = slow->next;
//			}
//
//			return head;
//		}
//	}
//	return NULL;
//}
//a思路2
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
//{
//	//空链表
//	if (headA == NULL || headB == NULL)
//		return NULL;
//	struct ListNode* pa = headA;
//	struct ListNode* pb = headB;
//	//不考虑边缘
//	while (pa && pb)
//	{
//		if (pa == pb)//长度相等找到相交结点
//			return pa;
//		pa = pa->next;
//		pb = pb->next;
//	}
//	if (pa == NULL && pb == NULL)//长度相等找不到相交界点
//		return NULL;
//	struct ListNode* p = (pa == NULL) ? (pb) : (pa);//长度不相等
//	while (p)
//	{
//		p = p->next;
//		if (pb == NULL)
//			headA = headA->next;
//		else
//			headB = headB->next;
//	}
//	while (headA && headB)
//	{
//		if (headA == headB)
//			return headA;
//		headA = headA->next;
//		headB = headB->next;
//	}
//	return NULL;
//}
//struct ListNode *detectCycle(struct ListNode *head)
//{
//	struct ListNode* slow = head, *fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//
//		if (slow == fast)
//		{
//			struct ListNode* newhead = slow->next;
//			slow->next = NULL;
//			return getIntersectionNode(newhead, head);
//		}
//	}
//	return NULL;
//}
