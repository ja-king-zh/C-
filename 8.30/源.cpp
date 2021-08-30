#define _CRT_SECURE_NO_WARNINGS 1
#include<malloc.h>
#include<stdio.h>
//int main() {
//	int n,*arr;
//	scanf("%d", &n);
//	arr = (int*)malloc(n * sizeof(int));
//	arr[0] = arr[1] = 1;
//	for (int i = 2;i < n;i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	printf("%d", arr[n - 1]);
//	return 0;
//}


//int main() {
//	/*char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;*/
//	int x;
//	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d", x);
//	return 0;
//}

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()


//int main() {
//
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 5,
//		A1,
//		B1
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	return 0;
//}



//#include<stdio.h>
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//} 
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d/n", k);
//	return;
//}


////写一个函数求，求 unsigned int 型变量 x 在内存中二进制 1 的个数
//int main() {
//	int num,count=0;
//	scanf("%d", &num);
//	for (int i = 0;i < 32;i++) {
//		if (((num >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
int main() {
	printf("%d", (5 & 5) * 5 - 1);
	return 0;
}