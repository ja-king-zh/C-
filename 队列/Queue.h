#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int Elemtype;
typedef struct QueueNode {
	QueueNode* next;
	Elemtype data;
}QueueNode;
typedef struct Queue {
	QueueNode* head;
	QueueNode* tail;
}Queue;

void QueueInit(Queue* ps);
void QueueDestroy(Queue* ps);
void QueuePush(Queue* ps,Elemtype x);
void QueuePop(Queue* ps);
Elemtype QueueFront(Queue* ps);
Elemtype QueueBack(Queue* ps);
int QueueSize(Queue* ps);
bool QueueEmpty(Queue* ps);