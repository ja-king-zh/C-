#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define N 100
//typedef int SLDateType;
//
////静态顺序表
//typedef struct SeqList {
//	SLDateType a[N];
//	int size;//数组中的有效数据
//}SL;
//
//void SeqListInit(SL& ps);
//void SeqListPushBack(SL& ps, SLDateType x);
//void SeqListPopBack(SL& ps);
//void SeqListPushFront(SL& ps, SLDateType x);
//void SeqListPopFront(SL& ps);



typedef int SLDateType;

//动态顺序表
typedef struct SeqList {
	SLDateType* a;
	int size;//数组中的有效数据
	int capacity;//数组实际能存数据的空间容量为多大
}SL;

void SeqListInit(SL& ps);
void SeqListDestory(SL& ps);
void SeqListPrint(SL& ps);
void SeqListPushBack(SL& ps, SLDateType x);
void SeqListPopBack(SL& ps);
void SeqListPushFront(SL& ps, SLDateType x);
void SeqListPopFront(SL& ps);
//找到了返回x的下标，未找到返回-1
int SeqListFind(SL& ps, SLDateType x);
//指定位置插入元素
void SeqListInsert(SL& ps, int pos, SLDateType x);
//删除指定位置元素
void SeqListErase(SL& ps, int pos);