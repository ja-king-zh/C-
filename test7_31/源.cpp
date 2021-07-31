#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

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
	printf("请输入数组大小\n");
	scanf("%d", &n);
	init(arr, n);
	print(arr, n);
	reverse(arr, n);
	return 0;
}