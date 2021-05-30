#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//#include <iostream>
//
//using namespace std;
//
//
//
////在此补全相关类
//class Vehicle {
//public:
//    float speed;
//    float weight;
//    int passagers;
//    virtual void ShowMember() = 0;
//};
//class Bus :public Vehicle {
//public:
//    Bus(float a, float b, int c) {
//        speed = a;
//        weight = b;
//        passagers = c;
//    }
//    void ShowMember() {
//        printf("speed=%.0f,weight=%.0f,passagers=%d", speed, weight, passagers);
//    }
//};
//class Truck :public Vehicle {
//public:
//    Truck(float a, float b, int c) {
//        speed = a;
//        weight = b;
//        passagers = c;
//    }
//    void ShowMember() {
//        printf("speed=%.0f,weight=%.0f,load=%d\n", speed, weight, passagers);
//    }
//};
//void test(Vehicle& ref)
//
//{
//
//    ref.ShowMember();
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
//    float speed;//交通工具速度
//
//    float weight;//交通工具重量
//
//    int passagers;//公共汽车乘客数
//
//    float load;//卡车载重量
//
//    cin >> speed >> weight >> passagers;
//
//    Bus b(speed, weight, passagers);
//
//    cin >> speed >> weight >> load;
//
//    Truck t(speed, weight, load);
//
//    test(b);
//
//    test(t);
//
//    return 1;
//
//}
//#include <iostream>
//
//using namespace std;
//
//class A {
//public:
//    // 在此处补充你的代码
//    virtual ~A() { cout << "destructor A" << endl; }
//};
//
//class B :public A {
//
//
//
//public:
//
//
//
//    ~B() { cout << "destructor B" << endl; }
//
//};
//
//int main() {
//
//    A* pa;
//
//    pa = new B;
//
//    delete pa;
//
//    return 0;
//
//}
//#include <iostream>
//
//using namespace std;
//
//class A {
//public:
//    //在此处补充你的代码
//    void Fun() {
//        cout << "A::Fun" << endl;
//    }
//    virtual void Do() {
//        cout << "A::Do" << endl;
//    }
//
//};
//
//class B :public A {
//
//public:
//
//    void Do()
//
//    {
//        cout << "B::Do" << endl;
//    }
//
//};
//
//class C :public B {
//
//public:
//
//    void Do()
//
//    {
//        cout << "C::Do" << endl;
//    }
//
//    void Fun()
//
//    {
//        cout << "C::Fun" << endl;
//    }
//
//};
//
//void Call(A* p)
//
//    // 在此处补充你的代码
//
//{
//
//    p->Fun(); p->Do();
//
//}
//
//int main() {
//
//    Call(new A());
//
//    Call(new C());
//
//    return 0;
//
//}
class Birthday {
public:
	int year, month, day;
};
class Teacher {
public:
	char name[20];
	int salary;
	Teacher() {
		strcpy(name, "wumingshi");
		salary = 5000;
	}
	Teacher(char* a, int b) {
		strcpy(name, a);
		salary = b;
	}
};
class Professor :public Teacher{
public:
	Professor(char* a, int b) {
		strcpy(name, a);
		salary = b;
	}
	Birthday birth;
	int* revenue;
	int typeNum;
};
int main() {
	char name[20];
	int salary,a,b,c,d;
	Teacher t1;
	printf("%s %d\n", t1.name, t1.salary);
	scanf("%s %d", name, &salary);
	Teacher t2(name, salary);
	printf("%s %d\n", t2.name, t2.salary);
	scanf("%s %d %d %d %d", name, &salary,&a,&b,&c);
	Professor p1(name, salary);
	p1.birth.year = a;
	p1.birth.month = b;
	p1.birth.day = c;
	printf("%s %d\n", p1.name, p1.salary);
	scanf("%d", &d);
	p1.revenue = (int*)malloc(d * sizeof(int));
	for (int i = 0;i < d;i++) {
		scanf("%d", &p1.revenue[i]);
		p1.salary = p1.salary + p1.revenue[i];
	}
	printf("%d", p1.salary);
	return 0;
}
//class Complex {
//public:
//	float x,y;
//	Complex(float a, float b) {
//		x = a;
//		y = b;
//	}
//	Complex(float c) {
//		x = c;
//		y = 0;
//	}
//	void add(Complex &p) {
//		x = x + p.x;
//		y = y + p.y;
//	}
//	void sub(Complex& p) {
//		x = x - p.x;
//		y = y - p.y;
//	}
//};
//int main() {
//	float a, b, c, d;
//	char e;
//	scanf("%f %f %f %f %c", &a, &b, &c, &d, &e);
//	Complex c1(a, b);
//	Complex c2(c, d);
//	if (e == 'a') {
//		c1.add(c2);
//	}
//	else {
//		c1.sub(c2);
//	}
//	if (c1.y > 0) {
//		printf("%.1f+%.1fi", c1.x, c1.y);
//	}
//	else {
//		printf("%.1f%.1fi", c1.x, c1.y);
//	}
//	return 0;
//}