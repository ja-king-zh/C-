#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strncat(char* dest, char* src, int num) {
	char* ret = dest;
	while (*++dest) {
		;
	}
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
int main() {
	char arr1[20] = "abc";
	char arr2[10] = "def";
	my_strncat(arr1, arr2, sizeof(arr2));
	printf("%s", arr1);
	return 0;
}