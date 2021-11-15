#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;
typedef char BTData;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* lchild;
	struct BinaryTreeNode* rchild;
	BTData data;
}BTNode;
//先序创建二叉树
BTNode* PrevCreateTree() {
	char a;
	BTNode* cur = new BTNode;
	cin >> a;
	if (a == '*')return NULL;
	else {
		cur->data = a;
		cur->lchild=PrevCreateTree();
		cur->rchild = PrevCreateTree();
	}
	return cur;
}
//先序遍历
void PrevOrder(BTNode* t) {
	if (t == NULL)return;
	cout << t->data << ' ';
	PrevOrder(t->lchild);
	PrevOrder(t->rchild);
}
//中序遍历
void InOrder(BTNode*t) {
	if (t == NULL)return;
	InOrder(t->lchild);
	cout << t->data << ' ';
	InOrder(t->rchild);
}
//后序遍历
void PostOrder(BTNode* t) {
	if (t == NULL)return;
	PostOrder(t->lchild);
	PostOrder(t->rchild);
	cout << t->data << ' ';
}
//计算二叉树节点个数
int TreeSize(BTNode* t) {
	if (t==NULL)return 0;
	return TreeSize(t->lchild) + TreeSize(t->rchild) + 1;
}
//计算深度
int Depth(BTNode* t) {
	if (t == NULL)return 0;
	int l = Depth(t->lchild);
	int r = Depth(t->rchild);
	return l > r ? l + 1 : r + 1;
}
//计算叶子节点个数
int TreeLeafSize(BTNode* t) {
	if (t == NULL)return 0;
	if (t->lchild == NULL && t->rchild == NULL)return 1;
	return TreeLeafSize(t->lchild) + TreeLeafSize(t->rchild);
}
//二叉树k层节点个数
int TreeKtravelSize(BTNode* t,int k) {
	if (t == NULL)return 0;
	if (k == 1)return 1;
	return TreeKtravelSize(t->lchild, k - 1) + TreeKtravelSize(t->rchild, k - 1);
}
//二叉树查找值为x的节点
BTNode* Treefind(BTNode* t, BTData x) {
	if (t == NULL)return NULL;
	if (t->data == x) return t;
	BTNode* l = Treefind(t->lchild, x);
	if (l != NULL)return l;
	BTNode* r = Treefind(t->rchild, x);
	if (r != NULL)return r;
	return NULL;
}
//层次遍历
void FloorTravelTree(BTNode* t) {
	queue<BTNode*>q;
	if (t != NULL)q.push(t);
	while (!q.empty()) {
		BTNode* cur = q.front();
		cout << cur->data << ' ';
		q.pop();
		if (cur->lchild != NULL)q.push(cur->lchild);
		if (cur->rchild != NULL)q.push(cur->rchild);
	}
}
int main() {
	BTNode* t;
	t = PrevCreateTree();
	PrevOrder(t);
	cout << endl;
	InOrder(t);
	cout << endl;
	cout << TreeSize(t) << endl;
	cout << Depth(t) << endl;
	cout << TreeLeafSize(t) << endl;
	cout << TreeKtravelSize(t, 2) << endl;
	FloorTravelTree(t);
}