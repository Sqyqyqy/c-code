//复制带随机指针的链表
//struct Node 
//{
//	int val;
//	struct Node *next;
//	struct Node *random;
//};

//a思路1
//struct Node* copyRandomList(struct Node* head)
//{
//	if (head == NULL)
//		return NULL;
//	struct Node* cur = head, *copy, *next;
//	while (cur)
//	{
//		copy = (struct Node*)malloc(sizeof(struct Node));
//		next = cur->next;
//
//		copy->val = cur->val;
//		cur->next = copy;
//		copy->next = next;
//
//		cur = next;
//	}
//	//置random
//	cur = head;
//	while (cur)
//	{
//		copy = cur->next;
//
//		if (cur->random == NULL)
//		{
//			copy->random = NULL;
//		}
//		else
//		{
//			copy->random = cur->random->next;
//		}
//
//		cur = copy->next;
//	}
//	//移除拷贝结点
//	cur = head;
//	struct Node* copyhead = NULL, *copytail = NULL;
//	while (cur)
//	{
//		copy = cur->next;
//		next = copy->next;
//
//		if (copytail == NULL)
//		{
//			copyhead = copytail = copy;
//		}
//		else
//		{
//			copytail->next = copy;
//			copytail = copytail->next;
//		}
//		cur->next = next;
//
//		cur = next;
//	}
//	return copyhead;
//}

//w思路2
//struct Node* copyRandomList(struct Node* head) {
//	//边缘未 0 err 1 ok
//	if (head == NULL)
//		return NULL;
//	int count = 0;
//	struct Node* cur = head;
//	while (cur)//统计结点个数
//	{
//		cur = cur->next;
//		count++;
//	}
//	int* true_val = (int*)malloc(sizeof(int)*(count + 1));
//	cur = head;
//	int i = 1;
//	while (cur)//记录真实值 将val置为1 2 3 4 5
//	{
//		true_val[i] = cur->val;
//		cur->val = i;
//		i++;
//		cur = cur->next;
//	}
//
//	int* random_val = (int*)malloc(sizeof(int)*(count + 1));
//	cur = head;
//	i = 1;
//	while (cur)//记录random的val
//	{
//		if (cur->random)
//			random_val[i] = cur->random->val;
//		else
//			random_val[i] = 100000;//random为空的情况
//		i++;
//		cur = cur->next;
//	}
//
//	struct Node** add = (struct Node**)malloc(sizeof(struct Node*)*(count + 1));//不熟
//	i = 1;
//	int a = count;
//	while (a--)//赋真实值
//	{
//		struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//		p->val = true_val[i];
//		add[i] = p;
//		i++;
//	}
//
//	for (i = 1; i <= count; i++)
//	{
//		if (i != count)
//			add[i]->next = add[i + 1];
//		else
//			add[i]->next = NULL;
//
//		if (random_val[i] != 100000)
//			add[i]->random = add[random_val[i]];
//		else
//			add[i]->random = NULL;
//	}
//
//	return add[1];
//}


