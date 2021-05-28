#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<string>
#include<iostream>
using namespace std;

//struct note {
//	int num;
//	struct note* next;
//};
//int main() {
//	int n;
//	struct note* head=NULL, * p1, * p2=NULL,*p;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		p1 = (struct note*)malloc(sizeof(struct note));
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
//	p= (struct note*)malloc(sizeof(struct note));
//	scanf("%d", &p->num);
//	p1 = p2 = head;
//	while (p1!=NULL&&p->num > p1->num) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p1 != NULL) {
//		p2->next = p;
//		p->next = p1;
//	}
//	else {
//		p2->next = p;
//		p->next = NULL;
//	}
//	while (head != NULL) {
//		printf("%d ", head->num);
//		head = head->next;
//	}
//	return 0;
//}
//struct note {
//	int no;
//	int cj;
//	struct note* next;
//};
//struct note* create(int &i) {
//	struct note* head = NULL, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d %d", &p1->no, &p1->cj);
//	while (p1->cj > 0) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%d %d", &p1->no, &p1->cj);
//		i++;
//	}
//	p2->next = NULL;
//	free(p1);
//	return head;
//}
//struct note*deletezj(struct note*head,int n) {
//	struct note* p1, * p2;
//	p1 = p2 = head;
//	if (n == 1) {
//		head = head->next;
//		return head;
//	}
//	else {
//		for (int i = 0;i < n - 1;i++) {
//			p2 = p1;
//			p1 = p1->next;
//		}
//	}
//	p2->next = p1->next;
//	return head;
//}
//struct note* deleteend(struct note* head) {
//	struct note* p1, * p2;
//	p1 = p2 = head;
//	while (p1->next != NULL) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	p2->next = NULL;
//	return head;
//}
//int main() {
//	struct note* head;
//	int n=0;
//	head = create(n);
//	n = n / 2;
//	head=deletezj(head,n);
//	head=deleteend(head);
//	while (head != NULL) {
//		printf("%d %d\n", head->no, head->cj);
//		head = head->next;
//	}
//	return 0;
//}
//class person {
//public:
//	char name[20];
//	int no;
//};
//class student :public person {
//public:
//	int bh;
//	int score;
//	student(char* xname, int n, int b, int s) {
//		strcpy(name, xname);
//		no = n;
//		bh = b;
//		score = s;
//	}
//	void print() {
//		printf("%d %s %d\n", no, name, bh);
//	}
//};
//class teacher :public person {
//public:
//	char zhicheng[20];
//	char bumeng[20];
//	teacher(char* xname, int n, char* b, char* s) {
//		strcpy(name, xname);
//		no = n;
//		strcpy(zhicheng,b);
//		strcpy(bumeng, s);
//	}
//	void print() {
//		printf("%d %s %s", no, name, bumeng);
//	}
//};
//int main() {
//	int a, c, d, e,h,i;
//	char b[20], f[20], g[20],j[20];
//	scanf("%d", &a);
//	if (a == 1) {
//		scanf("%d %s %d %d",&e, b, &c, &d);
//		student s(b, e, c, d);
//		scanf("%d %d %s %s %s",&h, &i, f, g, j);
//		teacher t(f, i, g, j);
//		s.print();
//		t.print();
//	}
//	else {
//		scanf("%d %s %s %s", &i, f, g, j);
//		teacher t(f, i, g, j);
//		scanf("%d %d %s %d %d",&h, &e, b, &c, &d);
//		student s(b, e, c, d);
//		s.print();
//		t.print();
//	}
//}
//class Document {
//public:
//	char name[100];
//	Document() {}
//	Document(char* xname) {
//		strcpy(name, xname);
//	}
//	void PrintData() {
//		printf("Name of document: %s\n", name);
//	}
//};
//class Book :public Document {
//public:
//	int pageCount;
//	Book(char *xname,int pc) {
//		strcpy(name, xname);
//		pageCount = pc;
//	}
//	void PrintData() {
//		printf("book: %s %d", name, pageCount);
//	}
//};
//int main() {
//	int n;
//	char a[100], b[100];
//	scanf("%s %s %d", a, b, &n);
//	Document p(a);
//	p.PrintData();
//	Book s(b, n);
//	s.PrintData();
//	return 0;
//}