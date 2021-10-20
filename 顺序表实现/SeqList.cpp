#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SeqListInit(SL& ps) {
	ps.a = NULL;
	ps.capacity = ps.size = 0;
}

void SeqListPrint(SL& ps) {
	for (int i = 0;i < ps.size;i++) {
		printf("%d ", ps.a[i]);
	}
	printf("\n");
}

void SeqListPushBack(SL& ps, SLDateType x) {
	if (ps.capacity == ps.size) {
		int newcapacity = ps.capacity == 0 ? 4 : 2 * ps.capacity;
		SLDateType* tmp = (SLDateType*)realloc(ps.a, newcapacity * sizeof(SLDateType));
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps.a = tmp;
		ps.capacity = newcapacity;
	}
	ps.a[ps.size] = x;
	ps.size++;
}

void SeqListDestory(SL& ps) {
	free(ps.a);
	ps.a = NULL;
	ps.capacity = ps.size = 0;
}

void SeqListPopBack(SL& ps) {
	if (ps.size > 0) {
		ps.size--;
	}
}

void SeqListPushFront(SL& ps, SLDateType x) {
	if (ps.capacity == ps.size) {
		int newcapacity = ps.capacity == 0 ? 4 : 2 * ps.capacity;
		SLDateType* tmp = (SLDateType*)realloc(ps.a, newcapacity * sizeof(SLDateType));
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps.a = tmp;
		ps.capacity = newcapacity;
	}
	int end = ps.size - 1;
	for (int i = end;i >= 0;i--) {
		ps.a[i + 1] = ps.a[i];
	}
	ps.a[0] = x;
	ps.size++;
}

void SeqListPopFront(SL& ps) {
	if (ps.size > 0) {
		int begin = 1;
		for (int i = begin;i < ps.size;i++) {
			ps.a[i - 1] = ps.a[i];
		}
		ps.size--;
	}
}

int SeqListFind(SL& ps, SLDateType x) {
	for (int i = 0;i < ps.size;i++) {
		if (ps.a[i] == x)
			return i;
	}
	return -1;
}

void SeqListInsert(SL& ps, int pos, SLDateType x) {
	assert(ps.size > pos && pos >= 0);
	if (ps.capacity == ps.size) {
		int newcapacity = ps.capacity == 0 ? 4 : 2 * ps.capacity;
		SLDateType* tmp = (SLDateType*)realloc(ps.a, newcapacity * sizeof(SLDateType));
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps.a = tmp;
		ps.capacity = newcapacity;
	}
	for (int i = ps.size - 1;i >= pos;i--) {
		ps.a[i + 1] = ps.a[i];
	}
	ps.a[pos] = x;
	ps.size++;
}

void SeqListErase(SL& ps, int pos) {
	if (ps.size > 0) {
		for (int i = pos + 1;i < ps.size;i++) {
			ps.a[i - 1] = ps.a[i];
		}
		ps.size--;
	}
}