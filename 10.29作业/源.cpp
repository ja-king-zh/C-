#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define max 100
#define add 10
typedef int Elemtype;
typedef struct {
	Elemtype* base;
	Elemtype* top;
	int stacksize;
}Sqstack;
void initstack(Sqstack& s) {
	s.base = (Elemtype*)malloc(sizeof(Elemtype) * max);
	if (!s.base)return;
	s.top = s.base;
	s.stacksize = max;
}
void pushstack(Sqstack& s, Elemtype e) {
	if (s.top - s.base >= s.stacksize) {
		s.base = (Elemtype*)realloc(s.base, (s.stacksize + add) * sizeof(Elemtype));
		s.top = s.base + s.stacksize;
		s.stacksize += add;
	}
	*s.top++ = e;
}
Elemtype popstack(Sqstack& s) {
	if (s.top == s.base)return 0;
	return *--s.top;
}
int main() {
	int x;
	Sqstack s;
	initstack(s);
	while (cin >> x) {
		if (x % 2 == 0) {
			pushstack(s, x);
		}
		else {
			printf("%d ", x);
		}
	}
	while (s.top != s.base) {
		printf("%d ", popstack(s));
	}
}





//#define max 100
//#define add 10
//typedef int Elemtype;
//typedef struct {
//	Elemtype* base;
//	Elemtype* top;
//	int stacksize;
//}Sqstack;
//void initstack(Sqstack& s) {
//	s.base = (Elemtype*)malloc(sizeof(Elemtype) * max);
//	if (!s.base)return;
//	s.top = s.base;
//	s.stacksize = max;
//}
//void pushstack(Sqstack& s, Elemtype e) {
//	if (s.top - s.base >= s.stacksize) {
//		s.base = (Elemtype*)realloc(s.base, (s.stacksize + add) * sizeof(Elemtype));
//		s.top = s.base + s.stacksize;
//		s.stacksize += add;
//	}
//	*s.top++ = e;
//}
//Elemtype popstack(Sqstack& s) {
//	if (s.top == s.base)return 0;
//	return *--s.top;
//}
//bool isempty(Sqstack& s) {
//	if (s.top == s.base) return true;
//	else return false;
//}
//int main() {
//	int n,flag=1;
//	Sqstack s;
//	initstack(s);
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		int a;
//		scanf("%d", &a);
//		if (a == 1) {
//			pushstack(s, 1);
//		}
//		else {
//			if (isempty(s)){
//				flag = 0;
//				break;
//			}
//			popstack(s);
//		}
//	}
//	if (flag) {
//		if (isempty(s)) printf("1");
//		else printf("0");
//	}
//	else printf("0");
//	return 0;
//}