#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
////��һ������ a , ��д��������������ǰK����С������
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