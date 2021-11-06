#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int Elemtype;
#define max 100
#define add 10
typedef struct Stack {
	Elemtype* base;
	Elemtype* top;
	int size;
}ST;

void Stackinit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, int x);
Elemtype StackPop(ST* ps);
Elemtype StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);
