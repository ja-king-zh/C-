#define _CRT_SECURE_NO_WARNINGS 1

#include<math.h>
#include<stdio.h>
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
////arr��һ������һά���顣
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


////��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////
////���磺2 + 22 + 222 + 2222 + 22222
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

//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

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