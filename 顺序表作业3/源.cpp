#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<iostream>
using namespace std;
#define max 100;
typedef int Elemtype;
typedef struct Sqlist {
	Elemtype* elem;
	int length;
	int listsize;
}Sqlist;
void Initlist(Sqlist& L) {
	L.listsize = max;
	L.length = 0;
	L.elem = (int*)malloc(L.listsize * sizeof(int));
}
void createlist(Sqlist& L) {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d ", &L.elem[i]);
	}
	L.length = n;
}
void insertlist(Sqlist& L, int x) {
	if (L.elem[0] > x) {
		for (int i = L.length - 1;i >= 0;i--) {
			L.elem[i + 1] = L.elem[i];
		}
		L.elem[0] = x;
		L.length++;
	}
	else if (L.elem[L.length - 1] < x) {
		L.elem[L.length] = x;
		L.length++;
	}
	else {
		for (int i = 0;i < L.length;i++) {
			if (L.elem[i]<x && L.elem[i + 1]>x) {
				for (int j = L.length - 1;j > i;j--) {
					L.elem[j + 1] = L.elem[j];
				}
				L.elem[i + 1] = x;
				L.length++;
			}
		}
	}
}
void find(Sqlist& L, int x) {
	if (L.length == 1 && x == L.elem[0]) {
		;
	}
	else {
		int flag = 0;
		for (int i = 0;i < L.length;i++) {
			if (x == L.elem[i]) {
				int tmp = L.elem[i];
				L.elem[i] = L.elem[i + 1];
				L.elem[i + 1] = tmp;
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			insertlist(L, x);
		}
	}
}
void print(Sqlist& L) {
	for (int i = 0;i < L.length;i++) {
		printf("%d ", L.elem[i]);
	}
}
int main() {
	Sqlist L;
	Initlist(L);
	createlist(L);
	int x;
	scanf("%d", &x);
	find(L, x);
	print(L);
	return 0;
}



//typedef struct Sqlist {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	L.listsize = max;
//	L.length = 0;
//	L.elem = (int*)malloc(L.listsize * sizeof(int));
//}
//void createlist(Sqlist& L) {
//	int x;
//	while (1) {
//		cin >> x;
//		L.elem[L.length] = x;
//		L.length++;
//		if (cin.get() == '\n')
//			break;
//	}
//}
//void insertlist(Sqlist& L, int x1, int x2) {
//	int i = 1;
//	if (L.elem[i] > x1) {
//		for (int j = L.length - 1;j >= i - 1;j--) {
//			L.elem[j + 2] = L.elem[j];
//		}
//		L.elem[i] = x1;
//		L.elem[i - 1] = x2;
//		L.length += 2;
//	}
//	else {
//		for (i = 1;i < L.length;i = i + 2) {
//			if (L.elem[i]<x1 && L.elem[i + 2]>x1) {
//				break;
//			}
//		}
//		for (int j = L.length - 1;j >= i + 1;j--) {
//			L.elem[j + 2] = L.elem[j];
//		}
//		if (i > L.length) {
//			L.elem[i] = x1;
//			L.elem[i-1] = x2;
//			L.length += 2;
//		}
//		else {
//			L.elem[i + 2] = x1;
//			L.elem[i + 1] = x2;
//			L.length += 2;
//		}
//	}
//}
//void addlist(Sqlist& L1, Sqlist& L2) {
//	int flag = 0;
//	for (int i = 1;i < L2.length;i = i + 2) {
//		flag = 0;
//		for (int j = 1;j < L1.length; j = j + 2) {
//			if (L2.elem[i] == L1.elem[j]) {
//				L1.elem[j - 1] += L2.elem[i - 1];
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) {
//			insertlist(L1, L2.elem[i], L2.elem[i - 1]);
//		}
//	}
//
//}
//void shezhi(Sqlist& L) {
//	for (int i = 0;i < L.length;i+=2) {
//		if (L.elem[i] == 0)
//			L.elem[i] = -1000;
//	}
//}
//void print(Sqlist& L) {
//	for (int i = 0;i < L.length;i++) {
//		if (L.elem[i] == -1000)
//			i = i + 1;
//		else
//			printf("%d ", L.elem[i]);
//	}
//}
//int main() {
//	Sqlist La,Lb;
//	Initlist(La);
//	Initlist(Lb);
//	createlist(La);
//	createlist(Lb);
//	addlist(La, Lb);
//	shezhi(La);
//	print(La);
//	return 0;
//}