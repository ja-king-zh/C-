#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


////递归打印一个数的每一位
//void chaifen(int x) {	
//	if((x/10)!=0)
//		chaifen(x / 10);
//	printf("%d ", x % 10);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	chaifen(n);
//	return 0;
//}


////递归和非递归实现阶乘
////1.递归
//int jiecheng(int x) {
//	if (x > 1)
//		return x*jiecheng(x - 1);
//	return 1;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int ret=jiecheng(n);
//	printf("%d",ret);
//	return 0;
//}
////2.非递归
//int main() {
//	int n,ret=1;
//	scanf("%d",&n);
//	for (int i = 1;i <= n;i++) {
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}


////递归和非递归分别实现strlen
////1.递归
//int my_strlen(char* s) {
//	if (*s != '\0') {
//		return 1+my_strlen(s + 1);
//	}
//	return 0;
//}
//int main() {
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}
//2.非递归
//int my_strlen(char* s) {
//	int count = 0;
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}


//void reverse_string(char* string) {
//	int len = strlen(string);
//	int left = 0;
//	int right = len - 1;
//	char tmp = string[left];
//	string[left] = string[right];
//	string[right] = '\0';
//	if (len > 2)
//		reverse_string(string + 1);
//	string[right] = tmp;
//}
//int main() {
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}



////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int x) {
//	int a = x % 10;
//	if(x!=0)
//		return a + DigitSum(x / 10);
//	return 0;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}


////编写一个函数实现n的k次方，使用递归实现。
//int test(int x, int y) {
//	if (y > 0)
//		return x * test(x, y - 1);
//	return 1;
//}
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int ret = test(n, k);
//	printf("%d", ret);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//1.递归
int feibo(int x) {
	if (x > 2)
		return feibo(x - 1) + feibo(x - 2);
	return 1;
}
//2.非递归
int feibo1(int x) {
	int a = 1,b=1,c=1,count=2;
	while (count<x) {
		c = a + b;
		b = a;
		a = c;
		count++;
	}
	return c;
}
int main() {
	int n;
	scanf("%d", &n);
	int ret=feibo1(n);
	printf("%d", ret);
	return 0;
}