#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int main() {
//	//1.����ָ��
//	int a = 10;
//	int* p = &a;
//	cout << &a << endl;
//	cout << p << endl;
//	//2.ʹ��ָ��
//	*p = 1000;
//	cout << a << endl;
//	cout << *p << endl;
//	//3.ָ����ռ�ڴ�ռ�
//	cout << sizeof(int *) << endl;//4
//	cout << sizeof(float*) << endl;//4
//	cout << sizeof(double*) << endl;//4
//	cout << sizeof(char*) << endl;//4
//	//ָ����32λΪ4�ֽڣ�64λΪ8�ֽ�
//	return 0;
//}


int main() {
	//const����ָ��
	//1.����ָ��
	int a = 20;
	int b = 10;
	const int* p = &a;
	p = &b;
	//*p = 30;//err
	//2.ָ�볣��
	int* const s = &a;
	//s = &b;//err
	*s = 30;
	return 0;
}