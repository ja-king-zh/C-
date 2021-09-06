#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
////有一个数组 a , 编写函数，求数组中前K个最小的数字
//int find(int k,int* arr) {
//	int min = arr[0];
//	for (int i = 0;i < k;i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	return min;
//}
//int main() {
//	int n,k;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	int min=find(k,arr);
//	printf("%d", min);
//	return 0;
//}
int main()
{
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char*)&ulA);
	return 0;
}