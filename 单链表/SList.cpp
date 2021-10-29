#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SListPrint(SLT* phead) {
	SLT* cur = phead;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void SListPushBack(SLT*& phead, SLTDateType x) {
	if (phead == NULL) {
		SLT* newnode = (SLT*)malloc(sizeof(SLT));
		newnode->data = x;
		phead = newnode;
		newnode->next = NULL;
		return;
	}
	SLT* tail = phead;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = x;
	tail->next = newnode;
	newnode->next = NULL;
}

void SListPushFront(SLT*& phead, SLTDateType x) {
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = x;
	newnode->next = phead;
	phead = newnode;
}

void SListPopBack(SLT*& phead) {
	if (phead == NULL)
		return;
	if (phead->next == NULL) {
		free(phead);
		phead = NULL;
		return;
	}
	else {
		SLT* prev = NULL;
		SLT* tail = phead;
		while (tail->next!=NULL) {
			prev = tail;
			tail = tail->next;
		}
		prev->next = NULL;
		free(tail);
		tail = NULL;
	}
}

void SListPopFront(SLT*& phead) {
	if (phead == NULL)return;
	if (phead->next == NULL) {
		free(phead);
		phead = NULL;
	}
	else {
		SLT*newphead = phead->next;
		free(phead);
		phead = NULL;
		phead = newphead;
	}
}

SLT* SListFind(SLT* phead, SLTDateType x) {
	SLT* cur = phead;
	while (cur) {
		if (x == cur->data) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInsert(SLT*& phead, SLT* pos, SLTDateType x) {
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = x;
	SLT* cur = phead;
	SLT* prev = NULL;
	if (pos == phead) {
		newnode->next = phead;
		phead = newnode;
	}
	else {
		while (cur) {
			if (pos == cur) {
				prev->next = newnode;
				newnode->next = cur;
				return;
			}
			else {
				prev = cur;
				cur = cur->next;
			}
		}
	}
}

void SListErase(SLT*& phead, SLT* pos) {
	SLT* cur = phead;
	SLT* prev = NULL;
	if (phead == pos)
		phead = phead->next;
	else {
		while (cur) {
			if (cur == pos) {
				prev->next = cur->next;
				break;
			}
			else {
				prev = cur;
				cur = cur->next;
			}
		}
	}
}

void SListInsertAfter(SLT* pos, SLTDateType x) {
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = x;
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListDestroy(SLT*& phead) {
	SLT* cur = phead;
	while (cur) {
		SLT* next = cur->next;
		free(cur);
		cur = next;
	}
	phead = NULL;
}