#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLTDateType;
typedef struct SListNode {
	SLTDateType data;
	struct SListNode* next;
}SLT;

void SListPrint(SLT* phead);
void SListPushBack(SLT*& phead, SLTDateType x);
void SListPushFront(SLT*& phead, SLTDateType x);
void SListPopBack(SLT*& phead);
void SListPopFront(SLT*& phead);

SLT* SListFind(SLT* phead, SLTDateType x);
void SListInsert(SLT*& phead, SLT* pos, SLTDateType x);
void SListErase(SLT*& phead, SLT* pos);
void SListInsertAfter(SLT* pos, SLTDateType x);
void SListDestroy(SLT*& phead);