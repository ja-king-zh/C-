#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>

//struct node {
//	int num;
//	struct node* next;
//};
//struct node* create() {
//	struct node* p1, * p2, * head = NULL;
//	int n;
//	p1 = p2 = (struct node*)malloc(sizeof(struct node));
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		p1 = (struct node*)malloc(sizeof(struct node));
//		scanf("%d", &p1->num);
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//	}
//	p2->next = NULL;
//	return head;
//}
//int find(struct node* head, int x) {
//	int count = 0;
//	while (head != NULL) {
//		if (head->num == x) {
//			count++;
//		}
//		head = head->next;
//	}
//	return count;
//}
//int main() {
//	struct node* head;
//	head=create();
//	int x;
//	scanf("%d", &x);
//	int count=find(head, x);
//	printf("%d", count);
//	return 0;
//}