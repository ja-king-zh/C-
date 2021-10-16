#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define max 100
#define add 10
typedef char Elemtype;
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
	char arr[1000];
	Sqstack s;
	initstack(s);
	scanf("%s", arr);
	char* p = arr;
	int flag = 1,i=0;
	while (*p != '\0') {
		pushstack(s,*p);
		p++;
	}
	while (arr[i] != '\0') {
		if (popstack(s) != arr[i])
			flag = 0;
		i++;
	}
	if (flag)
		printf("1");
	else
		printf("0");
	return 0;
}