#define _CRT_SECURE_NO_WARNINGS 1
#include  <iostream>
#include  <string>
#include  <string.h>
#include  <stdio.h>
#include<stdio.h>
#include  <iostream>
using  namespace  std;

//
////�ڴ˲�ȫ������Vehicle
//class Vehicle {
//public:
//    virtual void ShowMember() = 0;
//    float speed;
//    float weight;
//};
//
////�ڴ˲�ȫ����������Bus
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
////�ڴ˲�ȫ������Truck
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
//    float  speed;//��ͨ�����ٶ�
//    float  weight;//��ͨ��������
//    int  passagers;//���������˿���
//    float  load;//����������
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

////���岢ʵ�ֿγ��ࣨ��Ҫ�������Ƴ��򲿷�4-1��
//class Class {
//public:
//    char cn1[10];
//    int cti1;
//    char cr1[10];
//    char cte1[10];
//    Class() {
//        //AG��64��abc��A319
//        strcpy(cn1, "AG");
//        cti1 = 64;
//        strcpy(cte1, "abc");
//        strcpy(cr1, "A319");
//        printf("%s %d %s %s", cn1, cti1, cte1, cr1);
//    }
//    Class(char *x,int y, char *z, char *m) {
//        //AG��64��abc��A319
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
//    //�������壨��Ҫ�������Ƴ��򲿷�4-2��
//    char cn[10], cte[10], cr[10];
//    int cti;
//
//
//    //����˳��Ϊ�γ����ƣ�ѧʱ���ڿν�ʦ���Ͽν���
//    scanf("%s%d%s%s", cn, &cti, cte, cr);
//    if (strcmp(cn, "x") == 0)
//    {
//        //�γ�������壨��Ҫ�������Ƴ��򲿷�4-3��
//        Class cre;
//
//        cre.show();
//        printf("\n%d  %s  %s", cti, cte, cr);
//    }
//    else
//    {
//        //�γ�������壨��Ҫ�������Ƴ��򲿷�4-4��
//        Class cre(cn, cti, cte, cr);
//
//        cre.show();
//    }
//
//    return  0;
//}