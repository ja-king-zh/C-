#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr1[10], arr2[10];
	for (int i = 0;i < 10;i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0;i < 10;i++) {
		scanf("%d", &arr2[i]);
	}
	for (int i = 0;i < 10;i++) {
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}