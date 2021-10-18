#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//struct people {
//	int age;
//	char name[20];
//}p1,p2;
//int main() {
//	//struct people p1;
//	/*p1.age = 20;
//	strcpy(p1.name, "abd");
//	printf("%d%s", p1.age, p1.name);*/
//	/*struct people p2 = { 20,"abc" };
//	printf("%d%s", p2.age, p2.name);*/
//}



struct node {
	int num;
	struct node* next;
};
struct node* createlist(struct node* head) {
	struct node* p1, * p2;
	p1 = p2 = (struct node*)malloc(sizeof(struct node));
	head = NULL;
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &p1->num);
		if (head == NULL) {
			head = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1;
		p1= (struct node*)malloc(sizeof(struct node));
	}
	p2->next = NULL;
	return head;
}

void print(struct node* head) {
	while (head!= NULL) {
		printf("%d", head->num);
		head = head->next;
	}
}
int main() {
	struct node* head=NULL;
	head=createlist(head);
	
	print(head);
	return 0;
}