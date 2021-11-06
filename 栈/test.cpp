#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Stack.h"
void test() {
	ST s;
	Stackinit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	//printf("%d", StackPop(&s));
	while (!StackEmpty(&s)) {
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}

}
int main() {
	test();
	return 0;
}