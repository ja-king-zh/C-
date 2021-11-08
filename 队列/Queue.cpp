#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void QueueInit(Queue* ps) {
	ps->head = NULL;
	ps->tail = NULL;
}
void QueueDestroy(Queue* ps) {
	assert(ps);
	QueueNode* cur = ps->head;
	while (cur!= NULL) {
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
void QueuePush(Queue* ps, Elemtype x) {
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	if (ps->head == NULL) {
		ps->head = ps->tail = newnode;
	}
	else {
		ps->tail->next = newnode;
		ps->tail = newnode;
	}
}
void QueuePop(Queue* ps) {
	assert(ps);
	assert(!QueueEmpty(ps));
	QueueNode* next = ps->head->next;
	free(ps->head);
	ps->head = next;
	if (ps->head == NULL) {
		ps->tail = NULL;
	}
}
Elemtype QueueFront(Queue* ps) {
	assert(ps);
	assert(!QueueEmpty(ps));
	return ps->head->data;
}
Elemtype QueueBack(Queue* ps) {
	assert(ps);
	assert(!QueueEmpty(ps));
	return ps->tail->data;
}
int QueueSize(Queue* ps) {
	assert(ps);
	QueueNode* cur = ps->head;
	int size = 0;
	while (cur != NULL) {
		cur++;
		++size;
	}
	return size;
}
bool QueueEmpty(Queue* ps) {
	assert(ps);
	return ps == NULL;
}