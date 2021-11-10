#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void Swap(Elemtype* x, Elemtype* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void HeapInit(HP* hp) {
	assert(hp);
	hp->a = (Elemtype*)malloc(sizeof(Elemtype) * max);
	hp->capacity = max;
	hp->size = 0;
}
void HeapDestroy(HP* hp) {
	free(hp->a);
	hp->capacity = hp->size = 0;
}
void Adjustdown(int* a, int n, int parent) {
	int child = 2 * parent + 1;
	while (child < n) {
		if (child + 1 < n && a[child + 1] > a[child]) {
			child++;
		}
		if (a[parent] < a[child]) {
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

void Adjustup(int* a, int child) {
	assert(a);

	while (child > 0) {
		int parent = child - 1 >> 1;
		if (a[child] > a[parent]) {
			Swap(&a[child], &a[parent]);
			child = parent;
		}
		else {
			break;
		}
	}
}
void HeapPrint(HP* hp) {
	for (int i = 0;i < hp->size;++i) {
		printf("%d ", hp->a[i]);
	}
}
void HeapPush(HP* hp, Elemtype x) {
	if (hp->size >= hp->capacity) {
		//ÔöÈÝ
		hp->a = (Elemtype*)realloc(hp->a, (hp->capacity + add) * sizeof(Elemtype));
		hp->capacity += add;
	}
	hp->a[hp->size++] = x;
	Adjustup(hp->a, hp->size - 1);
}

void HeapPop(HP* hp) {
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;
	Adjustdown(hp->a, hp->size, 0);
}

bool HeapEmpty(HP* hp) {
	return hp->size == 0;
}
int HeapSize(HP* hp) {
	return hp->size;
}