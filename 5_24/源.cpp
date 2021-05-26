#define _CRT_SECURE_NO_WARNINGS 1
#include  <iostream>
#include  <string>
#include  <string.h>
#include  <stdio.h>
#include<stdio.h>
#include  <iostream>
using  namespace  std;

//
////在此补全汽车类Vehicle
//class Vehicle {
//public:
//    virtual void ShowMember() = 0;
//    float speed;
//    float weight;
//};
//
////在此补全公共汽车类Bus
//class Bus:public Vehicle{
//public:
//    Bus(float x, float y, int z) {
//        speed = x;
//        weight = y;
//        passagers = z;
//    }
//    void ShowMember() {
//        printf("%.0f %.0f %.0d\n", speed, weight, passagers);
//    }
//    int passagers;
//};
//
////在此补全卡车类Truck
//class Truck :public Vehicle {
//public:
//    Truck(float x, float y, float z) {
//        speed = x;
//        weight = y;
//        load = z;
//    }
//    void ShowMember() {
//        printf("speed=%.0f weight=%.0f load=%.0f\n", speed, weight,load);
//    }
//    float load;
//};
//
//void  test(Vehicle& ref)
//{
//    ref.ShowMember();
//    cout << endl;
//}
//
//int  main()
//{
//    float  speed;//交通工具速度
//    float  weight;//交通工具重量
//    int  passagers;//公共汽车乘客数
//    float  load;//卡车载重量
//    cin >> speed >> weight >> passagers;
//    Bus  b(speed, weight, passagers);
//    cin >> speed >> weight >> load;
//    Truck  t(speed, weight, load);
//    test(b);
//    test(t);
//    return  1;
//}
//int main() {
//	int x, sum = 0, i = 1;
//	scanf("%d", &x);
//	for (i = 1;i <= x;i++) {
//		if (x % i == 0) {
//			sum = sum + i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

////定义并实现课程类（需要补充完善程序部分4-1）
//class Class {
//public:
//    char cn1[10];
//    int cti1;
//    char cr1[10];
//    char cte1[10];
//    Class() {
//        //AG，64，abc，A319
//        strcpy(cn1, "AG");
//        cti1 = 64;
//        strcpy(cte1, "abc");
//        strcpy(cr1, "A319");
//        printf("%s %d %s %s", cn1, cti1, cte1, cr1);
//    }
//    Class(char *x,int y, char *z, char *m) {
//        //AG，64，abc，A319
//        strcpy(cn1, x);
//        cti1 = y;
//        strcpy(cte1, z);
//        strcpy(cr1,m);
//        printf("%s %d %s %s", cn1, cti1, cte1, cr1);
//    }
//    void show() {}
//};
//
//
//int  main()
//{
//    //变量定义（需要补充完善程序部分4-2）
//    char cn[10], cte[10], cr[10];
//    int cti;
//
//
//    //输入顺序为课程名称，学时，授课教师，上课教室
//    scanf("%s%d%s%s", cn, &cti, cte, cr);
//    if (strcmp(cn, "x") == 0)
//    {
//        //课程类对象定义（需要补充完善程序部分4-3）
//        Class cre;
//
//        cre.show();
//        printf("\n%d  %s  %s", cti, cte, cr);
//    }
//    else
//    {
//        //课程类对象定义（需要补充完善程序部分4-4）
//        Class cre(cn, cti, cte, cr);
//
//        cre.show();
//    }
//
//    return  0;
//}