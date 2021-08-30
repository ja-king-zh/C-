#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int main() {
//	//1.定义指针
//	int a = 10;
//	int* p = &a;
//	cout << &a << endl;
//	cout << p << endl;
//	//2.使用指针
//	*p = 1000;
//	cout << a << endl;
//	cout << *p << endl;
//	//3.指针所占内存空间
//	cout << sizeof(int *) << endl;//4
//	cout << sizeof(float*) << endl;//4
//	cout << sizeof(double*) << endl;//4
//	cout << sizeof(char*) << endl;//4
//	//指针在32位为4字节，64位为8字节
//	return 0;
//}


int main() {
	//const修饰指针
	//1.常量指针
	int a = 20;
	int b = 10;
	const int* p = &a;
	p = &b;
	//*p = 30;//err
	//2.指针常量
	int* const s = &a;
	//s = &b;//err
	*s = 30;
	return 0;
}