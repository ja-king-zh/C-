#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include  <stdlib.h>
#include  <string.h>
#include  <math.h>
//class Building {
//public:
//	char name[30];
//	int a;
//	int b;
//	int c;
//	int d;
//};
//class  Teach_Building :public Building {
//
//};
//class Dorm_Building :public Building {
//public:
//	int e;
//};
//int main() {
//	Teach_Building a;
//	Dorm_Building b;
//	scanf("%s %d %d %d %d", &a.name, &a.a, &a.b, &a.c, &a.d);
//	scanf("%s %d %d %d %d %d", &b.name, &b.a, &b.b, &b.c, &b.d, &b.e);
//	printf("%s %d %d %d %d %d\n", b.name, b.a, b.b, b.c, b.d, b.e);
//	printf("%s %d %d %d %d", a.name, a.a, a.b, a.c, a.d);
//	return 0;
//}
//class Bank {
//public:
//	int cunru(int x) {
//		return yu_e() + x;
//	}
//	int quchu(int y) {
//		return yu_e() + y;
//	}
//	int yu_e() {
//		return zj;
//	}
//	int no;
//	int year;
//	int month;
//	int day;
//	int zj;
//};
//int main() {
//	Bank s;
//	int n,m;
//	scanf("%d %d", &s.no, &s.zj);
//	for (int i = 0;i < 3;i++) {
//		scanf("%d %d %d %d %d %d", &s.no, &s.year, &s.month, &s.day, &n, &m);
//			if (n==1) {
//				s.zj += m;
//		}
//			else {
//				s.zj -= m;
//			}
//	}
//	if (s.zj < 0) {
//		printf("error");
//	}
//	else {
//		printf("%d", s.zj);
//	}
//	return 0;
//}
//class Line {
//public:
//	void jisuan(float x1,float y1,float x2,float y2) {
//		printf("%.1f", sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
//	}
//};
//class point:public Line {
//public:
//	point() {
//		X = 0;
//		Y = 0;
//	}
//	point(int x, int y) {
//		X = x;
//		Y = y;
//	}
//	void SetX(int x) {
//		X = x;
//	}
//	void SetY(int y) {
//		Y = y;
//	}
//	float GetX() {
//		return X;
//	}
//	float GetY() {
//		return Y;
//	}
//	
//private:
//	float X, Y;
//};
//int main() {
//	float m, n,a,b;
//	scanf("%f %f", &m, &n);
//	point a1(m, n);
//	scanf("%f %f", &a, &b);
//	point a2;
//	a2.SetX(a);
//	a2.SetY(b);
//	a2.jisuan(m, n, a, b);
//	return 0;
//}
//class date {
//public:
//	date() {}
//	int year;
//	int month;
//	int day;
//};
//class person:public date {
//public:
//	person() {}
//	int no;
//	char sex;
//	long long sfz;
//};
//int main() {
//	int n;
//	scanf("%d", &n);
//	person a[100];
//	for (int i = 0;i < n;i++) {
//		scanf("%d %c %d %d %d %lld", &a[i].no, &a[i].sex, &a[i].year, &a[i].month, &a[i].day, &a[i].sfz);
//	}
//	int min = a[0].year;
//	for (int i = 1;i < n;i++) {
//		if (a[i].year < min) {
//			min = a[i].year;
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		if (a[i].year == min) {
//			printf("%d %c %d %d %d %lld", a[i].no, a[i].sex, a[i].year, a[i].month, a[i].day, a[i].sfz);
//		}
//	}
//	return 0;
//}
//struct  point
//{
//    double  x, y;
//};
////定义距离计算函数
//double jisuan(double a, double b, double c, double d) {
//    double f = sqrt((a - c) * (a - c) + (b - d) * (b - d));
//        return f;
//}
//
//
//int  main()
//{
//    point  p1, p2;
//    double  dis;
//    //输入两点坐标
//    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
//
//    //调用距离计算函数
//    dis = jisuan(p1.x, p1.y, p2.x, p2.y);
//
//        printf("%.2lf", dis);
//
//}
//{
//struct Node* head = NULL, * p1, * p2;
//p1 =p2= (struct Node*)malloc(sizeof(struct Node));
//scanf("%d", &p1->d);
//while (p1->d != 0) {
//	if (head == NULL) {
//		head = p1;
//	}
//	else {
//		p2->next = p1;
//	}
//	p2 = p1;
//	p1 =(struct Node*)malloc(sizeof(struct Node));
//	scanf("%d", &p1->d);
//	}
//}
////
////
////
//struct student {
//	char name[15];
//	int a;
//	int b;
//	struct student* next;
//};
//struct student* create(int n) {
//	struct student* head = NULL, * p1;
//	struct student* p2=NULL;
//	for (int i = 0;i < n;i++) {
//		p1 = (struct student*)malloc(sizeof(struct student));
//		scanf("%s %d %d",&p1->name, &p1->a, &p1->b);
//		if (head == NULL) {
//			head = p1;
//			p2 = p1;
//		}
//		else {
//			p2->next = p1;
//			p2 = p1;
//		}
//	}
//	p2->next = NULL;
//	return head;
//}
//int main() {
//	int n;
//	struct student* head, * p1,*p2;
//	scanf("%d", &n);
//	head = create(n);
//	p1 = p2 = head;
//	p1 = p2->next;
//	while (p2 != NULL) {
//		p1 = p2->next;
//		while (p1 != NULL) {
//			if (p1->a == p2->a && p1->b == p2->b) {
//				printf("%d %d %s %s", p2->a, p2->b, p2->name, p1->name);
//				break;
//			}
//			p1 = p1->next;
//		}
//		if (p1->next != NULL) {
//			p1 = p1->next;
//		}
//		else {
//			p1 = NULL;
//		}
//		while (p1 != NULL) {
//			if (p1->a == p2->a && p1->b == p2->b) {
//				printf(" %s", p1->name);
//				break;
//			}
//			p1 = p1->next;
//		}
//		if (p1->next != NULL) {
//			p1 = p1->next;
//		}
//		else {
//			p1 = NULL;
//		}
//		while (p1 != NULL) {
//			if (p1->a == p2->a && p1->b == p2->b) {
//				printf(" %s", p1->name);
//				break;
//			}
//			p1 = p1->next;
//		}
//		if (p1->next != NULL) {
//			p1 = p1->next;
//		}
//		else {
//			p1 = NULL;
//		}
//		if (p2->next != NULL) {
//			p2 = p2->next;
//			p1 = p2;
//			break;
//		}
//		else {
//			break;
//		}
//	}
//}

////struct yh {
////	int a;
//	int b;
//	struct yh* next;
//};
//struct yh* create(int n) {
//	struct yh* head=NULL, * p1, * p2=NULL;
//	for (int i = 0;i < n;i++) {
//		p1 = (struct yh*)malloc(sizeof(struct yh));
//		scanf("%d %d", &p1->a, &p1->b);
//		if (head == NULL) {
//			head = p1;
//			p2 = p1;
//		}
//		else {
//			p2->next = p1;
//			p2 = p1;
//		}
//	}
//	p2->next = NULL;
//	return head;
//}
//int main() {
//	int n,a,b,c,d,e,f,j;
//	struct yh* head,*p1;
//	scanf("%d", &n);
//	head = create(n);
//	p1 = head;
//	scanf("%d %d %d", &a, &b, &c);
//	while (p1 != NULL) {
//		if (p1!=NULL&&p1->a == a) {
//			if (b == 0) {
//				p1->b = p1->b - c;
//			}
//			else {
//				p1->b = p1->b + c;
//			}
//		}
//		p1 = p1->next;
//	}
//	p1 = head;
//	scanf("%d %d %d", &d, &e, &f);
//	while (p1!=NULL&&p1 != NULL) {
//		if (p1->a == d) {
//			if (e == 0) {
//				p1->b = p1->b - f;
//				if (p1->b < 0) {
//					p1->b = -1;
//				}
//			}
//			else {
//				p1->b = p1->b + f;
//			}
//		}
//		p1 = p1->next;
//	}
//	while(head!=NULL) {
//		printf("%d %d\n", head->a, head->b);
//		head = head->next;
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, t, r;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	r = a % b;
//	int n = a * b;
//	while (r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	printf("%d %d\n", b, n / b);
//	return 0;
//}
//int main() {
//	int m, n,tem,a,b;
//	scanf("%d %d", &m, &n);
//	if (m > n) {
//		tem = m;
//		m= n;
//		n = tem;
//	}
//	a = m;
//	b = n;
//	if (n % m == 0) {
//		printf("%d", m);
//	}
//	else {
//		tem = m;
//		m = n - m;
//		n = tem;
//		while (m - n != 1) {
//			if (m % n != 0) {
//				tem = m;
//				m = n - m;
//				n = tem;
//			}
//			else {
//				printf("%d", n);
//				break;
//			}
//		}
//		if (m - n == 1) {
//			printf("1");
//		}
//	}
//	if (b % a == 0) {
//		printf(" %d", b);
//	}
//	else if (b % a != 0 && a % 2 == 0 && b % 2 == 0) {
//		printf(" %d", a * b / 2);
//	}
//	else {
//		printf(" %d", a * b);
//	}
//	return 0;
//}
//int main() {
//	int a, b, c,d=0;
//	scanf("%d %d %d", &a,&b,&c);
///*	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
//		switch (b) {
//		case 1:
//			d = 0 + c;
//			break;
//		case 2:
//			d = 31 + c;
//			break;
//		case 3:
//			d = 59 + c;
//			break;
//		case 4:
//			d = 90 + c;
//			break;
//		case 5:
//			d = 120 + c;
//			break;
//		case 6:
//			d = 151 + c;
//			break;
//		case 7:
//			d = 181 + c;
//			break;
//		case 8:
//			d = 212 + c;
//			break;
//		case 9:
//			d = 242 + c;
//			break;
//		case 10:
//			d = 273 + c;
//			break;
//		case 11:
//			d = 303 + c;
//			break;
//		case 12:
//			d = 344 + c;
//			break;
//		}
//	}
//	else*/{
//		switch (b) {
//		case 1:
//			d = 0 + c;
//			break;
//		case 2:
//			d = 30 + c;
//			break;
//		case 3:
//			d = 60 + c;
//			break;
//		case 4:
//			d = 90+ c;
//			break;
//		case 5:
//			d = 120 + c;
//			break;
//		case 6:
//			d = 151 + c;
//			break;
//		case 7:
//			d = 181 + c;
//			break;
//		case 8:
//			d = 212 + c;
//			break;
//		case 9:
//			d = 242+ c;
//			break;
//		case 10:
//			d = 273 + c;
//			break;
//		case 11:
//			d = 303 + c;
//			break;
//		case 12:
//			d = 344 + c;
//			break;
//		}
//	}
//	printf("%d", d);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int i = a,j=0;
//	int c, d, e;
//	while (i <= b) {
//		c = i % 10;
//		d = (i / 10) % 10;
//		e = i / 100;
//		if ((c * c * c + d * d * d + e * e * e )== i) {
//			j++;
//		}
//		i++;
//	}
//	printf("%d", j);
//	return 0;
//}
//int main() {
//	char a[100];
//	int i = 0;
//	scanf("%c", &a);
//	while (a[i] >='0'&&a[i]<='9') {
//		i++;
//		scanf("%c", &a[i]);
//	}
//	i = i - 1;
//	printf("%d ", i+1);
//	while(i!=0){
//		if (a[i] != '0') {
//			printf("%c", a[i]);
//		}
//		i--;
//	}
//	printf("%c", a[i]);
//	return 0;
//}
//int main() {
//	char a[100];
//	int i=0,j=0;
//	scanf("%c", &a[i]);
//		while (a[i]>='0'&&a[i]<='9') {
//			i++;
//			scanf("%c", &a[i]);
//		}
//		a[i] = '\0';
//		i = i - 1;
//		while (i > j) {
//			if (a[i] == a[j]) {
//				i--;
//				j++;
//			}
//			else {
//				break;
//			}
//		}
//		if (i == j || i == j - 1) {
//			for (i = 0;a[i] != '\0';i++) {
//				printf("%c", a[i]);
//			}
//			printf(" is palindromic number");
//		}
//		else {
//			for (i = 0;a[i] != '\0';i++) {
//				printf("%c", a[i]);
//			}
//			printf(" is not palindromic number");
//		}
//	return 0;
//}
//int main() {
//	char a[100];
//	int i = 0,b=0,c=0,d=0,f=0;
//	scanf("%c", &a[i]);
//	while (a[i] != '\n') {
//		i++;
//		scanf("%c", &a[i]);
//	}
//	a[i] = '\0';
//	i = 0;
//	while (a[i] != '\0') {
//		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') {
//			b++;
//		}
//		else if (a[i] == ' ') {
//			c++;
//		}
//		else if (a[i] >= '0' && a[i] <= '9') {
//			d++;
//		}
//		else {
//			f++;
//		}
//		i++;
//	}
//	printf("%d %d %d %d", b, c, d, f);
//	return 0;
//}
//#include<string>
//#include<iostream>
//using namespace std;
//class student {
//public:
//	string name;
//	int no;
//	void set(string x, int y) {
//		name = x;
//		no = y;
//	}
//	void get() {
//		cout << "学生姓名为:" << name << "\n学生学号为:" << no << endl;
//	}
//};
//int main() {
//	student s1;
//	s1.set("zh", 1);
//	s1.get();
//	return 0;
//}
//const double PI = 3.14;
//class circle {
//public:
//	int r;
//	double zc(){
//		return 2 * PI * r;
//	}
//};
//int main() {
//	circle a;
//	a.r = 10;
//	printf("圆的周长为:%lf", a.zc());
//	return 0;
//}