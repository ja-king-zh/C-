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
	test();
	return 0;
}