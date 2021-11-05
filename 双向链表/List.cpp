#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
ListNode* listinit() {
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->next = head;
	head->prev = head;
	return head;
}

ListNode* listpushback(ListNode* head, Elemtype x) {
	ListNode* tail = head->prev;
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = head;
	head->prev = newnode;
	return head;
}

void printlist(ListNode* head) {
	ListNode* cur = head->next;
	while (cur != head) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* listpopback(ListNode* head) {
	assert(head);
	assert(head->next != head);
	ListNode* cur = head->prev->prev;
	ListNode* tail = head->prev;
	cur->next = head;
	head->prev = cur;
	free(tail);
	return head;
}

ListNode* listpushfront(ListNode* head, Elemtype x) {
	ListNode* cur = head->next;
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	head->next = newnode;
	newnode->prev = head;
	newnode->next = cur;
	cur->prev = newnode;
	return head;
}

ListNode* listpopfront(ListNode* head) {
	assert(head);
	assert(head->next != head);
	ListNode* cur = head->next->next;
	ListNode* del = head->next;
	head->next = cur;
	cur->prev = head;
	free(del);
	return head;
}

ListNode* find(ListNode* head, Elemtype x) {
	assert(head);
	ListNode* cur = head->next;
	while (cur != head) {
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
//在pos之前插入
void listinsert(ListNode* pos, Elemtype x) {
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void listerase(ListNode* pos) {
	assert(pos);
	ListNode* prev = pos->prev;
	prev->next = pos->next;
	pos->next->prev = prev;
}