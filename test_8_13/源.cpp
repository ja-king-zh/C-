<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����Ļ�ϴ�ӡ������ǡ�
//int main() {
//	int n, a[100][100] = { 1 };
//	scanf("%d", &n);
//	a[0][0] = a[1][0] = a[1][1]= 1;
//	for (int i = 2;i < n;i++) {
//		for (int j = 0;j <= i;j++) {
//			if (j == 0) {
//				a[i][j] = 1;
//			}
//			else {
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j <= i;j++) {
//			if (a[i][j] > 0)
//				printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//int main() {
//	int a[4] = { 0 },i=0;
//	for (i = 0;i < 4;i++) {
//		a[i] = 1;
//		if (((a[0] ==0) + (a[2] == 1) + (a[3] == 1) + (a[3] == 0)) == 3)
//			break;
//		a[i] = 0;
//	}
//	char c = 'A' + i;
//	printf("%c", c);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" % d % d", a + b, c);
//	return 0;
//}


=======
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����Ļ�ϴ�ӡ������ǡ�
//int main() {
//	int n, a[100][100] = { 1 };
//	scanf("%d", &n);
//	a[0][0] = a[1][0] = a[1][1]= 1;
//	for (int i = 2;i < n;i++) {
//		for (int j = 0;j <= i;j++) {
//			if (j == 0) {
//				a[i][j] = 1;
//			}
//			else {
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j <= i;j++) {
//			if (a[i][j] > 0)
//				printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//int main() {
//	int a[4] = { 0 },i=0;
//	for (i = 0;i < 4;i++) {
//		a[i] = 1;
//		if (((a[0] ==0) + (a[2] == 1) + (a[3] == 1) + (a[3] == 0)) == 3)
//			break;
//		a[i] = 0;
//	}
//	char c = 'A' + i;
//	printf("%c", c);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" % d % d", a + b, c);
//	return 0;
//}


>>>>>>> 875c37c7ac010cb3942579f6d2c1f10985a991ba
