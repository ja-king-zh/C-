#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>


////计算n的阶乘
//int main() {
//	int sum=1, n;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++) {
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main() {
//	int sum = 1, n, ret = 0;;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++) {
//		sum = sum * i;
//		ret = ret + sum;
//	}
//	printf("%d", ret);
//	return 0;
//	return 0;
//}



//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//查找一个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1,mid,n,flag=0;
//	mid = (left + right) / 2;
//	scanf("%d", &n);
//	while (left <= right) {
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//		else{
//			flag++;
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//		mid = (left + right) / 2;
//	}
//	if (flag == 0)
//		printf("找不到");
//	return 0;
//}


int main() {
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";
	int left = 0, right = strlen(arr2) - 1;
	while (left<=right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);
		system("cls");
	}
	return 0;
}