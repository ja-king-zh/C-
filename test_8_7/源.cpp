#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++) {
//		for (int j = 0;j < n - i;j++) {
//			printf(" ");
//		}
//		for (int k = 0;k < 2*i-1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = n-1;i >= 1;i--) {
//		for (int j = 0;j < n - i;j++) {
//			printf(" ");
//		}
//		for (int k = 0;k < 2 * i - 1;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return 0;
}