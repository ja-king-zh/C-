#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strcpy(char* dest, char* src) {
	char* ret = dest;
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
int main() {
	char arr1[] = "hello";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}