#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strcmp(char* src, char* dest) {
	int ret;
	while (*dest && !(ret=(*src - *dest))) {
		dest++;
		src++;
	}
	return ret;
}
int main() {
	char arr1[] = "hello";
	char arr2[] = "hello";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}