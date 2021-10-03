#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int n=0;
struct node {
	int num;
	struct node* next;
};
struct node* createlist() {
	struct node* p1, * p2 = NULL, * head = NULL;
	char a=0;
	a = getchar();
	while(a!='\n'){
		p1 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
		n++;
		if (head == NULL) {
			head = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1;
		a=getchar();
	}
	if (head == NULL)return head;
	p2->next = NULL;
	p1 = NULL;
	return head;
}
void print(struct node* head, int n) {
	for (int i = 0;i < n;i++) {
		head = head->next;
	}
	printf("%d", head->num);
}
int main() {
	struct node* head;
	int k;
	scanf("%d", &k);
	head = createlist();
	if (k > n||head==NULL)
		printf("Not Found");
	else {
		n = n - k;
		print(head, n);
	}
	return 0;
}





//
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
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//	}
//	p2->next = NULL;
//	p1 = NULL;
//	return head;
//}
//struct node* nizhi(struct node* head) {
//	struct node* p1, * p2, * p3;
//	if (head->next == NULL) {
//		return head;
//	}
//	p1 =  head;
//	p2 = p1->next;
//	p3 = p2->next;
//	while (p3 != NULL) {
//		p2->next = p1;
//		p1 = p2;
//		p2 = p3;
//		p3 = p3->next;
//	}
//	p2->next = p1;
//	head->next = NULL;
//	return p2;
//}
//void print(struct node* head) {
//	while (head != NULL) {
//		printf("%d ", head->num);
//		head = head->next;
//	}
//} 
//
//int main() {
//	struct node* head;
//	head = createlist();
//	head=nizhi(head);
//	print(head);
//	return 0;
//}