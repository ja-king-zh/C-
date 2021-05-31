#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include  <iostream>
#include  <iomanip>
#include  <string>
#include  <stdio.h>
#include  <string.h>
#include  <math.h>

using  namespace  std;

//定义并实现分数类  Fraction
class Fraction {
public:
    Fraction(int x, int y) {
        int z=0;
        numerator = x;
        denominator = y;
        if (x > y) {
            z = x;
            x = y;
            y = z;
        }
        while (y % x != 0) {
            z = y % x;
            y = x;
            x = z;
        }
        numerator = numerator / x;
        denominator = denominator / x;
    }
    double FractionToDecimal() {
        double a;
        a = (double)numerator / (double)denominator;
        return a;
    }
    void DecimalToFraction(char deci[]) {
        int i = 0,j=10000000,a=0;
        while (deci[i] != '\0') {
            if (deci[i] == '.') {
                i++;
                continue;
            }
            a = a + (deci[i] - 48) * j;
            j=j / 10;
            i++;
        }
        int b = 10000000;
        int c = 0;
        numerator = a;
        denominator = b;
        if (a > b){
            c = a;
            a = b;
            b = c;
        }
        while (b % a != 0) {
            c = b % a;
            b = a;
            a = c;
        }
        numerator = numerator/c;
        denominator = denominator/c;
    }
    void show() {
        printf("%d/%d", numerator, denominator);
    }
    int numerator, denominator;
};

int  main()
{
    int  numer, denomin;
    char  sdeci[50];

    cin >> numer >> denomin >> sdeci;
    Fraction  fr(numer, denomin);

    cout << setiosflags(ios::fixed) << setprecision(2);
    fr.show();
    cout << "  " << fr.FractionToDecimal() << "  ";
    fr.DecimalToFraction(sdeci);
    fr.show();

    return  0;
}


//struct note {
//	char a;
//	struct note* next;
//};
//struct note* create() {
//	struct note* head=NULL, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%c", &p1->a);
//	while (p1->a != '\n') {
//		if (head == NULL) {
//			head = p1;
//		}
//		else {
//			p1->next = p2;
//		}
//		p2 = p1;
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%c", &p1->a);
//	}
//	p1->next = p2;
//	head->next = NULL;
//	return p1;
//}
//int main() {
//	struct note* head;
//	head = create();
//	head = head->next;
//	while (head != NULL) {
//		printf("%c ", head->a);
//		head = head->next;
//	}
//	return 0;
//}


//struct yuan {
//	float x,y;
//};
//int main() {
//	struct yuan* a;
//	int i = 1,flag=0,r;
//	a = (struct yuan*)malloc(100*sizeof(struct yuan));
//	scanf("%d %f %f", &r, &a[0].x, &a[0].y);
//	scanf("%f %f", &a[i].x, &a[i].y);
//	while (a[i].x != 0 || a[i].y != 0) {
//		if ((a[i].x - a[0].x) * (a[i].x - a[0].x) + (a[i].y - a[0].y) * (a[i].y - a[0].y) <= r * r) {
//			flag++;
//		}
//		i++;
//		scanf("%f %f", &a[i].x, &a[i].y);
//	}
//	printf("%d", flag);
//	free(a);
//	return 0;
//}