#define _CRT_SECURE_NO_WARNINGS 1

//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
#include<stdio.h>
int bianli(int arr[3][3], int x, int y,int n) {
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0) {
		if (arr[i][j] > n) {
			j--;
		}
		else if (arr[i][j] < n) {
			i++;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[3][3] = { 1,3,5,3,5,7,5,7,9 };
	int n;
	scanf("%d", &n);
	int ret = bianli(arr, 3, 3,n);
	if (ret == 1) {
		printf("找到了");
	}
	else
		printf("没找到");
	return 0;
}