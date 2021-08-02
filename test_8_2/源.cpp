#define _CRT_SECURE_NO_WARNINGS 1

#include<math.h>
#include<stdio.h>
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
////arr是一个整形一维数组。
//void print(int* arr) {
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	print(arr);
//	return 0;
//}


////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
////
////例如：2 + 22 + 222 + 2222 + 22222
////
//
//int main() {
//	int a,sum=0,n;
//	scanf("%d %d", &a,&n);
//	for (int i = 0;i < n;i++) {
//		sum = sum + a * pow(10, i);
//		for (int j = i-1;j >= 0;j--) {
//			sum = sum + a * pow(10, j);
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

int panduan(int x) {
	int count = 0,sum=0,x2,x1;
	x2 = x1 = x;
	while (x1) {
		x1 /= 10;
		count++;
	}
	while (x) {
		sum=sum+pow((x % 10), count);
		x /= 10;
	}
	if (sum == x2)
		return sum;
	return -1;
}
int main() {
	for (int i = 1;i <= 100000;i++) {
		if(panduan(i)!=-1)
			printf("%d ", panduan(i));
	}
	return 0;
}