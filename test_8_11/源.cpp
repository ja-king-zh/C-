#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* arr) {
//	assert(arr != NULL);
//	int a=0;
//	while (*arr++) {
//		a++;
//	}
//	return a;
//}
//int main() {
//	char arr[] = "asdffa";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

void my_strcpy(const char* src,char* dest) {
	assert(src != NULL);
	while (*dest++ = *src++) {
		;
	}
}
int main() {
	char arr1[] = "asdfads";
	char arr2[20] = { 0 };
	my_strcpy(arr1, arr2);
	printf("%s", arr2);
	return 0;
}