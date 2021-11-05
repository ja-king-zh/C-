#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int Elemtype;
typedef struct ListNode {
	Elemtype data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;

ListNode* listinit();
ListNode* listpushback(ListNode* head, Elemtype x);
ListNode* listpopback(ListNode* head);
ListNode* listpushfront(ListNode* head, Elemtype x);
ListNode* listpopfront(ListNode* head);
ListNode* find(ListNode* head, Elemtype x);
void printlist(ListNode* head);
void listinsert(ListNode* pos, Elemtype x);
void listerase(ListNode* pos);
