#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
typedef int ElemType;

typedef struct LNode
{
	ElemType elem;
	struct LNode* next;
}LNode, * LinkList;

void CreateList(LinkList& L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	LinkList s, r;
	r = L;
	ElemType x;
	s = (LinkList)malloc(sizeof(LNode));
	if (!s)exit(0);
	scanf("%d", &s->elem);
	while (s->elem != -1)
	{
		r->next = s;
		r = s;
		s = (LinkList)malloc(sizeof(LNode));
		if (!s)exit(0);
		scanf("%d", &s->elem);
	}
	r->next = NULL;
}

void Print(LinkList& L)
{
	while (L != NULL) {
		printf("%d ", L->elem);
		L = L->next;
	}
	/*LinkList r;
	for (r = L->next; r != NULL;)
	{
		if (r->next = NULL)
			cout << r->elem;
		else
			cout << r->elem << " ";
		r = r->next;
	}*/
}

void InsertElem(LinkList& L, int n)
{
	LinkList s;
	struct LNode* p=L->next;
	s = (LinkList)malloc(sizeof(LNode));
	s->elem = n;
	while (p->next != NULL) {
		if (p->elem<n && p->next->elem>n) {
			s->next = p->next;
			p->next = s;
		}
		p = p->next;
	}
	/*LinkList p, s;
	s = (LinkList)malloc(sizeof(LNode));
	s->elem = n;
	p = L;
	for (p = L->next; p->next != NULL;)
	{
		if (p->elem <= s->elem && p->next->elem > s->elem)
		{
			s->next = p->next;
			p->next = s;
			break;
		}
		p = p->next;
	}
	if (p->next == NULL && n > p->elem)
	{
		p->next = s;
		s->next = NULL;
	}*/
}

int main()
{
	int n;
	LinkList L;
	CreateList(L);
	cin >> n;
	InsertElem(L, n);
	Print(L);
}


////int main() {
////    int n, * arr, del;
////    scanf("%d",&n);
////    arr = (int*)malloc(n * sizeof(int));
////    for (int i = 0;i < n;i++) {
////        scanf("%d", &arr[i]);
////    }
////    scanf("%d", &del);
////    for (int i = 0;i < n;i++) {
////        if (del != arr[i]) {
////            printf("%d ", arr[i]);
////        }
////    }
////
////    return 0;
////}
//int main() {
//    int n, * arr, flag = 0;
//    scanf("%d", &n);
//    arr = (int*)malloc(n * sizeof(int));
//    for (int i = 0;i < n;i++) {
//        for (int j = i + 1;j < n;j++) {
//            if (arr[i] > arr[j]) {
//                flag++;
//            }
//        }
//    }
//    if (flag != 0)
//        printf("unsorted");
//    else
//        printf("sorted");
//    return 0;
//}