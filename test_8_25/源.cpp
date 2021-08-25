#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//void xuanzhuan(char* arr,int left,int right) {
//	while (left <= right) {
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	k = k % 4;
//	xuanzhuan(arr,  0, k-1);
//	xuanzhuan(arr, k, 3);
//	xuanzhuan(arr, 0, 3);
//	printf("%s", arr);
//	return 0;
//}



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int bijiao(char* arr1, char* arr2,int n) {
	int x = n, count = 0,flag=0;
	while (x) {
		count = 0;
		for (int i = 0;i < n;i++) {
			if (arr1[i] == arr2[i + flag]) {
				count++;
			}
		}
		if (count == n)
			return 1;
		flag++;
		x--;
	}
}
int main() {
	char s1[100], s2[100];
	scanf("%s", &s1);
	scanf("%s", &s2);
	int len=strlen(s1);
	char s3[200];
	for (int i = 0;i < len * 2;i++) {
		int j = i % len;
		s3[i] = s1[j];
	}
	printf("返回值为：%d", bijiao(s2, s3, len));
	return 0;
}