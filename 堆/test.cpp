#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void test() {
	int a[] = { 70,56,30,25,15,10,75 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0;i < sizeof(a) / sizeof(a[0]);++i) {
		HeapPush(&hp, a[i]);
	}
	HeapPrint(&hp);
}
int main() {
	//test();
	int a[] = { 70,56,30,25,15,10,75 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0;i < sz;++i) {
		Adjustup(a, i);
	}
	for (int i = 0;i < sz;++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = sz - 1;i > 0;i--) {
		Swap(&a[i], &a[0]);
		Adjustdown(a, i, 0);
	}
	for (int i = 0;i < sz;++i) {
		printf("%d ", a[i]);
	}
	return 0;
}