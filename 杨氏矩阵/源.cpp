#define _CRT_SECURE_NO_WARNINGS 1

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�
//������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
#include<stdio.h>
int bianli(int arr[3][3], int x, int y,int n) {
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0) {
		if (arr[i][j] > n) {
			j--;
		}
		else if (arr[i][j] < n) {
			i++;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[3][3] = { 1,3,5,3,5,7,5,7,9 };
	int n;
	scanf("%d", &n);
	int ret = bianli(arr, 3, 3,n);
	if (ret == 1) {
		printf("�ҵ���");
	}
	else
		printf("û�ҵ�");
	return 0;
}