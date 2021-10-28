#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void test() {
	SLT* Slist = NULL;
	SListPushBack(Slist,1);
	SListPrint(Slist);
	SListPushFront(Slist, 10);
	SListPushFront(Slist, 3);
	SListPushFront(Slist, 6);
	SListPushFront(Slist, 4);
	SListPrint(Slist);
	SListPopBack(Slist);
	SListPrint(Slist);
	SLT*pos=SListFind(Slist,3);
	if (pos) {
		SListInsert(Slist, pos, 5);
	}
	SListPrint(Slist);
	pos = SListFind(Slist, 10);
	if (pos) {
		SListInsert(Slist, pos, 5);
	}
	SListPrint(Slist);
}
int main() {
	test();
	return 0;
}