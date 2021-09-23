#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;
#define max 100;
typedef char Elemtype;
//typedef struct Sqlist {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	L.listsize = max;
//	L.elem = (char*)malloc(L.listsize * sizeof(char));
//	L.length = 0;
//}
//void createlist(Sqlist& L) {
//	scanf("%d ", &L.elem[L.length]);
//	L.length++;
//	while (1) {
//		if (L.elem[L.length-1] == '\n')
//			break;
//		scanf("%d ", &L.elem[L.length]);
//		L.length++;
//	}
//}
int main() {
	/*Sqlist L;
	Initlist(L);
	createlist(L);
	cout << L.length << endl;*/
	char a;
	int i=0;
	while (1) {
		scanf("%c", &a);
		i++;
		if (a == '\n')
			break;
	}
	printf("%d", i/2);
	return 0;
}




//typedef struct Sqlist {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	L.listsize = max;
//	L.elem = (int*)malloc(L.listsize * sizeof(int));
//	L.length = 0;
//}
//void createlist(Sqlist& L) {
//	int n;
//	scanf("%d", &n);
//	L.length = n;
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &L.elem[i]);
//	}
//}
//void jiaohuan(Sqlist& L, int left, int right) {
//	while (left < right) {
//		int tmp = L.elem[left];
//		L.elem[left] = L.elem[right];
//		L.elem[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(Sqlist& L) {
//	for (int i = 0;i < L.length;i++) {
//		printf("%d ", L.elem[i]);
//	}
//}
//int main() {
//	Sqlist L;
//	Initlist(L);
//	int n;
//	scanf("%d", &n);
//	createlist(L);
//	n = n % L.length;
//	jiaohuan(L, 0, n - 1);
//	jiaohuan(L, n, L.length - 1);
//	jiaohuan(L, 0, L.length - 1);
//	print(L);
//	return 0;
//}





//typedef struct Sqlist {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	L.listsize = max;
//	L.elem = (int*)malloc(L.listsize * sizeof(int));
//	L.length = 0;
//}
//void createlist(Sqlist& L) {
//	scanf("%d", &L.elem[L.length]);
//	while (L.elem[L.length] != -1) {
//		L.length++;
//		scanf("%d", &L.elem[L.length]);
//	}
//}
//void bijiao(Sqlist& L1, Sqlist& L2) {
//	for (int i = 0;i < L1.length;i++) {
//		for (int j = 0;j < L2.length;j++) {
//			if (L1.elem[i] == L2.elem[j]) {
//				printf("%d ", L1.elem[i]);
//				break;
//			}
//		}
//	}
//}
//int main() {
//	Sqlist L1, L2;
//	Initlist(L1);
//	Initlist(L2);
//	createlist(L1);
//	createlist(L2);
//	bijiao(L1, L2);
//	return 0;
//}





//struct node {
//	int num;
//	struct node* next;
//};
//struct node* create() {
//	struct node* p1, * p2,*head=NULL;
//	p1 = p2 = (struct node*)malloc(sizeof(struct node));
//	cin >> p1->num;
//	while (1) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct node*)malloc(sizeof(struct node));
//		cin >> p1->num;
//		if (cin.get() == '\n')
//			break;
//	}
//	p2->next = p1;
//	p2 = p1;
//	p2->next = NULL;
//	return head;
//}
//typedef struct Sqlist {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	L.listsize = max;
//	L.elem = (int*)malloc(L.listsize * sizeof(int));
//	L.length = 0;
//}
//void insertlist(Sqlist& L, struct node* head) {
//	struct node* p = head;
//	int i = 0;
//	while (p!=NULL&&p->next != NULL) {
//		L.elem[i] = p->num;
//		p = p->next->next;
//		i++;
//		L.length++;
//	}
//}
//void insertlist2(Sqlist& L, struct node* head) {
//	struct node* p = head->next;
//	int i = 0;
//	while (p != NULL) {
//		L.elem[i] = p->num;
//		i++;
//		L.length++;
//		if (p->next == NULL)
//			break;
//		p = p->next->next;
//		
//	}
//}
//void print(Sqlist& L) {
//	for (int i = 0;i < L.length;i++) {
//		printf("%d ", L.elem[i]);
//	}
//	printf("\n");
//}
//int main() {
//	struct node* head;
//	head = create();
//	Sqlist L1, L2;
//	Initlist(L1);
//	Initlist(L2);
//	insertlist(L1,head);
//	insertlist2(L2, head);
//	print(L1);
//	print(L2);
//	return 0;
//}