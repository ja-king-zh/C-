#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int Elemtype;
#include<malloc.h>
#define max 100;
typedef struct {
	Elemtype* elem;
	int length;
	int listsize;
}Sqlist;
void Initlist(Sqlist& L) {
	int n = max;
	L.elem = (int*)malloc(n * sizeof(int));
	L.listsize = max;
	L.length = 0;
}
void createlist(Sqlist& L) {
	int n;
	scanf("%d", &n);
	L.length = n;
	for (int i = 0;i < n;i++) {
		scanf("%d,", &L.elem[i]);
	}
}
int main() {
	Sqlist L1, L2;
	Initlist(L1);
	Initlist(L2);
	createlist(L1);
	createlist(L2);
	if (L1.length < L2.length) {
		if (memcmp(L1.elem, L2.elem, L2.length * 4) > 0)
			printf("1");
		else if (memcmp(L1.elem, L2.elem, L2.length * 4) < 0)
			printf("-1");
		else
			printf("0");
	}
	else {
		if (memcmp(L1.elem, L2.elem, L1.length * 4) > 0)
			printf("1");
		else if (memcmp(L1.elem, L2.elem, L1.length * 4) < 0)
			printf("-1");
		else
			printf("0");
	}
	return 0;
}




//typedef struct {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	int n = max;
//	L.elem = (int*)malloc(n * sizeof(int));
//	L.listsize = max;
//	L.length = 0;
//}
//void createlist(Sqlist& L) {
//	int n;
//	scanf("%d", &n);
//	L.length = n;
//	for (int i = 0;i < n;i++) {
//		scanf("%d,", &L.elem[i]);
//	}
//}
//int find(Sqlist& L, int x) {
//	if (L.elem[L.length - 1] < x)
//		return L.length;
//	for (int i = 0;i < L.length;i++) {
//		if (x > L.elem[i] && L.elem[i + 1] > x) {
//			return i + 1;
//		}
//	}
//	return 0;
//}
//void insertlist(Sqlist& L, int x, int num) {
//	for (int i = L.length - 1;i >= num;i--) {
//		L.elem[i + 1] = L.elem[i];
//	}
//	L.elem[num] = x;
//	L.length++;
//}
//void print(Sqlist&L) {
//	for (int i = 0;i < L.length-1;i++) {
//		printf("%d,", L.elem[i]);
//	}
//	printf("%d", L.elem[L.length - 1]);
//}
//int main() {
//	Sqlist L;
//	Initlist(L);
//	createlist(L);
//	int x;
//	scanf("%d", &x);
//	int num=find(L,x);
//	insertlist(L, x, num);
//	print(L);
//	return 0;
//}