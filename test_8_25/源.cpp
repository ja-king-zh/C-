#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
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



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
	printf("����ֵΪ��%d", bijiao(s2, s3, len));
	return 0;
}