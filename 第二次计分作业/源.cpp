#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
#include<queue>
#include<stdio.h>
using namespace std;
typedef int BTData;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* l;
	struct BinaryTreeNode* r;
	BTData data;
}BTNode;
BTNode* PrevCreate() {
	int a;
	BTNode* cur = new BTNode;
	cin >> a;
	if (a == 0)return NULL;
	cur->data = a;
	cur->l = PrevCreate();
	cur->r = PrevCreate();
	return cur;
}
int Floortravel(BTNode* t) {
	queue<BTNode*>q;
	if (t)q.push(t);
	int d1 = 0, d2 = 0;
	while (!q.empty()) {
		BTNode* cur = q.front();
		q.pop();
		if (cur->l && cur->r)d2++;
		if (cur->l && !cur->r)d1++;
		if (!cur->l && cur->r)d1++;
		if (cur->l)q.push(cur->l);
		if (cur->r)q.push(cur->r);
	}
	return d2 - d1;
}

int main() {
	BTNode* t;
	t=PrevCreate();
	printf("%d", Floortravel(t));
}





//typedef char BTData;
//typedef struct BinaryTreeNode {
//	struct BinaryTreeNode* l;
//	struct BinaryTreeNode* r;
//	BTData data;
//}BTNode;
//BTNode* PrevCreate() {
//	char a;
//	BTNode* cur = new BTNode;
//	cin >> a;
//	if (a == '#')return NULL;
//	cur->data = a;
//	cur->l = PrevCreate();
//	cur->r = PrevCreate();
//	return cur;
//}
//int Depth(BTNode* t) {
//	if (t == NULL)return 0;
//	int l = Depth(t->l);
//	int r = Depth(t->r);
//	return l > r ? l + 1 : r + 1;
//}
//int TreeSize(BTNode* t) {
//	if (t == NULL)return 0;
//	return TreeSize(t->l) + TreeSize(t->r) + 1;
//}
//int main() {
//	BTNode* t;
//	t=PrevCreate();
//	if (pow(2, Depth(t)) - 1 == TreeSize(t)) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//	return 0;
//}