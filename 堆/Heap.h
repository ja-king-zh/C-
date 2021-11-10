#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
typedef int Elemtype;
#define max 100
#define add 10
typedef struct Heap {
	Elemtype* a;
	int size;
	int capacity;
}HP;

void HeapInit(HP* hp);
void HeapDestroy(HP* hp);
void HeapPush(HP* hp,Elemtype x);
void HeapPop(HP* hp);
void HeapPrint(HP* hp);
bool HeapEmpty(HP* hp);
int HeapSize(HP* hp);
void Adjustup(int* a, int child);
void Adjustdown(int* a, int n, int parent);
void Swap(Elemtype* x, Elemtype* y);