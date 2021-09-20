#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
#define max 100;
typedef struct {
	Elemtype* elem;
	int listsize;
	int length;
}Sqlist;
void createlist(Sqlist& L) {
	L.listsize = max;
	L.length = 0;
	int i = 0;
	L.elem = (int*)malloc(L.listsize * sizeof(int));
	scanf("%d", &L.elem[i]);
	while (L.elem[i] != -1) {
		i++;
		scanf("%d", &L.elem[i]);
		L.length++;
	}
}
void jiaohuan(Sqlist& L) {
	int left = 0;
	int right = L.length - 1;
	while (left < right) {
		int cmp = L.elem[right];
		L.elem[right] = L.elem[left];
		L.elem[left] = cmp;
		left++;
		right--;
	}
}
void print(Sqlist& L) {
	for (int i = 0;i < L.length;i++) {
		printf("%d ", L.elem[i]);
	}
}
int main(){
	Sqlist L;
	createlist(L);
	jiaohuan(L);
	print(L);
	return 0;
}





//typedef struct {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	int n;
//	scanf("%d", &n);
//	L.listsize = max;
//	L.length = n;
//	L.elem = (int*)malloc(L.listsize * sizeof(int));
//	for (int i = 0;i < L.length;i++) {
//		scanf("%d", &L.elem[i]);
//	}
//}
//void insertlist(Sqlist& L,int x,int num) {
//	if (x > L.length + 1)
//		exit(1);
//	else {
//		//²åÈë
//		for (int i = L.length;i >= x;i--) {
//			L.elem[i] = L.elem[i-1];
//		}
//		L.elem[x-1] = num;
//		L.length++;
//	}
//}
//void print(Sqlist& L) {
//	for (int i = 0;i < L.length;i++) {
//		printf("%d ", L.elem[i]);
//	}
//}
//int main() {
//	Sqlist L;
//	Initlist(L);
//	int x,num;
//	scanf("%d %d", &x,&num);
//	insertlist(L,x,num);
//	print(L);
//	return 0;
//}



//typedef int Elemtype;
//#define max 100;
//typedef struct {
//	Elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void Initlist(Sqlist& L) {
//	int n = max;
//	L.elem = (Elemtype*)malloc(n * sizeof(Elemtype));
//	L.length = 0;
//	L.listsize = max;
//}
//void createlist(Sqlist& L) {
//	int a,i=0;
//	scanf("%d", &a);
//	while (1) {
//		L.elem[i] = a;
//		i++;
//		L.length++;
//		if ('\n' == cin.get())
//			break;
//		scanf("%d", &a);
//	}
//}
//int panduan(Sqlist& L, int flag) {
//	int count=0;
//	for (int i = 0;i < L.length;i++) {
//		if (L.elem[i] == flag)
//			count++;
//	}
//	if (count > (L.length / 2))
//		return flag;
//	return -100000;
//}
//int main() {
//	Sqlist L;
//	Initlist(L);
//	createlist(L);
//	int ret = 0;
//	for (int i = 0;i < L.length;i++) {
//		ret = panduan(L, L.elem[i]);
//		if (ret != -100000) {
//			printf("%d", ret);
//			break;
//		}
//	}
//	if (ret == -100000)
//		printf("-1");
//	return 0;
//}