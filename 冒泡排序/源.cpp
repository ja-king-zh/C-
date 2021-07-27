#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Sort(int* arr,int n) {
	for (int i = 0;i < n-1;i++) {
		for (int j = 0;j < n-1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int arr[] = { 1,4,2,5,3,6,8,9,7 };
	//≈≈–Ú
	int sz = sizeof(arr) / sizeof(arr[0]);
	Sort(arr,sz);
	return 0;
}