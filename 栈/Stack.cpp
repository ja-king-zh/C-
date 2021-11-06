#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void Stackinit(ST* ps) {
	ps->base = ps->top = (Elemtype*)malloc(max * sizeof(Elemtype));
	ps->size = max;
}
void StackDestroy(ST* ps) {
	assert(ps);
	free(ps->base);
	ps->base = NULL;
	ps->size = 0;
}
void StackPush(ST* ps, int x) {
	if (ps->top - ps->base >= ps->size) {
		ps->base = (Elemtype*)realloc(ps->base, (ps->size + add) * sizeof(Elemtype));
		ps->size = ps->size + add;
	}
	*ps->top++ = x;
}
Elemtype StackPop(ST* ps) {
	assert(ps);
	assert(ps->base != ps->top);
	return *--ps->top;
}
Elemtype StackTop(ST* ps) {
	assert(ps);
	assert(ps->top > ps->base);
	Elemtype a = *--ps->top;
	ps->top++;
	return a;
}
int StackSize(ST* ps) {
	return ps->top - ps->base;
}
bool StackEmpty(ST* ps) {
	if (ps->base == ps->top)return true;
	return false;
}
