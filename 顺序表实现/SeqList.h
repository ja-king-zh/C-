#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define N 100
//typedef int SLDateType;
//
////��̬˳���
//typedef struct SeqList {
//	SLDateType a[N];
//	int size;//�����е���Ч����
//}SL;
//
//void SeqListInit(SL& ps);
//void SeqListPushBack(SL& ps, SLDateType x);
//void SeqListPopBack(SL& ps);
//void SeqListPushFront(SL& ps, SLDateType x);
//void SeqListPopFront(SL& ps);



typedef int SLDateType;

//��̬˳���
typedef struct SeqList {
	SLDateType* a;
	int size;//�����е���Ч����
	int capacity;//����ʵ���ܴ����ݵĿռ�����Ϊ���
}SL;

void SeqListInit(SL& ps);
void SeqListDestory(SL& ps);
void SeqListPrint(SL& ps);
void SeqListPushBack(SL& ps, SLDateType x);
void SeqListPopBack(SL& ps);
void SeqListPushFront(SL& ps, SLDateType x);
void SeqListPopFront(SL& ps);
//�ҵ��˷���x���±꣬δ�ҵ�����-1
int SeqListFind(SL& ps, SLDateType x);
//ָ��λ�ò���Ԫ��
void SeqListInsert(SL& ps, int pos, SLDateType x);
//ɾ��ָ��λ��Ԫ��
void SeqListErase(SL& ps, int pos);