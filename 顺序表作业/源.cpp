#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<malloc.h>
typedef int Elemtype;
typedef struct {
	Elemtype* elem;
	int length;
	int listsize;
}Sqlist;

void InitList(Sqlist &L,int n) {
	L.elem = (int*)malloc(n * sizeof(int));
	/*if (L.elem == NULL)
		exit(0);*/
	L.length = 0;
	L.listsize = n;
}
void CreateList(Sqlist& L) {
	for (int i = 0;i < L.listsize;i++) {
		L.elem[i] = i+1;
	}
}
int find(int x,Sqlist L) {
	int count = 0;
	for (int i = 0;i < L.listsize;i++) {
		if (x == 0) {
			if (L.elem[i] % 10 == 0)
				count++;
		}
		else {
			while (L.elem[i] != 0) {
				if (L.elem[i] % 10 == x)
					count++;
				L.elem[i]=L.elem[i] / 10;
			}
		}
	}
	return count;
}
int main() {
	Sqlist L;
	int n=0;
	cin >> n;
	InitList(L,n);
	CreateList(L);
	int x,count=0;
	cin >> x;
	count=find(x,L);
	cout << count << endl;
	return 0;
}