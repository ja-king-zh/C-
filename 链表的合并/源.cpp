#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stdlib.h>
struct node {
	int num;
	struct node* next;
};
struct node* createlist() {
	struct node* head=NULL, * p1, * p2=NULL;
	int n;
	scanf("%d", &n);
	if (n == 0)return head;
	for (int i = 0;i < n;i++) {
		p1 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
	}
	p2->next = NULL;
	return head;
}
struct node* combine(struct node* h1, struct node* h2) {
	struct node* head = NULL, * p1=NULL, * p2=NULL;
	if (h1 == NULL)
		return h2;
	if (h2 == NULL)
		return h1;
	while (h1 != NULL && h2 != NULL) {
		if (h1->num > h2->num) {
			p1 = h1;
			h1 = h1->next;
		}
		else {
			p1 = h2;
			h2 = h2->next;
		}			
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
	}
	if (h1 == NULL)
		p2->next = h2;
	else
		p2->next = h1;
	return head;
}
struct node* nizhi(struct node* head) {
	struct node* p1, * p2, * p3;
	if (head == NULL)return head;
	if (head->next == NULL)return head;
	p1 = head;
	p2 = head->next;
	p3 = head->next->next;
	while (p3 != NULL) {
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
	}
	p2->next = p1;
	head->next = NULL;
	return p2;
}
void print(struct node* head) {
	printf("The current List is:\n");
	if (head == NULL)return;
	while (head->next != NULL) {
		printf("%d,", head->num);
		head = head->next;
	}
	printf("%d", head->num);
}
int main() {
	struct node* head, * head1, * head2;
	head1 = createlist();
	head2 = createlist();
	head = combine(head1, head2);
	head=nizhi(head);
	print(head);
	return 0;
}