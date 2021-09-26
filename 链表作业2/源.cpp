#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node* next;
};
struct node* create() {
	struct node* p1, * p2, * head = NULL;
	p1 = p2 = (struct node*)malloc(sizeof(struct node));
	scanf("%d", &p1->num);
	while (p1->num != -1) {
		if (head == NULL) {
			head = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
	}
	p2->next = NULL;
	return head;
}
struct node* find(struct node* l1, struct node* l2) {
	struct node* head=NULL,*p1,*p2,*p0;
	p0 = l2;
	p2 = (struct node*)malloc(sizeof(struct node));
	while (l1 != NULL) {
		l2 = p0;
		while (l2 != NULL) {
			if (l1->num == l2->num) {
				p1 = (struct node*)malloc(sizeof(struct node));
				p1->num = l1->num;
				if (head == NULL) {
					head = p1;
				}
				else {
					p2->next = p1;
				}
				p2 = p1;
			}
			l2 = l2->next;
		}
		l1 = l1->next;
	}
	p2->next = NULL;
	return head;
}
void print(struct node* head) {
	while (head != NULL) {
		printf("%d ", head->num);
		head = head->next;
	}
}
int main() {
	struct node* l1, * l2, * head;;
	l1 = create();
	l2 = create();
	head=find(l1, l2);
	print(head);
}


//struct node {
//	int num;
//	struct node* next;
//};
//struct node* create() {
//	struct node* p1, * p2, * head=NULL;
//	p1 = p2 = (struct node*)malloc(sizeof(struct node));
//	scanf("%d", &p1->num);
//	while (p1->num != -1) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct node*)malloc(sizeof(struct node));
//		scanf("%d", &p1->num);
//	}
//	p2->next = NULL;
//	return head;
//}
//struct node* insert(struct node* head, int n) {
//	struct node* p,*p0;
//	p0 = head;
//	p = (struct node*)malloc(sizeof(struct node));
//	p->num = n;
//	if (head == NULL) {
//		p->next = NULL;
//		return p;
//	}
//	if (n < head->num) {
//		p->next = head;
//		p0 = p;
//		return p0;
//	}
//	else {
//		while (head->next != NULL) {
//			if (head->num<n && head->next->num>n) {
//				p->next = head->next;
//				head->next = p;
//				return p0;
//			}
//			head = head->next;
//		}
//		head->next = p;
//		p->next = NULL;
//		return p0;
//	}
//}
//void print(struct node* head) {
//	while (head != NULL) {
//		printf("%d ", head->num);
//		head = head->next;
//	}
//}
//int main() {
//	struct node* head;
//	head = create();
//	int n;
//	scanf("%d", &n);
//	head=insert(head, n);
//	print(head);
//	return 0;
//}