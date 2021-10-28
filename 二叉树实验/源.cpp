#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<assert.h>
using namespace std;
typedef char BTDate;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDate date;
}BTNode;
typedef struct QueueNode
{
	BTNode* _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue {
	QueueNode* _head;
	QueueNode* _rear;
}Queue;




void QueueInit(Queue* plist)
{
	assert(plist);
	plist->_head = NULL;
	plist->_rear = NULL;
}

void QueueDestory(Queue* plist)
{
	QueueNode* tmp;
	while (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

void QueuePop(Queue* plist)
{
	assert(plist);

	QueueNode* tmp;
	if (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}
int QueueIsEmpty(Queue* plist)
{
	return plist->_head == NULL;
}
void QueuePush(Queue* plist, BTNode* x)
{
	QueueNode* cur = (QueueNode*)malloc(sizeof(QueueNode));
	cur->_data = x;
	cur->_next = NULL;

	if (QueueIsEmpty(plist))
	{
		plist->_head = plist->_rear = cur;
		return;
	}

	plist->_rear->_next = cur;
	plist->_rear = cur;
}



BTNode* QueueTop(Queue* plist)
{
	if (QueueIsEmpty(plist))
	{
		return (BTNode*)0;
	}
	return plist->_head->_data;
}
BTNode* CreateTree() {
	BTNode* T;
	BTDate item;
	cin >> item;
	if (item == '*') {
		T = NULL;
	}
	else {
		T = (BTNode*)malloc(sizeof(BTNode));
		T->date = item;
		T->left = CreateTree();
		T->right = CreateTree();
	}
	return T;
}
void print(BTNode* root) {
	Queue qu;
	BTNode* cur;

	QueueInit(&qu);
	if (root == NULL)return;
	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		printf("%c ",cur->date);

		if (cur->left)
		{
			QueuePush(&qu, cur->left);
		}

		if (cur->right)
		{
			QueuePush(&qu, cur->right);
		}

		QueuePop(&qu);
	}
	QueueDestory(&qu);
}
int main() {
	BTNode*T=CreateTree();
	print(T);
	return 0;
}