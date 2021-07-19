#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
////求最大公约数
//int main() {
//	int num1,num2,tem=1;
//	scanf("%d %d", &num1, &num2);
//	while (tem != 0) {
//		tem = num1 % num2;
//		num1 = num2;
//		num2 = tem;
//	}
//	printf("%d", num1);
//	return 0;
//}


////打印1000-2000之间的闰年
//int main() {
//	for (int i = 1000;i <= 2000;i++) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}



////打印100-200之间的素数
//int panduan(int x) {
//	for (int j = 2;j <= sqrt(x);j++) {
//		if (x % j == 0)
//			return 0;
//	}
//	return x;
//}
//int main() {
//	for (int i = 100;i <= 200;i++) {
//		int a=panduan(i);
//		if (a != 0)
//			printf("%d ", a);
//	}
//	return 0;
//}



////1-100数9的个数
//int main() {
//	int count=0;
//	for (int i = 1;i <= 100;i++) {
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}




//int main() {
//	float sum=0;
//	for (int i = 1;i <= 100;i+=2) {
//		sum += 1.0 / i;
//	}
//	for (int i = 2;i <= 100;i += 2) {
//		sum -= 1.0 / i;
//	}
//	printf("%f", sum);
//	return 0;
//}



////求最大值
//int main() {
//	int a[10],max=0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("%d", max);
//	return 0;
//}



////打印乘法表
//int main() {
//	for (int i = 1;i < 10;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分法查数
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 },left,right,num,flag=0;
	int sz = sizeof(a) / sizeof(a[0]);
	left = 0;
	right = sz - 1;
	scanf("%d", &num);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (num > a[mid])
			left = mid + 1;
		else if (num < a[mid])
			right = mid - 1;
		else{
			printf("找到了，下标是：%d", mid);
			flag++;
			break;
		}
	}
	if(flag==0)
		printf("未找到");
	return 0;
}