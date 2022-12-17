//单值二叉树
//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树
struct TreeNode 
{
    int val;
	struct TreeNode *left;
    struct TreeNode *right;
};

bool isUnivalTree(struct TreeNode* root) {
	//空未 已
	if (root == NULL)
		return true;
	if (root->right == NULL && root->left == NULL)
		return true;

	if (root->right != NULL && root->left != NULL)
	{
		return root->val == root->right->val && root->val == root->left->val && isUnivalTree(root->right) && isUnivalTree(root->left);
	}
	else if (root->right == NULL)
	{
		return root->val == root->left->val && isUnivalTree(root->left);
	}
	else
		return root->val == root->right->val && isUnivalTree(root->right);
}
//a
bool isUnivalTree(struct TreeNode* root)
{
	if (root == NULL)
		return true;

	if (root->left && root->left->val != root->val)
		return false;
	if (root->left && root->left->val != root->val)
		return false;
	return isUnivalTree(root->left) && isUnivalTree(root->right);
}


//二叉树查找值为x的结点
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	//空为 已
	if (root == NULL)
		return NULL;

	if (root->data == x)
		return root;

	BTNode* tmp;
	if(tmp = TreeFind(root->left,x))
		return tmp;
	if (tmp = TreeFind(root->right, x))
		return tmp;
	return NULL;
}


//检查两颗树是否相同
//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	//空未 已
	if (p == NULL && q == NULL)
		return true;
	else if ((p == NULL && q != NULL) || (p != NULL && q == NULL))
		return false;

	if ((p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
		return true;
	else
		return false;
}


//另一棵树的子树
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
	if (root == NULL)
		return false;
	if (isSameTree(root, subRoot))
		return true;
	return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
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

	BTNode* ret = TreeFind(n1, 3);
	printf("%d\n", ret->data);
	return 0;
}
