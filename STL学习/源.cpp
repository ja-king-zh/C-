#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};

struct node* createlist()
{
	struct node* head = NULL;
	struct node* p1, * p2;
	p2 = p1 = (struct node*)malloc(sizeof(struct node));
	scanf("%d", &p1->data);

	while (p1->data != -1)
	{
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;

		p1 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->data);
	}
	p2->next = NULL;
	free(p1);
	return head;
}

struct node* cycle(struct node* head)
{
	struct node* p1, * p2, * p3;
	p1 = head;
	p2 = head->next;
	p3 = head->next->next;

	if (head == NULL)return head;
	if (head->next == NULL)return head;

	while (p3 != NULL)
	{
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
	}
	p2->next = p1;
	head->next = NULL;
	return p2;
}

void printlist(struct node* head)
{
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
}

int main(void)
{
	struct node* head = NULL;

	head = createlist();
	head = cycle(head);

	printlist(head);
	system("pause");
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//struct node {
//    int data;
//    struct node* next;
//};
//
//struct node* createlist(int n)
//{
//    struct node* head = NULL;
//    struct node* p1, * p2=NULL;
//
//    for (int i = 0;i < n;i++)
//    {
//        p1 = (struct node*)malloc(sizeof(struct node));
//        scanf("%d", &p1->data);
//        if (head == NULL)
//        {
//            head = p1;
//        }
//        else
//        {
//            p2->next = p1;
//        }
//        p2 = p1;
//    }
//    p2->next = NULL;
//    return head;
//}
//
//int find(struct node* head)
//{
//    struct node* p1;
//    p1 = head;
//
//    int max = 0;
//    max = p1->data;
//
//    for (;p1 != NULL;p1 = p1->next)
//    {
//        if (max < p1->data) {
//            max = p1->data;
//        }
//    }
//    return max;
//}
//
//struct node* deletelist(struct node* head, int max)
//{
//    /*if(head->data==max)
//     return head->next;*/
//    struct node* p1, * p2;
//    if (head == NULL)
//    {
//        return head;
//    }
//    p2 = p1 = head;
//    while (p1->data != max && p1->next != NULL)
//    {
//        p2 = p1;
//        p1 = p1->next;
//    }
//    if (p1->data == max)
//    {
//        if (p1 == head)
//        {
//            head = p1->next;
//        }
//        else
//        {
//            p2->next = p1->next;
//        }
//        free(p1);
//    }
//    return head;
//}
//
//struct node* insertlist(struct node* head, int max)
//{
//    struct node* p1, * p5;
//    p1 = head;
//
//    struct node* p0 = (struct node*)malloc(sizeof(struct node));
//    p0->data = max;
//    p0->next = NULL;
//    if (head == NULL) return p0;
//    while (p1->next != NULL) {
//        p1 = p1->next;
//    }
//    p5 = p0;
//    p1->next = p5;
//    p5->next = NULL;
//    free(p0);
//    return head;
//}
//
//void printlist(struct node* head)
//{
//    while (head != NULL) {
//        printf("%d ", head->data);
//        head = head->next;
//    }
//}
//
//int main(void)
//{
//    struct node* head = NULL;
//
//    int x;
//    scanf("%d", &x);
//    head = createlist(x);
//
//    int max = find(head);
//
//    head = deletelist(head, max);
//    head = insertlist(head, max);
//    printlist(head);
//    system("pause");
//    return 0;
//}