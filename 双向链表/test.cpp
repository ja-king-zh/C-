#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h";
void test() {
	ListNode* head;
	head=listinit();
	head = listpushback(head, 1);
	head = listpushback(head, 2);
	head = listpushback(head, 3);
	head = listpushback(head, 4);
	printlist(head);
	listpopback(head);
	printlist(head);
	head = listpushfront(head, 5);
	printlist(head);
	head = listpopfront(head);
	head = listpushfront(head, 5);
	printlist(head);
	ListNode* pos;
	if (pos=find(head, 5)) {
		listerase(pos);
	}
	printlist(head);
	if (pos = find(head, 1)) {
		listinsert(pos, 66);
	}
	printlist(head);
}
int main() {
	test();
	return 0;
}