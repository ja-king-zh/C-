#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

void init(int* arr, int x) {
	for (int i = 0;i < x;i++) {
		arr[i] = 0;
	}
}
void print(int* arr, int x) {
	for (int i = 0;i < x;i++) {
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int x) {
	int left = 0,right=x-1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}
int main() {
	int n,*arr;
	printf("�����������С\n");
	scanf("%d", &n);
	init(arr, n);
	print(arr, n);
	reverse(arr, n);
	return 0;
}