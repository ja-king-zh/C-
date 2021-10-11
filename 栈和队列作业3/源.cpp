#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define max 1000000
typedef int Elemtype;
typedef struct {
	Elemtype* base;
	int front;
	int rear;
}SQ;
void initqueue(SQ& q) {
	q.base = (Elemtype*)malloc(max * sizeof(Elemtype));
	q.front = q.rear = 0;
}
void Enqueue(SQ& q, int e) {
	q.base[q.rear] = e;
	q.rear += 1;
}
void print(SQ& q) {
	if (q.front >= q.rear)
		printf("NULL");
	for (int i = q.front;i < q.rear;i++) {
		if (q.base[q.front] >= '0' && q.base[q.front] <= '9')
			printf("%d ", q.base[i]-'0');
		else
			printf("%c ", q.base[i]);
	}
}
int main() {
	SQ q;
	initqueue(q);
	char e;
	cin >> e;
	while (cin.get() != '\n') {
		Enqueue(q, e);
		cin >> e;
	}
	Enqueue(q, (int)e);
	print(q);
	return 0;
}



//typedef struct {
//	Elemtype* base;
//	int front;
//	int rear;
//}SQ;
//void initqueue(SQ& q) {
//	q.base = (Elemtype*)malloc(max * sizeof(Elemtype));
//	q.front = q.rear = 50;
//}
//void Enqueue(SQ& q, int e) {
//	q.base[q.rear] = e;
//	q.rear += 1;
//}
//void FEnqueue(SQ& q, int e) {
//	q.front--;
//	q.base[q.front] = e;
//}
//void Dequeue(SQ& q, int e) {
//	q.front += 1;
//}
//void print(SQ& q) {
//	if (q.front >= q.rear)
//		printf("NULL");
//	for (int i = q.front;i < q.rear;i++) {
//		printf("%d ", q.base[i]);
//	}
//}
//int main() {
//	SQ q;
//	initqueue(q);
//	int e,n;
//	scanf("%d", &n);
//	scanf("%d", &e);
//	Enqueue(q, e);
//	for (int i = 1;i < n;i++) {
//		scanf("%d", &e);
//		if (e < (q.base[q.front] + q.base[q.rear - 1]) / 2)
//			FEnqueue(q, e);
//		else
//			Enqueue(q, e);
//	}
//	print(q);
//	return 0;
//}










//typedef struct {
//	Elemtype* base;
//	int front;
//	int rear;
//}SQ;
//void initqueue(SQ &q) {
//	q.base = (Elemtype*)malloc(max * sizeof(Elemtype));
//	q.front = q.rear = 0;
//}
//void Enqueue(SQ &q, int e) {
//	q.base[q.rear] = e;
//	q.rear += 1;
//}
//void Dequeue(SQ &q, int e) {
//	q.front += 1;
//}
//void print(SQ &q) {
//	if (q.front >= q.rear)
//		printf("NULL");
//	for (int i = q.front;i < q.rear;i++) {
//		printf("%d ", q.base[i]);
//	}
//}
//int main() {
//	SQ q;
//	initqueue(q);
//	int e;
//	scanf("%d", &e);
//	while (e != -2) {
//		if (e == -1)
//			Dequeue(q, e);
//		else
//			Enqueue(q, e);
//		scanf("%d", &e);
//	}
//	print(q);
//	return 0;
//}