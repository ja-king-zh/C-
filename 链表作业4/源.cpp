#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct node {
	int num;
	struct node* next;
};
struct node* createlist() {
	struct node* p1, * p2 = NULL, * head = NULL;
	p1 = (struct node*)malloc(sizeof(struct node));
	scanf("%d ", &p1->num);
	char a = 0;
	while (a != '\n') {
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
		a = getchar();
	}
	p2->next = p1;
	p2->next->next = NULL;
	return head;
}
struct node* delete_same(struct node* head, int* flag) {
	struct node* p1, * p2,*p3;
	p1 =p3= head;
	p2 = head->next;
	*flag = 0;
	for (;p1 != NULL;p1 = p1->next) {
		for (p2=p1->next;p2 != NULL;p2 = p2->next) {
			if (p1->num == p2->num) {
				*flag = 1;
				goto waimian;
			}
		}
	}
	if (*flag == 0)
		return head;
waimian:
	if (p1 == head)
		head = head->next;
	else {
		while (p3->next != p1) {
			p3 = p3->next;
		}
		p3->next = p1->next;
	}
	return head;
}
void print(struct node* head) {
	while (head != NULL) {
		printf("%d ", head->num);
		head = head->next;
	}
}
int main() {
	struct node* head;
	head = createlist();
	int flag = 1;
	while(flag)
		head = delete_same(head,&flag);
	print(head);
	return 0;
}





//struct node {
//	int num;
//	struct node* next;
//};
//struct node* createlist() {
//	struct node* p1, * p2=NULL, * head = NULL;
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		p1 = (struct node*)malloc(sizeof(struct node));
//		scanf("%d", &p1->num);
//		if (head == NULL)
//			head = p1;
//		else
//			p2->next = p1;
//		p2 = p1;
//	}
//	p2->next = NULL;
//	return head;
//}
//struct node* find(struct node* head) {
//	if (head->next == NULL)
//		return head;
//	int max = 0;
//	struct node* p = head;
//	struct node* p1, * p2,*p3;
//	p1 = p2 = p3 = head;
//	while (p != NULL) {
//		if (p->num > max) {
//			max = p->num;
//		}
//		p = p->next;
//	}
//	while (p1->num != max) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p1 == head)
//		head = head->next;
//	else {
//		p2->next = p1->next;
//	}
//	struct node* p0 = (struct node*)malloc(sizeof(struct node));
//	p0->num = max;
//	while (p3->next != NULL) {
//		p3 = p3->next;
//	}
//	p3->next = p0;
//	p0->next = NULL;
//	return head;
//}
//void print(struct node* head) {
//	while (head != NULL) {
//		printf("%d ", head->num);
//		head = head->next;
//	}
//}
//int main() {
//	struct node* head;
//	head = createlist();
//	head = find(head);
//	print(head);
//	return 0;
//}