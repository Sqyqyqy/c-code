typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	node->data = x;
	node->left = node->right = NULL;
	return node;
}

//前序遍历
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//二叉树结点个数
int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

//叶子结点个数
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else if (root->left == NULL && root->right == NULL)
		return 1;
	else
		return TreeLeafSize(root->right) + TreeLeafSize(root->left);
}

//树的高度/深度
int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	
	int left = TreeHeight(root->left);
	int right = TreeHeight(root->right);
    return left >= right ? left + 1 : right + 1;
}
//
//int TreeHeight(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	else if (root->left == NULL && root->right == NULL)
//		return 1;
//	else
//	{
//		int left = TreeHeight(root->left);
//		int right = TreeHeight(root->right);
//		return left >= right ? left + 1 : right + 1;
//	}
//}

//第k层的节点个数
int TreeKLevelSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	
	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
}

int main()
{
	BTNode* n1 = BuyBTNode(1);
	BTNode* n2 = BuyBTNode(2);
	BTNode* n3 = BuyBTNode(3);
	BTNode* n4 = BuyBTNode(4);
	BTNode* n5 = BuyBTNode(5);
	BTNode* n6 = BuyBTNode(6);
	BTNode* n7 = BuyBTNode(7);

	n1->left = n2;
	n2->left = n3;
	n1->right = n4;
	n4->left = n5;
	n4->right = n6;
	n6->right = n7;

	PrevOrder(n1);
	printf("\n");
	InOrder(n1);
	printf("\n");
	PostOrder(n1);
	printf("\n");

	printf("TreeSize:%d\n", TreeSize(n1));
	printf("TreeLeafSize:%d\n", TreeLeafSize(n1));
	printf("TreeHeight:%d\n", TreeHeight(n1));
	printf("TreeKLevelSize:%d\n", TreeKLevelSize(n1,4));

	return 0;
}
