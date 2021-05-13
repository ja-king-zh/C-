#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
//struct note {
//	int num;
//	struct note* next;
//};
//struct note* create() {
//	int n;
//	struct note* head=NULL, * p1, * p2=NULL;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		p1 = (struct note*)malloc(sizeof(struct note));
//		p1->num = i + 1;
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//	}
//	p2->next = head;
//	return head;
//}
//struct note* Delete(struct note*head,int m) {
//	struct note* p1, * p2;
//	int i = 1;
//	p1 = p2 = head;
//	while (p1->next != p1) {
//		if (i != m) {
//			i++;
//			p2 = p1;
//			p1 = p1->next;
//		}
//		else {
//			printf("%d ", p1->num);
//			p2->next = p1->next;
//			p1 = p1->next;
//			i = 1;
//		}
//	}
//	return p1;
//}
//int main() {
//	struct note* head;
//	int m;
//	head = create();
//	scanf("%d", &m);
//	head = Delete(head,m);
//	printf("\nlast one is: %d", head->num);
//	return 0;
//}
//struct note {
//	int num;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head = NULL, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d", &p1->num);
//	while (p1->num != -1) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//			p2 = p1;
//		}
//		p1  = (struct note*)malloc(sizeof(struct note));
//		scanf("%d", &p1->num);
//	}
//	p2->next = NULL;
//	free(p1);
//	return head;
//}
//struct note* Delete(struct note* head, struct note* p) {
//	struct note* p1, * p2;
//	p1 = p2 = head;
//	while (p1 != NULL && p1->num != p->num) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p1 != NULL) {
//		if (p1 == head) {
//			head = p1->next;
//		}
//		else {
//			p2->next = p1->next;
//		}
//	}
//	return head;
//}
//int main() {
//	struct note* head,*p,*p1;
//	head = create();
//	p= (struct note*)malloc(sizeof(struct note));
//	p->num = 0;
//	p1 = head;
//	while (p1 != NULL) {
//		if (p1->num > p->num) {
//			p->num = p1->num;
//		}
//		p1 = p1->next;
//	}
//	head = Delete(head, p);
//	p->next = head;
//	while (p != NULL) {
//		printf("%d ", p->num);
//		p = p->next;
//	}
//	return 0;
//}
//struct note {
//	char name[3];
//	int age;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head = NULL, * p1=NULL, * p2=NULL;
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		p1 = (struct note*)malloc(sizeof(struct note));
//		scanf("%s %d", &p1->name, &p1->age);
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
//struct note* Delete(struct note* head, int num, int flag) {
//	struct note* p1, * p2;
//	int i = 0;
//	while (flag == 0 && head != NULL) {
//		p1 = p2 = head;
//		while (p1 != NULL && p1->age != num) {
//			p2 = p1;
//			p1 = p1->next;
//		}
//		if (p1 == NULL) {
//			flag = 1;
//			if (i == 0) {
//				printf("no data");
//				return p1;
//			}
//		}
//		else {
//			if (p1 == head) {
//				head = p1->next;
//			}
//			else {
//				p2->next = p1->next;
//			}
//			i++;
//		}
//	}
//	return head;
//}
//int main() {
//	struct note* head;
//	head = create();
//	int flag = 0, num;
//	scanf("%d", &num);
//	head=Delete(head, num, flag);
//	while (head != NULL) {
//		printf("%s %d\n", head->name, head->age);
//		head = head->next;
//	}
//	return 0;
//}
//struct note
//{
//	int no;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head=NULL, *p1, *p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d ", &p1->no);
//	while (p1->no!=0) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//			p2 = p1;
//		}
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%d ", &p1->no);
//	}
//	free(p1);
//	p2->next = NULL;
//	return head;
//}
//struct note* insert(struct note* head, struct note* p0) {
//	struct note* p1, * p2;
//	if (p0 == NULL) {
//		return head;
//	}
//	if (head == NULL) {
//		head = p0;
//		p0->next = NULL;
//	}
//	p1 =p2= head;
//	while (p0->no > p1->no&&p1->next!=NULL) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p0->no <= p1->no) {
//		if (p1 == head) {
//			head = p0;
//			p0->next = p1;
//		}
//		else {
//			p2->next = p0;
//			p0->next = p1;
//		}
//	}
//	else{
//		p1->next = p0;
//		p0->next = NULL;
//	}
//	return head;
//}
//int main()
//{
//	struct note* head,*p,*p1,*p2;
//	int max = 0, min = 1000;
//	head = create();
//	p= (struct note*)malloc(sizeof(struct note));
//	scanf("%d", &p->no);
//	head = insert(head, p);
//	p1 = p2 = head;
//	while (p1 != NULL) {
//		if (p1->no > max) {
//			max = p1->no;
//		}
//		if (p1->no < min) {
//			min = p1->no;
//		}
//		p1 = p1->next;
//	}
//	printf("%d %d ", max, min);
//	while (p2 != NULL) {
//		printf("%d ", p2->no);
//		p2 = p2->next;
//	}
//	return 0;
//}