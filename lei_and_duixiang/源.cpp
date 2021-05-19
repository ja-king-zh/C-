#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<string>
using namespace std;
#include<iostream>
//class jc {
//public:
//	jc() {}
//	int gc(int x) {
//		int sum = 1;
//		while (x > 0) {
//			sum = sum * x;
//			x = x - 1;
//		}
//		return sum;
//	}
//	int num;
//};
//int main() {
//	jc c;
//	scanf("%d", &c.num);
//	printf("%d", c.gc(c.num));
//	return 0;
//}
//class animal {
//public:
//	animal(){}
//	char* getname() {
//		return name;
//	}
//	int getage() {
//		return age;
//	}
//	char getsex() {
//		return sex;
//	}
//	void set(char* x,int y,char z) {
//		strcpy(name, x);
//		age = y;
//		sex = z;
//	}
//	int zz(int i) {
//		return i = age + 1;
//	}
//	char name[10];
//	int age;
//	char sex;
//};
//int main() {
//	animal s;
//	scanf("%s %d %c", &s.name, &s.age, &s.sex);
//	printf("%s\n%d\n%c\n", s.getname(), s.getage(), s.getsex());
//	printf("%s %d %c", s.getname(), s.zz(s.age), s.getsex());
//	return 0;
//}
//class patient {
//public:
//	patient(){}
//	~patient() {}
//	char name[10];
//	char sex;
//	int age;
//	int weight;
//	char sf[10];
//};
//int main() {
//	patient a[100];
//	int n,i,flag=0;
//	char m[10];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%s %c %d %d %s", &a[i].name, &a[i].sex, &a[i].age, &a[i].weight, &a[i].sf);
//	}
//	scanf("%s", &m);
//	for (i = 0;i < n;i++) {
//		if (!strcmp(a[i].name, m)) {
//			printf("%s %c %d %d %s", a[i].name, a[i].sex, a[i].age, a[i].weight, a[i].sf);
//			flag = 1;
//		}
//	}
//	if (flag == 0) {
//		printf("%s not found", m);
//	}
//	return 0;
//}
//struct note {
//	int num;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head=NULL, *p1,* p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d", &p1->num);
//	while (p1->num != 0) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//			p2 = p1;
//		}
//		p1 = (struct note*)malloc(sizeof(struct note));
//		scanf("%d", &p1->num);
//	}
//	p2->next = NULL;
//	free(p1);
//	return head;
//}
//struct note*Delete (struct note* p,struct note*head,int *flag) {
//	struct note *p1, *p2 = head;
//	p1 = p2=p->next;
//	while (p1!=NULL&&p->num != p1->num) {
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (p1 != NULL) {
//		if (p2 == p1) {
//			p = p1->next;
//		}
//		else {
//			p2->next = p1->next;
//		}
//	}
//	else {
//		*flag = 1;
//	}
//	return head;
//}
//int main() {
//	struct note* head,*p;
//	int flag = 0;
//	head = create();
//	p = head;
//	while (p != NULL) {
//		while (flag != 1) {
//			head = Delete(p, head, &flag);
//		}
//		p = p->next;
//		flag = 0;
//	}
//	return 0;
//}
//int main() {
//	int i,b, j,max=0, a[][10] = {0};
//	scanf("%d %d", &i, &j);
//	for (int m = 0;m < i;m++) {
//		for (int n = 0;n < j;n++) {
//			scanf("%d", &b);
//			a[i][j] = b;
//		}
//	}
//	for (int m = 0;m < i;m++) {
//		for (int n = 0;n < j;n++) {
//			if (a[i][j] > max) {
//				max = a[i][j];
//			}
//			
//		}
//	}
//	return 0;
//}
//int main() {
//	int i = 1, j = 1, k = 1;
//	while (i < 6) {
//		while (j < 6) {
//			if (j != i) {
//				while (k < 6) {
//					if (k != j && k != i) {
//						printf("%d  ",i * 100 + j * 10 + k);;
//					}
//					k++;
//				}
//			}
//			j++;
//			k = 1;
//		}
//		i++;
//		j = 1;
//		k = 1;
//	}
//	return 0;
//}
//int main() {
//	int n,i=10,j=0,k=0;
//	scanf("%d", &n);
//	while (i >= 10 && i <= 99) {
//		if (i % n == 0) {
//			printf("%d ", i);
//			j++;
//			k++;
//			if (j == 5) {
//				printf("\n");
//				j = 0;
//			}
//		}
//		i++;
//	}
//	printf("\n%d", k);
//	return 0;
//}
//int main() {
//	int n,i=0;
//	float sum = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		sum = sum + n % 10;
//		n = n / 10;
//		i++;
//	}
//	sum = sum / i;
//	printf("%.2f", sum);
//	return 0;
//}
//class patient {
//public:
//	void set(char* m, char x, int y, int w, char* n);
//	void print();
//private:
//	char name[5], sex, dui[3];
//	int age,weight;
//};
//void patient::set(char* m, char x, int y, int w, char* n) {
//	strcpy(name, m);
//	sex = x;
//	age = y;
//	weight = w;
//	strcpy(dui, n);
//}
//void patient::print() {
//	printf("%s %c %d %d %s", name, sex, age, weight, dui);
//}
//int main() {
//	int n, a[] = {0};
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		a[i] = i;
//	}
//	int i = 0;
//	for (;i < n;i++) {
//		patient ;
//	}
//	return 0;
//}
//class Tree {
//public:
//	int grow(int x, int y);
//	void age();
//private:
//	int ages, years;
//};
//int Tree::grow(int x,int y) {
//	ages = x;
//	years = y;
//	return ages+years;
//}
//void Tree::age() {
//	printf("%d",years+ages);
//}
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	Tree s;
//	s.grow(m, n);
//	s.age();
//	return 0;
//}