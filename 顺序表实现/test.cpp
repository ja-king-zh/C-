#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void testsl() {
	SL s1;
	SeqListInit(s1);
	SeqListPushBack(s1, 1);
	SeqListPushBack(s1, 1);
	SeqListPushBack(s1, 1);
	SeqListPrint(s1);
	SeqListPopBack(s1);
	SeqListPrint(s1);
	SeqListPushFront(s1, 10);
	SeqListPrint(s1);
	SeqListPopFront(s1);
	SeqListPrint(s1);
	SeqListInsert(s1, 1, 20);
	SeqListPrint(s1);
	SeqListErase(s1, 2);
	SeqListPrint(s1);
	SeqListDestory(s1);
}
int main() {
	testsl();
	return 0;
}