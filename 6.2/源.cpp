#define _CRT_SECURE_NO_WARNINGS 1
#include  <iostream>
#include  <stdio.h>
#include  <stdlib.h>
#include<math.h>
using  namespace  std;

//class Point {
//public:
//    float x, y;
//};
//class Polygon {
//public:
//    Polygon(int n) {
//        nLength = n;
//    }
//    void Set(int idx, Point pnt) {
//        Vertex[idx] = pnt;
//    }
//    float Perimeter() {
//        float he = 0;
//        int i, j;
//        for (i = 0;i < nLength-1;i++) {
//            j = i + 1;
//            he=he+sqrt((Vertex[i].x - Vertex[j].x)* (Vertex[i].x - Vertex[j].x) + 
//            (Vertex[i].y - Vertex[j].y) * (Vertex[i].y - Vertex[j].y));
//            
//        }
//        he= he + sqrt((Vertex[j].x - Vertex[0].x) * (Vertex[j].x - Vertex[0].x) +
//            (Vertex[j].y - Vertex[0].y) * (Vertex[j].y - Vertex[0].y));
//        return he;
//    }
//    int nLength;
//    Point Vertex[20];
//};
//int  main()
//{
//    int n = 0;
//    Point pnt;
//    cin >> n;
//    Polygon po(n);
//    for (int i = 0;i < n;i++)
//    {
//        cin >> pnt.x >> pnt.y;
//       po.Set(i, pnt);
//    }
//    printf("%.1f", po.Perimeter());
//    return 1;
//}


//#include  <iostream>
//#include  <stdio.h>
//#include  <stdlib.h>
//using  namespace  std;
//
//class  Animal {
//public:
//    Animal() {
//        printf("Animal\n");
//        num++;
//    }
//    virtual ~Animal() {  }
//    static void getcount() {
//        printf("Animal:%d\n", num);
//    }
//    static int num;
//    virtual void speak() = 0;
//};
//int Animal::num=0;
//class Dog :public Animal {
//public:
//    Dog() {
//        printf("Dog\n");
//        num1++;
//    }
//    ~Dog() {
//       
//    }
//    static void getcount() {
//        printf("Dog:%d\n", num1);
//    }
//    void speak() {
//        printf("wang\n");
//        num1--;
//        num--;
//    }
//    static int num1;
//};
//int Dog::num1 = 0;
//class Cat :public Animal {
//public:
//    Cat() {
//        printf("Cat\n");
//        num2++;
//    }
//    ~Cat(){ }
//    static void getcount() {
//        printf("Cat:%d\n", num2);
//    }
//    void speak() {
//        printf("miao\n");
//        num2--;
//        num--;
//    }
//    static int num2;
//};
//int Cat::num2 = 0;
//    int  main()
//    {
//        int  n, m, i = 0;
//        cin >> n;
//        cin >> m;
//        Animal* a[20];
//
//        for (; i < n; i++) {
//            a[i] = new  Dog;
//        }
//        Animal::getcount();
//        Dog::getcount();
//
//        for (; i < n + m; i++) {
//            a[i] = new  Cat;
//        }
//        Animal::getcount();
//        Cat::getcount();
//
//        for (int j = 0; j < n + m - 3; j++) {//总量小于3时，不做删除
//            a[j]->speak();
//            delete  a[j];
//            a[j] = NULL;
//        }
//        Animal::getcount();
//        Dog::getcount();
//        Cat::getcount();
//        return  0;
//    }