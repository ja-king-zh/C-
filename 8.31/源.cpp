#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}


//int fun(int x)
//{
//	int count = 0;
//	while (x) {
//		count++;
//		x = x & (x - 1);
//	} 
//	return count;
//} 
//int main()
//{
//	printf("fun(2017)=%d\n", fun(2019));
//}

//#define CIR(r) r* r
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return;
//}



//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//} 
//void main()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	return;
//}

struct node {
	int num;
	struct node* next;
};
struct node* create() {
	struct node* p1, * p2, * head = NULL;
	p1 = p2 = (struct node*)malloc(sizeof(struct node));
	scanf("%d", &p1->num);
	while (p1->num != -1) {
		if (head == NULL) {
			head = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1;
		p1= (struct node*)malloc(sizeof(struct node));
		scanf("%d", &p1->num);
	}
	p2->next = NULL;
	free(p1);
	return head;
}
struct node* found(struct node* head, int k) {
	struct node* p1, * p2;
	int count = 0;
	p1 = p2 = head;
	while (p1 != NULL) {
		p1 = p1->next;
		count++;
	}
	for (int i = 0;i < count - k;i++) {
		p2 = p2->next;
	}
	return p2;
}
int main() {
	struct node* head;
	head = create();
	int k;
	scanf("%d", &k);
	head=found(head, k);
	printf("%d", head->num);
	return 0;
}