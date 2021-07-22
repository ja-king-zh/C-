#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//int main() {
//	char arr1[20], arr2[] = "hellow";
//	char * ret=strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//	return 0;
//}



//int main() {
//	char arr1[] = "hello bit";
//	memset(arr1, 'x', 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//void Swap(int* px, int* py) {
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main() {
//	int a = 10, b = 20;
//	printf("%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


////≈–∂œ»ÚƒÍ
//int is_runnian(int x) {
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	for (int i = 1000;i <= 2000;i++) {
//		int ret=is_runnian(i);
//		if (ret)
//			printf("%d ", i);
//	}
//	return 0;
//}


//void Add(int* p) {
//	*p = *p + 1;
//}
//int main() {
//	int num=0;
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}


void chengfabiao(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d*%d=%d ",j,i,j*i);
		}
		printf("\n");
	}
}
int main(){
	chengfabiao(n);
	return 0;
}