#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;











//#define max 100
//struct Lnode {
//	int* a;
//	int size;
//	int length;
//};
//void init(struct Lnode& l) {
//	l.a = (int*)malloc(sizeof(int) * max);
//	l.size = 0;
//	l.length = max;
//}
//struct node {
//	int num;
//	struct node* next;
//};
//struct node* createlist(struct node* head) {
//	struct node* p1, * p2;
//	p1 = p2 = NULL;
//	p1 = (struct node*)malloc(sizeof(struct node));
//	while (cin>>p1->num) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct node*)malloc(sizeof(struct node));
//	}
//	p2->next = NULL;
//	return head;
//}
//struct node* deletelist(struct node* head,int*flag) {
//	struct node* p1, * p2;
//	p1 = p2 = head;
//	if (head->num % 2 == 0)
//		return head->next;
//	while (p1->next) {
//		p2 = p1;
//		p1 = p1->next;
//		if (p1->num % 2 == 0) {
//			p2->next = p1->next;
//			*flag = 0;
//			return head;
//		}
//	}
//	*flag = 1;
//	return head;
//}
//int main() {
//	int arr[15],i=0,Max=0;
//	while (cin >> arr[i]) {
//		if (Max < arr[i])
//			Max = arr[i];
//		i++;
//	}
//	for (int j = 0;j < i;j++) {
//		if (arr[j] == Max)
//			arr[j] = -100;
//	}
//	sort(arr, arr + i);
//	for (int j = i-1;j >0;j--)
//		printf("%d ", arr[j]);
//	return 0;
//}










//#define max 100
//struct node {
//	int* a;
//	int size;
//	int length;
//};
//void init(struct node& l) {
//	l.a = (int*)malloc(sizeof(int) * max);
//	l.size = 0;
//	l.length = max;
//}
//int main() {
//	struct node l;
//	init(l);
//	int y, m, d,day=0;
//	scanf("%d%d%d", &y, &m, &d);
//	for (int i = y;i < 2021;i++) {
//		if ((i % 4 == 0) && (i % 100 != 0))
//			day += 366;
//		else if (i % 400 == 0)
//			day += 366;
//		else
//			day += 365;
//	}
//	if (m > 10) {
//		if (m == 11)
//			day -= 30;
//		if (m == 12)
//			day -= 61;
//	}
//	else {
//		for (int i = m;i < 10;i++) {
//			if (i == 2)
//				day += 28;
//			else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8) {
//				day += 31;
//			}
//			else {
//				day += 30;
//			}
//		}
//	}
//	day = day + 10 - d;
//	printf("%d", day);
//	return 0;
//}










//struct node {
//	int num;
//	struct node* next;
//};
//struct node* createlist(struct node* head) {
//	struct node* p1, * p2;
//	p1 = p2 = NULL;
//	p1 = (struct node*)malloc(sizeof(struct node));
//	while (cin>>p1->num) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct node*)malloc(sizeof(struct node));
//	}
//	p2->next = NULL;
//	return head;
//}
//struct node* deletelist(struct node* head,int*flag) {
//	struct node* p1, * p2;
//	p1 = p2 = head;
//	if (head->num % 2 == 0)
//		return head->next;
//	while (p1->next) {
//		p2 = p1;
//		p1 = p1->next;
//		if (p1->num % 2 == 0) {
//			p2->next = p1->next;
//			*flag = 0;
//			return head;
//		}
//	}
//	*flag = 1;
//	return head;
//}
//void print(struct node* head) {
//	int min = 1000000;
//	struct node* p = head;
//	while (head) {
//		p = head;
//		min = 1000000;
//		while (p != NULL) {
//			if (p->num <= min)
//				min = p->num;
//			p = p->next;
//		}
//		if (min == 1000000)
//			break;
//		printf("%d ", min);
//		p = head;
//		while (p != NULL) {
//			if (p->num == min)
//				p->num = 1000000;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	struct node* head=NULL;
//	head = createlist(head);
//	int flag = 0;
//	while(flag==0)
//		head = deletelist(head,&flag);
//	print(head);
//	return 0;
//}