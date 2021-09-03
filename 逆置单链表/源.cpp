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
		p1= (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
	}
	p2->next = NULL;
	free(p1);
	return head;
}
struct node* nizhi(struct node* head) {
	struct node* p1, * p2, * p3;
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
	while (head != NULL) {
		printf("%d ", head->num);
		head = head->next;
	}
}
int main() {
	struct node* head;
	head = create();
	head=nizhi(head);
	print(head);
	return 0;
}