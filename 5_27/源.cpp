#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<malloc.h>

//#include  <iostream>
//#include  <stdio.h>
//#include  <stdlib.h>
//using  namespace  std;
//class  Rectangle {  //长方形类声明  
//public:
//
//
//    float  GetL() { return  L; }
//protected:
//    float  GetW() { return  W; }
//private:
//    float  L, W;
//};
//class  Cuboid : protected  Rectangle {  //长方体类声明  
//public:        //新增公有函数成员
//    float L, W;
//    Cuboid(float A, float B, float C) {
//        L = A;
//        W = B;
//        H = C;
//    }
//    float GetL() {
//        return L;
//    }
//    float GetH() {
//        return H;
//    }
//    float GetW() {
//        return W;
//    }
//
//private://新增私有数据成员
//    float  H;
//};
//int  main() {
//    float  a, b, c;
//    scanf("%f  %f  %f", &a, &b, &c);
//    Cuboid  cub(a, b, c);
//    cout << cub.GetL() << "," << cub.GetW() << "," << cub.GetH() << "\n";
//    return  0;
//}
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<string>
//using namespace std;
//
////在此补全图形类(Shape)
//class Shape {
//public:
//    int x, y, r;
//    float s, c;
//    virtual void Print() = 0;
//    virtual float Area() = 0;
//    virtual float Perimeter() = 0;
//};
//
////在此补全点类(Point)相关代码
//class Point :public Shape {
//public:
//    Point(int X,int Y) {
//        x = X;
//        y = Y;
//        r = 0;
//    }
//    void Print() {
//        printf("Area=%.0f\nPerimeter=%.0f", s, c);
//    }
//    float Area() {
//        s = 3.1415926f * 3.1415926f * r;
//        return s;
//    }
//    float Perimeter() {
//        c=2 * 3.1415926f * r;
//        return c;
//    }
//};
//
////在此补圆类(Circle)的相关代码
//class Circle :public Shape {
//public:
//    Circle(int X, int Y,int R) {
//        x = X;
//        y = Y;
//        r = R;
//    }
//    void Print() {
//        printf("Area=%.4f\nPerimeter=%.4f", s, c);
//    }
//    float Area() {
//        s = 3.1415926f * 3.1415926f * r;
//        return s;
//    }
//    float Perimeter() {
//        c = 2 * 3.1415926f * r;
//        return c;
//    }
//};
//
//void  fun(Shape& ref)
//{
//    ref.Print();
//    cout << endl;
//    cout << "Area=" << ref.Area() << endl;
//    cout << "Perimeter=" << ref.Perimeter() << endl;
//}
//
//int  main()
//{
//    int  x, y, r;
//    cin >> x >> y >> r;
//    Point  p(x, y);
//    Circle  c(x, y, r);
//    fun(p);
//    fun(c);
//    return  1;
//}
//#include  <iostream>
//using  namespace  std;
//
//class  Base
//{
//public:
//    int I;
//    Base(int i) {
//        I = i;
//    }
//    void fun1() {
//        cout << "A::fun1  " << I << endl;
//    }
//    virtual void fun2() {
//        cout << "B::fun1  " << I << endl;
//    }
//};
//
//class  Derive :public  Base
//{
//private:
//    int  j;
//public:
//    Derive(int  i, int  k) :Base(i) { j = k; }
//    void  fun1() { cout << "B::fun1  " << j << endl; }
//    void  fun2() { cout << "B::fun2  " << j + 10 << endl; }
//};
//void  disp(Base* obj)
//{
//    obj->fun1();
//    obj->fun2();
//}
//int  main()
//{
//    int  a, b;
//    cin >> a >> b;
//    Base* p;
//    Derive  t(a, b);
//    p = &t;
//    disp(p);
//    return  0;
//}
//#include  <iostream>
//using  namespace  std;
//
////在此补全A类的相关代码
//class A {
//public:
//    virtual void Do() {
//        printf(".");
//    }
//    void Fun() {
//        cout << "A::Fun" << endl;
//    }
//};
//
//class  B :public  A {
//public:
//    void  Do()
//    {
//        cout << "B::Do" << endl;
//    }
//};
//class  C :public    B {
//public:
//    void  Do()
//    {
//        cout << "C::Do" << endl;
//    }
//    void  Fun()
//    {
//        cout << "C::Fun" << endl;
//    }
//};
//
//void  Call(A &p)  //  在此处补全形参
//{
//    p.Fun();
//    p.Do();
//}
//int  main() {
//    C  c;  Call(c);
//    return  0;
//}

//#include<iostream>
//
//#include<string.h>
//
//using namespace std;
//
////在此补全雇员类(Employee)、推销人员类(Salesman)和技术人员类(Tech )的相关代码
//class Employee {
//public:
//    virtual void Pay() = 0;
//    virtual void Print() = 0;
//    char name[10];
//    int no;
//    float salary;
//};
//class Salesman :public Employee {
//public:
//    Salesman(char* n, int NO, float A, float B) {
//        strcpy(name, n);
//        no = NO;
//        a = A;
//        b = B;
//    }
//    void Pay() {
//        salary = a * b;
//    }
//    float a, b;
//    void Print() {
//        if (a == 0.5) {
//            printf("name=%s,NO=%d,wages=%.0f,rate=%.1f,sales=%.0f", name, no, salary, a, b);
//        }
//        else if (a == 0.075) {
//            printf("name=%s,NO=%d,wages=%.0f,rate=%.3f,sales=%.0f", name, no, salary, a, b);
//        }
//        else {
//            printf("name=%s,NO=%d,wages=%.0f,rate=%.2f,sales=%.0f", name, no, salary, a, b);
//        }
//    }
//};
//class Tech :public Employee {
//public:
//    Tech(char* n, int NO, float A, float B) {
//        strcpy(name, n);
//        no = NO;
//        a = A;
//        b = B;
//    }
//    void Pay() {
//        salary = a * b;
//    }
//    float a, b;
//    void Print() {
//        printf("name=%s,NO=%d,wages=%.0f,hourRate=%.0f,workHours=%.0f", name, no, salary, a, b);
//    }
//};
//
//void fun(Employee& ref)
//
//{
//
//    ref.Pay();
//
//    ref.Print();
//
//    cout << endl;
//
//}
//
//
//
//int main()
//
//{
//
//    char name[10];
//
//    int NO;
//
//    float rate, sales;
//
//    cin >> name >> NO >> rate >> sales;
//
//    Salesman s(name, NO, rate, sales);
//
//    float hourRate, workHours;
//
//    cin >> name >> NO >> hourRate >> workHours;
//
//    Tech t(name, NO, hourRate, workHours);
//
//    fun(s);
//
//    fun(t);
//
//    return 1;
//
//}
//struct note {
//	char a;
//	char b[10];
//	char c[10];
//	char d[10];
//};
//int main() {
//	int n;
//	struct note* p;
//	scanf("%d", &n);
//	p = (struct note*)malloc(n * sizeof(struct note));
//	for (int i = 0;i < n;i++) {
//		scanf("%s %s %s %s", &p[i].a,&p[i].b,&p[i].c, &p[i].d);
//	}
//	for (int i = 0;i < n;i++) {
//		printf("%c", p[i].a);
//		printf("\n");
//		for (int j = 0;j < 10;j++) {
//			if (p[i].b[j] != '3' && p[i].b[j] != '7') {
//				printf("%c", p[i].b[j]);
//			}
//		}
//		printf("\n");
//		for (int j = 0;j < 10;j++) {
//			if (p[i].c[j] != '3' && p[i].c[j] != '7') {
//				printf("%c", p[i].c[j]);
//			}
//		}
//		printf("\n");
//		for (int j = 0;j < 10;j++) {
//			if (p[i].d[j] != '3' && p[i].d[j] != '7') {
//				printf("%c", p[i].d[j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct note {
//	char a;
//	char b[40];
//};
//int main() {
//	int n;
//	struct note* p;
//	scanf("%d", &n);
//	p = (struct note*)malloc(n * sizeof(struct note));
//	for (int i = 0;i < n;i++) {
//		scanf("%s", &p[i].a);
//		for (int j = 0;j < 30;j++) {
//			scanf("%c", &p[i].b[j]);
//			if (p[i].b[j] == '\n') {
//				scanf("%c", &p[i].b[j]);
//			}
//			
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < 30;j++) {
//			if (p[i].b[j] == '3' || p[i].b[j] == '7') {
//				p[i].b[j] = -1;
//			}
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		printf("%c", p[i].a);
//		printf("\n");
//		for (int j = 0;j < 30;j++) {
//			if (p[i].b[j]>='1'&&p[i].b[j<='9']) {
//				printf("%c", p[i].b[j]);
//			}
//			if (j == 10) {
//				printf("\n");
//				continue;
//			}
//			if (j == 20) {
//				printf("\n");
//				continue;
//			}
//			if (j == 30) {
//				printf("\n");
//				continue;
//			}
//		}
//	}
//	return 0;
//}
//class point {
//private:
//	float x, y;
//public:
//	point() {
//		x = 0;
//		y = 0;
//	}
//	point(int m, int n) {
//		x = m;
//		y = n;
//	}
//	void setx(int m){
//		x = m;
//	}
//	void sety(int n) {
//		y = n;
//	}
//	float getx() {
//		return x;
//	}
//	float gety() {
//		return y;
//	}
//	void print() {
//		printf("%f %f", x, y);
//	}
//};
//class line :public point {
//public:
//	void print(float x1, float y1, float x2, float y2) {
//		float a=sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//		printf("%.1f", a);
//	}
//};
//int main() {
//	float x1, y1, x2, y2;
//	scanf("%f %f", &x1, &y1);
//	point p1(x1, y1);
//	scanf("%f %f", &x2, &y2);
//	point p2(x2, y2);
//	line c;
//	c.print(p1.getx(), p1.gety(), p2.getx(), p2.gety());
//	return 0;
//}