#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1,const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
void maopao(int* arr, int sz, int width, int(*pf)(const void*, const void*)) {
	for (int i = 0;i < sz - 1;i++) {
		for (int j = 0;j < sz - 1 - i;j++) {
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print(int *arr,int sz) {
	for (int i = 0;i < sz;i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	maopao(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
	return 0;
}

