#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef char ElemType;
typedef struct {
	ElemType* base;
	ElemType* top;
	int stacksize;
}stack;
void initstack(stack& s) {
	s.base = (ElemType*)malloc(max*sizeof(ElemType));
	s.top = s.base;
	s.stacksize = max;
}
void Push(stack& s, char e) {
	*s.top++ = e;
}
ElemType pop(stack& s) {
	return *--s.top;
}
int main() {
	stack s;
	initstack(s);
	char arr[100] = { 0 };
	int i = 0,flag=1;
	scanf("%s", arr);
	while (arr[i] != '\0') {
		Push(s, arr[i]);
		i++;
	}
	i = 0;
	while (arr[i] != '\0') {
		if (arr[i] != pop(s))
			flag = 0;
		i++;
	}
	if (flag)
		printf("yes");
	else
		printf("no");
	return 0;
}





//int main() {
//	int arr[100][100],m,n,flag,color,m1,n1;
//	scanf("%d %d", &m1, &n1);
//	for (int i = 0;i < m1;i++) {
//		for (int j = 0;j < n1;j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d %d", &m, &n);
//	flag = arr[m][n];
//	scanf("%d", &color);
//	arr[m][n] = color;
//	for (int i = 0;i < m1;i++) {
//		for (int j = 0;j < n1;j++) {
//			if (arr[i][j] == flag)
//				arr[i][j] = color;
//		}
//	}
//	for (int i = 0;i < m1;i++) {
//		for (int j = 0;j < n1;j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}