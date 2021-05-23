#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
//int main() {
//	int a[50], b[50], m, n,j=0;
//	scanf("%d", &m);
//	for (int i = 0;i < m;i++) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &b[i]);
//	}
//	for (;j < m;j++) {
//		for (int i = 0;i < n;i++) {
//			if (a[j] == b[i]) {
//				b[i] = 0;
//			}
//		}
//	}
//	for (int i = 0;i < m;i++) {
//		printf("%d ", a[i]);
//	}
//	for (int i = 0;i < n;i++) {
//		if (b[i] != 0) {
//			printf("%d ", b[i]);
//		}
//	}
//	return 0;
//}
//int main() {
//	int n, m,a[20],i=0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (i = 0;i < n;i++) {
//		if (a[i] == m) {
//			printf("%d", i);
//			break;
//		}
//	}
//	if (i == n) {
//		printf("no");
//	}
//	return 0;
//}
//int main() {
//	int a[100] ;
//	a[0] = 1;
//	a[1] = 1;
//	int i = 2,n;
//	for (;i < 100;i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	scanf("%d", &n);
//	printf("%d", a[n-1]);
//	return 0;
//}
//int main() {
//	int a[50],i=0,j,k,b,tem=0,n;
//	scanf("%d", &a[i]);
//	while (a[i] != -1) {
//		i++;
//		scanf("%d", &a[i]);
//	}
//	n = i;
//	if (i % 2 == 0) {
//		j = i / 2;
//		for (k = 0;k < j;k++) {
//			for (b = k + 1;b < j;b++) {
//				if (a[k] > a[b]) {
//					tem = a[k];
//					a[k] = a[b];
//					a[b] = tem;
//				}
//			}
//		}
//		for (;j < i;j++) {
//			for (b = j + 1;b < i;b++) {
//				if (a[b] > a[j]) {
//					tem = a[k];
//					a[k] = a[b];
//					a[b] = tem;
//				}
//			}
//		}
//	}
//	else {
//		j = i / 2;
//		for (k = 0;k < j;k++) {
//			for (b = k + 1;b < j;b++) {
//				if (a[k] > a[b]) {
//					tem = a[k];
//					a[k] = a[b];
//					a[b] = tem;
//				}
//			}
//		}
//		j = j - 1;
//		for (;j < i+1;j++) {
//			for (b = j + 1;b < i+1;b++) {
//				if (a[b] > a[j]) {
//					tem = a[k];
//					a[k] = a[b];
//					a[b] = tem;
//				}
//			}
//		}
//	}
//	for (i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int main() {
//	char a[20], b[20],i=0;
//	scanf("%s", &a);
//	scanf("%s", &b);
//	while (a[i] == b[i] && a[i] != '\0') {
//		i++;
//	}
//	if (a[i] > b[i]) {
//		printf("1");
//	}
//	else if (a[i] == b[i]) {
//		printf("0");
//	}
//	else {
//		printf("-1");
//	}
//	return 0;
//}
//int main() {
//	int k,a[50],i=0,b=0;
//	scanf("%d", &a[i]);
//	while (a[i] != -1) {
//		i++;
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &k);
//	for (int j = 0;j<i;j++) {
//		if (a[j] == k) {
//			b++;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}
//int main() {
//	int m, n, i, j,max=0,a[100][100],tem=0;
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];
//			}
//		}
//		for (j = 0;j < n;j++) {
//			if (max == a[i][j]) {
//				tem = a[i][0];
//				a[i][0] = max;
//				a[i][j] = tem;
//			}
//		}
//		max = 0;
//	}
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct note {
//	int num;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head=NULL, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d", &p1->num);
//	while (p1->num != 0) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%d", &p1->num);
//	}
//	free(p1);
//	p2->next = NULL;
//	return head;
//}
//struct note* panduan(struct note*head,int n){
//	struct note* p1, * p2;
//	p2 = head;
//	p1  = head->next;
//	while (p1 != NULL && p1->num != n){
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p1 != NULL) {
//		p2->next = p1->next;
//	}
//	return head;
//}
//int main() {
//	struct note* head,*p,*p1,*p2;
//	int a;
//	head = create();
//	p = head;
//	p1 = head->next;
//	p2 = head;
//	if (p1->num == p2->num) {
//		p2->next = p1->next;
//	}
//	while (head->next != NULL) {
//		a = head->num;
//		panduan(head,a);
//		head = head->next;
//	}
//	while (p != NULL) {
//		printf("%d ", p->num);
//		p = p->next;
//	}
//	return 0;
//}