#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using  namespace  std;
int main() {
	double x2, k;
	scanf("%lf",&k);
	for (k = 0.4;k < 0.6;k = k + 0.01) {
		x2 = (121000 * k) / (2000 * k * sqrt(1 + k * k) + 121*121 * 3.1415926);
		printf("%lf\n", x2);
	}
	return 0;
}
//struct stu {
//	int no;
//	double a1;
//	double a2;
//	double a3;
//	double pj;
//};
//int main() {
//	struct stu s[5];
//	double sum=0,max=0;
//	for (int i = 0;i < 5;i++) {
//		scanf("%d %lf %lf %lf", &s[i].no, &s[i].a1, &s[i].a2, &s[i].a3);
//		sum = sum + s[i].a1 + s[i].a2 + s[i].a3;
//		s[i].pj = (s[i].a1 + s[i].a2 + s[i].a3) / 3;
//	}
//	sum = sum / 15;
//	printf("%.2f\n", sum);
//	for (int j = 0;j < 5;j++) {
//		if (s[j].pj > max) {
//			max = s[j].pj;
//		}
//	}
//	for (int j = 0;j < 5;j++) {
//		if (s[j].pj == max) {
//			printf("%d %.2f %.2f %.2f %.2f", s[j].no, s[j].a1, s[j].a2, s[j].a3,s[j].pj);
//		}
//	}
//	return 0;
//}
//#define  LEN  sizeof(NODE)
//typedef struct note {
//	int num;
//	char name[10];
//	struct note* next;
//}NODE;
//NODE* Create_LinkList();
////读入学号，并删除指定学号的结点，
////成功删除返回正数，未找到学号返回负数。
//int  Delete_LinkList(NODE* head);
//void  Display_LinkList(NODE* head, int  flag);
//void  Free_LinkList(NODE* head);
//
//NODE* Create_LinkList() {
//	struct note* head = NULL, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d %s", &p1->num, p1->name);
//	while (p1->num != -1) {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct note*)malloc(sizeof(struct note));
//		scanf("%d %s", &p1->num, p1->name);
//	}
//	free(p1);
//	p2->next = NULL;
//	return head;
//}
//int Delete_LinkList(NODE* head) {
//	struct note* p1, * p,*p2;
//	int n;
//	p1 = p = head;
//	p2= (struct note*)malloc(sizeof(struct note));
//	strcpy(p2->name, "asd");
//	p2->num = 1;
//	p2->next = head;
//	scanf("%d", &n);
//	while (p != NULL && p->num != n) {
//		p1 = p;
//		p = p->next;
//	}
//	if (p == head) {
//		head = head->next;
//	}
//	if (p != NULL) {
//		p1->next = p->next;
//		return 1;
//	}
//	return -1;
//}
//void  Display_LinkList(NODE* head, int  flag)
//{
//	NODE* p;
//	if (flag < 0)
//		printf("no  data  ");
//	for (p = head->next; p != NULL; p = p->next)
//		printf("%d  %s  ", p->num, p->name);
//}
//
//void  Free_LinkList(NODE* head)
//{
//	NODE* p, * q;
//	p = head;
//	while (p->next != NULL)
//	{
//		q = p->next;
//		p->next = q->next;
//		free(q);
//	}
//	free(head);
//}
//int main() {
//	struct note* head;
//	int flag;
//	head = Create_LinkList();
//	flag=Delete_LinkList(head);
//	Display_LinkList(head, flag);
//	Free_LinkList(head);
//	return 0;
//}


//struct yuangong {
//	char name[20];
//	char sex[20];
//	char school[20];
//};
//int main() {
//	struct yuangong* p,p1;
//	int n;
//	scanf("%d", &n);
//	p = (struct yuangong*)malloc(n * sizeof(struct yuangong));
//	for (int i = 0;i < n;i++) {
//		scanf("%s %s %s", &p[i].name, &p[i].sex, &p[i].school);
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = i + 1;j < n;j++) {
//			if (p[i].name[0] > p[j].name[0]) {
//				p1 = p[i];
//				p[i] = p[j];
//				p[j] = p1;
//			}
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		printf("%s %s %s\n", p[i].name, p[i].sex, p[i].school);
//	}
//	return 0;
//}


//int  func(int  m, int  n);
//
//int  main()
//{
//	int  p, m, n;
//	scanf("%d%d", &m, &n);
//	p = func(m, n);
//	printf("%d", p);
//
//	return  0;
//}
//int func(int m, int n) {
//	int tem=1,a,b,c=1;
//	a = m;
//	b = n;
//	if (m < n) {
//		tem = m;
//		m = n;
//		n = tem;
//	}
//	
//	while (n != 0) {
//		c = m % n;
//		m = n;
//		n = c;
//	}
//	a = a * b / m;
//	return a;
//}

//#include<stdio.h>
//#include<iostream>
//
//using  namespace  std;
//
//int  fun2(int  x, int  y, int  z);
//
//int  main()
//{
//    int  a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d", fun2(a, b, c));
//    return  0;
//}
//int  fun2(int  x, int  y, int  z) {
//    if (x < 0 || y < 0 || z < 0) {
//        return -1;
//    }
//    int a=x;
//    int b = y;
//    if (x < y) {
//        x = y;
//        y = a;
//    }
//    while (a != 0) {
//        a = x % y;
//        x = y;
//        y = a;
//    }
//    while (b != 0) {
//        b = z % x;
//        z = x;
//        x = b;
//    }
//    return z;
//}



//int  fun1(int  x, int  y);
//
//int  main()
//{
//    int  m, n;
//    scanf("%d%d", &m, &n);
//    printf("%d", fun1(m, n));
//
//    return  0;
//}
//int fun1(int x,int y) {
//    int a, b = 0, sum = 0;
//    while (x != 0) {
//        a = x % 10;
//        x=x / 10;
//        if (a == y) {
//            sum++;
//        }
//    }
//    return sum;
//}

//int  func(int  m);
//
//int  main()
//{
//    int  i, n;
//    scanf("%d", &n);
//    for (i = 3;i < n;i++)
//    {
//        if (func(i) == 1)
//            printf("%d  ", i);
//    }
//    if (func(n) == 1)
//        printf("%d", n);
//
//    return  0;
//}
//int func(int i) {
//    for (int j = 2;j < i;j++) {
//        if (i % j == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}



//int  func(int  n);
//
//int  main()
//{
//    int  n, r;
//
//    scanf("%d", &n);
//    r = func(n);
//    printf("%d", r);
//
//    return  0;
//}
////提示：函数可以嵌套调用，同学们可自行定义所需函数。
//int func(int n) {
//    int a, b=0,sum=0,m;
//    m = n;
//    while (n != 0) {
//        n /= 10;
//        b++;
//    }
//    b--;
//    while (m != 0) {
//        a = m % 10;
//        m=m / 10;
//        sum = sum + a * pow(10.0, b);
//        b--;
//    }
//    return sum;
//}