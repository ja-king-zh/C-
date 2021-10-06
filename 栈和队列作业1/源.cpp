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
	char arr[100] = { 0 };
	Sqstack s;
	initstack(s);
	scanf("%s", arr);
	int i = 0,flag=1;
	while (arr[i] != '\0') {
		if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{') {
			pushstack(s, arr[i]);
		}
		if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}') {
			char e = popstack(s);
			if (arr[i] == ')' && e != '(')
				flag = 0;
			if (arr[i] == ']' && e != '[')
				flag = 0;
			if (arr[i] == '}' && e != '{')
				flag = 0;
		}
		i++;
	}
	if (flag)
		printf("OK");
	else
		printf("ERROR");
	return 0;
}




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
//int main() {
//	Sqstack s;
//	initstack(s);
//	int e;
//	scanf("%d", &e);
//	while (e != -2) {
//		if (e == -1)
//			popstack(s);
//		else
//			pushstack(s, e);
//		scanf("%d", &e);
//	}
//	e = popstack(s);
//	if (!e)printf("0");
//	int arr[100] = { -1 },i=0;
//	while (e) {
//		arr[i] = e;
//		i++;
//		e = popstack(s);
//	}
//	while (i--) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}









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
//	if (s.top == s.base)return -1;
//	return *--s.top;
//}
//int main() {
//	Sqstack s;
//	initstack(s);
//	Elemtype e;
//	scanf("%c", &e);
//	while (e != '&') {
//		pushstack(s, e);
//		scanf("%c", &e);
//	}
//	scanf("%c", &e);
//	int flag = 1;
//	while (e != '@') {
//		if (e == popstack(s)) {
//			;
//		}
//		else {
//			flag = 0;
//			break;
//		}
//		scanf("%c", &e);
//	}
//	if (flag == 0)
//		printf("no");
//	else
//		printf("yes");
//	return 0;
//}