#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


////�ݹ��ӡһ������ÿһλ
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


////�ݹ�ͷǵݹ�ʵ�ֽ׳�
////1.�ݹ�
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
////2.�ǵݹ�
//int main() {
//	int n,ret=1;
//	scanf("%d",&n);
//	for (int i = 1;i <= n;i++) {
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}


////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////1.�ݹ�
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
//2.�ǵݹ�
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



////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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


////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//1.�ݹ�
int feibo(int x) {
	if (x > 2)
		return feibo(x - 1) + feibo(x - 2);
	return 1;
}
//2.�ǵݹ�
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