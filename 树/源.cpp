#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef char BTDate;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDate date;
}BTNode;

BTNode* BuyNode(BTDate x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->date = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* Createtree()
{
	BTNode* nodeA = BuyNode('A');
	BTNode* nodeB = BuyNode('B');
	BTNode* nodeC = BuyNode('C');
	BTNode* nodeD = BuyNode('D');
	BTNode* nodeE = BuyNode('E');
	BTNode* nodeF = BuyNode('F');
	BTNode* nodeG = BuyNode('G');


	nodeA->left = nodeB;
	nodeA->right = nodeC;
	nodeB->left = nodeD;
	nodeC->left = nodeE;
	nodeC->right = nodeF;
	nodeF->right = nodeG;

	return nodeA;
}

//前序遍历
void PrevOrder(BTNode* t) {
	if (t == NULL)return;
	printf("%c ", t->date);
	PrevOrder(t->left);
	PrevOrder(t->right);
}
//中序遍历
void InOrder(BTNode* t) {
	if (t == NULL)return;
	InOrder(t->left);
	printf("%c ", t->date);
	InOrder(t->right);
}
//后序遍历
void PostOrder(BTNode* t) {
	if (t == NULL)return;
	PostOrder(t->left);
	PostOrder(t->right);
	printf("%c ", t->date);
}
//二叉树节点个数
int TreeSize(BTNode* t) {
	if (t == NULL)return 0;
	return TreeSize(t->left) + TreeSize(t->right) + 1;
}
//二叉树叶子节点个数
int TreeLeafSize(BTNode* t) {
	if (t == NULL)return 0;
	if (t->left == NULL && t->right == NULL) {
		return 1;
	}
	return TreeLeafSize(t->left) + TreeLeafSize(t->right);
}
//二叉树k层节点个数
int TreeKtravelSize(BTNode* t,int k) {
	if (t == NULL)return 0;
	if (k == 1)return 1;
	return TreeKtravelSize(t->left, k - 1) + TreeKtravelSize(t->right, k - 1);
}
//二叉树深度
int TreeDepth(BTNode* t) {
	if (t == NULL)return 0;
	int leftdepth = TreeDepth(t->left);
	int rightdepth = TreeDepth(t->right);
	return leftdepth > rightdepth ? leftdepth +1: rightdepth+1;
}
//二叉树查找值为x的节点
BTNode* Treefind(BTNode* t,BTDate x) {
	if (t == NULL)return NULL;
	if (t->date == x) return t;
	BTNode* l = Treefind(t->left, x);
	if (l != NULL)return l;
	BTNode* r = Treefind(t->right, x);
	if (r != NULL)return r;
	return NULL;
}
int main() {
	BTNode* t;
	t=Createtree();
	PrevOrder(t);
	printf("\n%d\n",TreeSize(t));
	printf("%d\n", TreeLeafSize(t));
	printf("%d\n", TreeKtravelSize(t,3));
	printf("%d\n", TreeDepth(t));

	return 0;
}